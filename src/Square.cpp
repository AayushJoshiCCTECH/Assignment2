#include <iostream>
#include "../headers/Square.h"
Square::Square() {}
Square::~Square() {}
using namespace std;
void Square::askCoordinates()
{

    cout << "\nInput the x coordinate of top right vertex:\n";

    cin >> mx;
    my = mx;
}