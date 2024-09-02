#pragma once
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
template <class T>
class pointType{
private:
  T x;
  T y;

public:
  //default constructor
  pointType() {x = 0, y=0; cout << fixed << showpoint <<     setprecision(1); }

  //constructor with parameters
  pointType(T Ux, T Uy) : x(Ux) , y(Uy) {  cout << fixed << showpoint << setprecision(1); ;   }

  //settors
  void setX(T Ux) {x = Ux;}
  void setY(T Uy) {y = Uy;}
  void setPoint(T Ux, T Uy) {x = Ux, y = Uy;}

  //gettors
  T getX() {return x;}
  T getY() {return y;}
  void getpoint(T &Ux, T &Uy) {Ux = x, Uy = y;}
  double operator-(pointType<T> op2){
  double distance = sqrt(pow(x-op2.x,2) + pow(y-op2.y,2));
  return distance;
}
void print(){
  cout << "x: " << x << " y: " << y << endl;
}



};
