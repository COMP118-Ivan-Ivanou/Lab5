/** \file		Tutorial4_Part2.cpp
*   \author		Ivan Ivanou
*   \copyright	GNU Public License
*/

#include <iostream>
#include "matrix.h"
#include "matrix.cpp"

using namespace std;

void menu() {
    cout << "1. sumOfRow" << endl;
    cout << "2. sumOfCol" << endl;
    cout << "3. fillWithRandomNum" << endl;
    cout << "4. printMax" << endl;
    cout << "5. exit" << endl;
}

int main()
{
    int choosenNum;

    do {
        menu();

        cout << "Enter a number: " << endl;
        cin >> choosenNum;

        if (choosenNum == 1) {

        }

        if (choosenNum == 2) {

        }

        if (choosenNum == 3) {

        }

        if (choosenNum == 4) {

        }
    } while (choosenNum != 5);

    return 0;
}

