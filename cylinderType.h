#pragma once
#include "circleType.h"
template <class T>
class cylinderType :
  public circleType<T>{
  public:
      //default constrcutor
      cylinderType();
      //constructor with cooridnates set in
      cylinderType(T, T, T, T, T);
      //constructor with points set in
      cylinderType (pointType<T>,pointType<T>,T);

      //sets the height value
      void setHeight(T);
      //returns the height value
      T getHeight();

      //returns the surface area of cylinder
      double calcSurfaceArea();

      //returns the volume of cylinder
      double calcVolume();

      //prints the center point, radius, height, surface area, and volume
      void print();
  private:
  T height;
  };

template <class T>
cylinderType<T>::cylinderType():circleType<T>(),height(0){}

template <class T>
cylinderType<T>::cylinderType(T xCenter, T yCenter, T xBase, T yBase, T h):circleType<T>(xCenter,yCenter, xBase, yBase),height(h){}

template <class T>
cylinderType<T>::cylinderType(pointType<T> center, pointType<T> base, T h):
circleType<T>(center , base), height(h){}

template <class T>
void cylinderType<T>::setHeight(T h){
  height = h;
}

template <class T>
T cylinderType<T>::getHeight(){
  return height;
}

template <class T>
double cylinderType<T>::calcSurfaceArea(){
  double s = this -> calCircumference() * height + 2 * this->calArea();
  return s;
}

template <class T>
double cylinderType<T>::calcVolume(){
  double v = height * this->calArea();
  return v;
}

template <class T>
void cylinderType<T>::print(){
  circleType<T>::print();
  cout << "Surface area: " << calcSurfaceArea() << endl;
  cout<< "Volume: " << calcVolume() << endl;
  
}


