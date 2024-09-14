#include <iostream>
#include "circleType.h"
using namespace std;

int main() { 

  cout<<"Testing the default constructor" <<endl;
  circleType<int> Cir1;
  cout<<"Center point: ";
  Cir1.printCenterPoint();
  cout <<"Circumference point: ";
  Cir1.printCircumPoint();
  
  cout<<"Testing constructor with parameters"<<endl;
  circleType<double>Cir2(5.3,7.2,-6.2,3.3);
  cout << "Center point: ";
  Cir2.printCenterPoint();
  cout<< "Circumference point: ";
  Cir2.printCircumPoint();

  cout<<"Testing the setCenterPoint,setCircumPoint"<<endl;
  Cir1.setCenterPoint(3,7);
  Cir1.setCircumPoint(6,-2);
  cout<<"Center point: ";
  Cir1.printCenterPoint();
  cout <<"Circumference point: ";
  Cir1.printCircumPoint();

  cout<<"Testing the getCenterPoint,getCircumPoint"<<endl;
  double x1, y1, x2, y2;
  Cir2.getCenterPoint(x1,y1);
  Cir2.getCircumPoint(x2,y2);
  cout << "x1= " << x1 << " y1= " << y1 << "x2= " << x2 << " y2= " << y2 << endl;

  cout<< "Testing operations: " << endl;
  Cir2.print();
  cout << endl;
  
  
  
  return 0;
}