#include <iostream>
#include "../headers/Circle.h"
using namespace std;
Circle::Circle(){}
Circle::~Circle(){}
void Circle::askCoordinates(){
    cout<<"\nCircle's origin is at (0,0)\n";
    cout<<"\nInput the radius: ";
    cin>>mRadius;
}
