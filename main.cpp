// This is the main to test the pointType class
#include <iostream>
#include "pointType.h"
using namespace std;

int main() { 
  
  cout << "From default constructor" << endl;
  pointType<int> p1I;
  pointType<double> p1D;
  cout << "Integer point: ";
  p1I.print();
  cout<< "Double point: ";
  p1D.print();
  
  cout << "From parameterized constructor" << endl;
  pointType<int>p2I(3,5);
  pointType<double>p2D(3.5,5.5);
  cout << "Integer point: ";
  p2I.print();
  cout<< "Double point: ";
  p2D.print();

  cout << "\n(Integer) Distance = ";
  double distance = p1I- p2I;
  cout << distance << endl;

  cout<< "\n(Double)Distance = ";
  distance = p1D - p2D;
  cout << distance << endl;

  

  return 0;



};




