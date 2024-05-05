#include "SudokuSolver.h"
#include <iostream>


bool SudokuSolver::isNumberSafe(std::vector<std::vector<int>>& board,int boardSize, int row, int col, int num)
{
    // 1st Condition:: to check if the column is valid
    for (int i = 0; i < boardSize; i++)
    {
        if (board[i][col] == num)
        {
            return false;
        }
    }
    //  2nd Condition:: to check if the row is valid
    for (int i = 0; i < boardSize; i++)
    {
        if (board[row][i] == num)
        {
            return false;
        }
    }
    //  
    // 3rd Condition:: to check if the 3x3 grid is valid
    int startRow = 3 * (row / 3); 
    int startCol = 3 * (col / 3);

    for (int i = startRow; i < startRow + 3; i++)
    {
        for (int j = startCol; j < startCol + 3; j++)
        {
            if (board[i][j] == num)
            {
                return false;
            }
        }
    }
    // if every thing is okay 
    return true;
}

bool SudokuSolver::solveSudoku(std::vector<std::vector<int>>& board,int boardSize, int row, int col)
{

    if (col == boardSize)
    {
        if (row == boardSize - 1)
        {
            return true; // we have filled the last cell 
        }
        // we are at the end of a column
        col = 0;
        row++;
    }

    if (board[row][col] != 0) // Already filled, solve for next cell
    {
        return solveSudoku(board, boardSize, row, col + 1);
    }

    for (int i = 1; i <= boardSize; i++) //to try every value between 1 and 9
    {
        if (isNumberSafe(board, boardSize, row, col, i))
        {
            board[row][col] = i;
            if (solveSudoku(board, boardSize, row, col + 1)) // try i and check if it works
            {
                return true;
            }

        }
        board[row][col] = 0; // previous i value didn't work
        // reset and try another i
    }

    return false; // We are at the end
    // sudoku can't be solved with the current values
}

void SudokuSolver::printGrid(const std::vector<std::vector<int>>& board, int boardSize)
{
    for (int row = 0; row < boardSize; row++)
    {
        for (int col = 0; col < boardSize; col++)
        {
            std::cout << board[row][col] << " ";            
        }
        std::cout << std::endl;        
    }
}