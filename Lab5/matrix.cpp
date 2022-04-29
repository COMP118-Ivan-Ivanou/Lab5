/** \file		matrix.cpp
*   \author		Ivan Ivanou
*   \copyright	GNU Public License
*/

const int MAX_COL = 10;

#include <iostream>
#include "matrix.h"

using namespace std;

const double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
    int sum = 0;

    for (int i = 0; i < row; i++) {
        sum += mat[i][MAX_COL];
    }

    return sum;
}

double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
    int sum = 0;

    for (int i = 0; i < column; i++) {
        sum += mat[i][MAX_COL];
    }

    return sum;
}

void fillWithRandomNum(double mat[][MAX_COL], const int maxRow) {
    srand(time(NULL));

    for (int i = 0; i < maxRow; i++) {
        int num = rand();
        mat[i][MAX_COL] = num;
    }
}

void printMatrix(const double mat[][MAX_COL], const int maxRow) {
    for (int i = 0; i < maxRow; i++) {
        cout << mat[i][MAX_COL];
    }
}
