#pragma once
#include "pointType.h"
template <class T>
class circleType{

public:
  // Define static constant for the value of PI.
  static const double PI;

  // Default constructor
  circleType();

  // Constructor with coordinates set in 
  circleType(T,T,T,T);

  // Sets coordinates for the radius point
  void setCenterPoint(T,T);

  // Sets coordinates for the circumference point
  void setCircumPoint(T,T);

  // Returns the x and y values of the center point
  void getCenterPoint(T &x, T &y);

  // Displays the (x,y) coordinates of the center point
  void printCenterPoint();  // Fixed this by adding implementation below

  // Returns the x and y coordinates of the circumference point
  void getCircumPoint(T& xC, T& yC);

  // Displays the (x,y) coordinates of the circumference point
  void printCircumPoint();   

  //Returns the radius of the circle
  double calRadius();
  // Returns the circumference of the circle
  double calCircumference();
  //returns the area of the circle
  double calArea();

  void print();


  private:
  pointType<T> centerpoint;
  pointType<T> circumpoint;
};

// Define the constant PI
template <class T>
const double circleType<T>::PI = 3.1416;

// Implementations

template <class T>
circleType<T>::circleType() : centerpoint(), circumpoint() {}

template <class T>
circleType<T>::circleType(T xCenter, T yCenter, T xCircum, T yCircum): centerpoint(xCenter,yCenter), circumpoint(xCircum,yCircum) {}

template <class T>
void circleType<T>::setCenterPoint(T xC, T yC){
  centerpoint.setX(xC);
  centerpoint.setY(yC);  
}

template <class T>
void circleType<T>::setCircumPoint(T xC, T yC){
  circumpoint.setX(xC);
  circumpoint.setY(yC);
}

template <class T>
void circleType<T>::getCenterPoint(T& xC, T& yC){
  xC = centerpoint.getX();
  yC = centerpoint.getY();
}

template <class T>
void circleType<T>::getCircumPoint(T &xC, T &yC){
  xC = circumpoint.getX();
  yC = circumpoint.getY();
}


template <class T>
void circleType<T>::printCenterPoint() {
  T xC, yC;
  getCenterPoint(xC, yC); 
  cout << "(" << xC << ", " << yC << ")" <<endl;
}

template <class T>
void circleType<T>::printCircumPoint() {
  T xC, yC;
  getCircumPoint(xC, yC);
  cout << "(" << xC << ", " << yC << ")" << endl;
}

template <class T>
double circleType<T>:: calRadius(){
  
  return centerpoint-circumpoint;
}

template <class T>
double circleType<T>::calCircumference(){
  return PI * 2 * calRadius();
}

template <class T>
double circleType<T>::calArea(){
  return PI * calRadius() * calRadius();
}

template <class T>
void circleType<T>::print(){
  cout << "Centerpoint: ";
  printCenterPoint();
  cout << "Circumference point: ";
  printCircumPoint();
  cout << "Radius: " << calRadius() << endl;
  cout<< "Circumference: " << calCircumference() << endl;
  cout << "Area: " << calArea() << endl;



}