#include <iostream>
#include <vector>
void stankyLeg(std::vector<std::vector<int>>& slideboi, std::vector<char> konamiCode);
bool bigTester(std::vector<std::vector<int>> completed);

int main() {
    
    bool isSolved;
    std::vector<std::vector<int>> puzzle;
    puzzle.resize(3, std::vector<int>(3, 0));
    std::vector<char> inputs;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cin >> puzzle[i][j];
        }
    }

    char c;
    while(std::cin >> c) {
        inputs.push_back(c);
    }
    
    stankyLeg(puzzle, inputs);
    isSolved = bigTester(puzzle);
    
    if(isSolved == true) {
        std::cout << "Solution is good!\n";
    } else {
        std::cout << "Wrong solution!\n";
    }

    return 0;
}

void stankyLeg(std::vector<std::vector<int>>& slideboi, std::vector<char> konamiCode) {
    int valTemp;
    struct blankPos {
        int row;
        int col;
    };
    struct blankPos blank;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(slideboi[i][j] == 0) {
                blank.row = i;
                blank.col = j;
            }
        }
    }
    for(int i = 0; i < konamiCode.size(); i++) {
        if(konamiCode[i] == 'U') {
            if(blank.row - 1 < 0) {
                continue;
            } else {
                valTemp = slideboi[blank.row - 1][blank.col];
                slideboi[blank.row - 1][blank.col] = 0;
                slideboi[blank.row][blank.col] = valTemp;
                blank.row -= 1;
            }
        } else if(konamiCode[i] == 'D') {
            if(blank.row + 1 > 2) {
                continue;
            } else {
                valTemp = slideboi[blank.row + 1][blank.col];
                slideboi[blank.row + 1][blank.col] = 0;
                slideboi[blank.row][blank.col] = valTemp;
                blank.row += 1;
            }
        } else if(konamiCode[i] == 'L') {
             if(blank.col - 1 < 0) {
                continue;
            } else {
                valTemp = slideboi[blank.row][blank.col - 1];
                slideboi[blank.row][blank.col - 1] = 0;
                slideboi[blank.row][blank.col] = valTemp;
                blank.col -= 1;
            }
        } else if(konamiCode[i] == 'R') {
            if(blank.col + 1 > 2) {
                continue;
            } else {
                valTemp = slideboi[blank.row][blank.col + 1];
                slideboi[blank.row][blank.col + 1] = 0;
                slideboi[blank.row][blank.col] = valTemp;
                blank.col += 1;
            }
        }
    }
}

bool bigTester(std::vector<std::vector<int>> completed) {
    bool solverino = true;
    std::vector<std::vector<int>> theRightOne {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 0}
    };
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(completed[i][j] != theRightOne[i][j]) {
                solverino = false;
            }
        }
    }
    return solverino;
}