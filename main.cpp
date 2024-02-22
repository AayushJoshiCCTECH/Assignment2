#include <iostream>
#include "headers/Line.h"
#include "headers/FileDealings.h"
#include "headers/Rectangle.h"
#include "headers/Triangle.h"
#include "headers/Square.h"
#include "headers/Circle.h"
#include "headers/Ellipse.h"
using namespace std;
int main(){
    int choice;
    FileDealings f1;
    do {
        cout << "Welcome\nSelect Shape : \n0. Exit\n1. Line\n2. Triangle\n3. Square\n4. Rectangle\n5. Circle\n6. Ellipse\n";
        cin >> choice;
        
        switch (choice) { 
            case 0: 
            {
                cout << "Bye"; 
                break;
            }
            case 1:
            {

                cout << "You chose line";
                Line l1;
                l1.askCoordinates();
                f1.createFile(l1.mx1, l1.my1, l1.mx2, l1.my2);
                
                break;
            }
            case 2: 
            {

                cout << "You chose triangle"; 
                Triangle t1;
                t1.askCoordinates();
                f1.createFile(t1.mx1, t1.my1, t1.mx2, t1.my2, t1.mx3,t1.my3);
                break;
            }
            case 3:
            {

                cout << "You chose square"; 
                Square s1;
                s1.askCoordinates();
                f1.createFile(s1.mx,s1.my);
                break; 
            }
            case 4: 
            {

                cout<<"You chose rectangle";
                Rectangle r;
                r.askCoordinates();
                f1.createFile(r.mx,r.my);
                break; 
            }
            case 5: 
            {

                cout << "You have chosen circle"; 
                Circle c;
                c.askCoordinates();
                f1.createFile(c.mRadius);
                break; 
            }
            case 6: 
            {

                cout << "You chose Ellipse";
                Ellipse e;
                e.askCoordinates();
                f1.createFileEllipse(e.mSemiMajorAxis,e.mSemiMinorAxis);
                break;
            }
            default:
            {
                cout << "Choose again"; 
                break;
            }
        } 
    } while (choice != 0);

    f1.deleteFile();
    return 0;
}
