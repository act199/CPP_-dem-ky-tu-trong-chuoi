// CPP_ dem ky tu trong chuoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int chuoi(string str) {
    int dem = 0;
    for (char c : str) {
        if (c == 'a') {
           dem++;
        }
    }
    return dem;
}

int main() {
    string str = "fibonacci la nha bac hoc";

        int i;
        cout << "Nhap n: ";
        cin >> i;
    // ??m s? l?n xu?t hi?n c?a ký t? 'a' trong chu?i
    int solan = chuoi(str);

    cout << "So lan xuat hien ky tu trong chuoi la : " << chuoi(str) << endl;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
