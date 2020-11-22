#include <iostream>
#include <vector>
bool sudokuCheck(std::vector<std::vector<int>>& board, int col, int row, int num);

int main() {
    
    bool isSolved;
    std::vector<std::vector<int>> sudoku;
    sudoku.resize(9, std::vector<int>(9, 0));
    
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            std::cin >> sudoku[i][j];
        }
    }
    
    int i = 0, j = 0, num = 1;
    do {
        isSolved = sudokuCheck(sudoku, i, j, num);
        i++;
        j++;
        num++;
        if(isSolved == false) {
            break;
        }
    }
    while(num <= 9);
    
    if(isSolved == true) {
        std::cout << "Solution is good!\n";
    } else {
        std::cout << "Wrong solution!\n";
    }
    
    return 0;
}

bool sudokuCheck(std::vector<std::vector<int>>& board, int row, int col, int n) {
    int unique = 0;
    
    for(int i = 0; i < 9; i++) {
        if(board[row][i] == n) {
            unique++;
        }
    }
    
    for(int i = 0; i < 9; i++) {
        if(board[i][col] == n) {
            unique++;
        }
    }
    
    int subBoxRow = row - row % 3, subBoxCol = col - col % 3;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i + subBoxRow][j + subBoxCol] == n) {
                unique++;
            }
        }
    }
    
    return unique == 3;
}