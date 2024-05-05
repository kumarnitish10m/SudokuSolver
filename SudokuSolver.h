#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H

#include <vector>

class SudokuSolver
{

public:
	bool isNumberSafe(std::vector<std::vector<int>>& board, int boardSize, int row, int col, int num);
	bool solveSudoku(std::vector<std::vector<int>>& board, int boardSize, int row, int col);
	void printGrid(const std::vector<std::vector<int>>& board, int boardSize);
};


#endif // SUDOKUSOLVER_H
