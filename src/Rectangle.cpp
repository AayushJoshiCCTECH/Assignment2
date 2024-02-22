#include <iostream>
#include "../headers/Rectangle.h"
using namespace std;
Rectangle::Rectangle() {}
Rectangle::~Rectangle() {}
void Rectangle::askCoordinates()
{
    cout << "\nInput the coordinates of top right vertex:";
    cout << "\nx:";
    cin >> mx;
    cout << "\ny:";
    cin >> my;
}