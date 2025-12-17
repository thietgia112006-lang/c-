// p1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "nhap a, b, c: ";
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "phuong trinh vo so nghiem" << endl;

            }
            else
                cout << "phuong trinh vo nghiem" << endl;
        }
        else
            cout << "nghiem phuong trinh la: " << - c * 1.0 / a << endl;
    }
    else {
        int d = b * b - 4 * a * c;
        if (d == 0) {
            cout << "phuong trinh co nghiem kep: " << -b * 1, 0 / (2 * a);

        }
        else {
            if (d < 0) {
                cout << "phuong trinh vo nghiem" << endl;

            }
            else
                cout << "nghiem x1 : " << (-b - sqrt(d)) / (2 * a) << endl;
            cout << "nghiem x2 : " << (-b + sqrt(d)) / (2 * a) << endl;


        }
    }
}

