#include <iostream>
#include "../headers/Triangle.h"
using namespace std;
Triangle::Triangle() {}
Triangle::~Triangle() {}
void Triangle::askCoordinates()
{
    cout << "\nInput the coordinates for triangle:\n";
    // double mx1,my1,mx2,my2;
    cout << "VERTEX1\nx1:";
    cin >> mx1;
    cout << "\ny1:";
    cin >> my1;
    cout << "VERTEX2\nx2:";
    cin >> mx2;
    cout << "\ny2:";
    cin >> my2;
    cout << "VERTEX3\nx3:";
    cin >> mx3;
    cout << "\ny3:";
    cin >> my3;
}