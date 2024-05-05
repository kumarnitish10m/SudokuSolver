#include <iostream>
#include "../include/SudokuSolver.h"


using namespace std;

int main() 
{
  
    SudokuSolver s;
    int boardSize = 9;  // for 9X9 grid
    vector<vector<int>> board =
    {
        {0, 1, 3, 8, 0, 0, 4, 0, 5},
        {0, 2, 4, 6, 0, 5, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 9, 3, 0},
        {4, 9, 0, 3, 0, 6, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 5, 0, 0},
        {0, 0, 0, 7, 0, 1, 0, 9, 3},
        {0, 6, 9, 0, 0, 0, 7, 4, 0},
        {0, 0, 0, 2, 0, 7, 6, 8, 0},
        {1, 0, 2, 0, 0, 8, 3, 5, 0}
    };

    cout << "Easy Sudoku Grid:" << endl << endl;
    s.printGrid(board, boardSize);

    bool sol = s.solveSudoku(board, boardSize, 0, 0);

    if (sol)
    {
        cout << "\nSolved Sudoku:" << endl;
        s.printGrid(board, boardSize);
    }
    else
    {
        cout << "\nNo solution exists." << endl;
    }

    cout<<endl;
   
    SudokuSolver s1;
   
    vector<vector<int>> board1 = 
    {
        {0, 0, 2, 0, 0, 0, 0, 4, 1},
        {0, 0, 0, 0, 8, 2, 0, 7, 0},
        {0, 0, 0, 0, 4, 0, 0, 0, 9},
        {2, 0, 0, 0, 7, 9, 3, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 8, 0},
        {0, 0, 6, 8, 1, 0, 0, 0, 4},
        {1, 0, 0, 0, 9, 0, 0, 0, 0},
        {0, 6, 0, 4, 3, 0, 0, 0, 0},
        {8, 5, 0, 0, 0, 0, 4, 0, 0}
    };

    cout << "Difficult Sudoku Grid:" << endl << endl;;
    s1.printGrid(board1, boardSize);

    bool sol1 = s1.solveSudoku(board1, boardSize, 0, 0);

    if (sol1) 
    {
        cout << "\nSolved Sudoku:" << endl;
        s1.printGrid(board1, boardSize);
    }
    else 
    {
        cout << "\nNo solution exists." << endl;
    }

    return 0;
}
