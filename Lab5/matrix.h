/** \file		matrix.h
*   \author		Ivan Ivanou
*   \copyright	GNU Public License
*/
#pragma once
class matrix
{
	const double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
	double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
	void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
	void printMatrix(const double mat[][MAX_COL], const int maxRow);
};

