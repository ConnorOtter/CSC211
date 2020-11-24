#include <iostream>
#include <vector>
void pain(std::vector<std::vector<char>>& grid);
int rowCount, colCount;

int main() {

    std::vector<std::vector<char>> universe;
    int genCount;
    
    std::cin >> rowCount >> colCount >> genCount;
    
    universe.resize(rowCount, std::vector<char>(colCount, '.'));
    
    for(int i = 0; i < rowCount; i++) {
        for(int j = 0; j < colCount; j++) {
            std::cin >> universe[i][j];
        }
    }
    
    for(int i = 0; i < genCount; i++) {
        pain(universe);
    }
    
    for(int i = 0; i < rowCount; i++) {
        for(int j = 0; j < colCount; j++) {
            std::cout << universe[i][j];
            if(j < colCount - 1 ) {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
    
    return 0;
}

void pain(std::vector<std::vector<char>>& grid) {
    std::vector<std::vector<char>> next;
    next.resize(rowCount, std::vector<char>(colCount, '.'));
    for(int i = 0; i < rowCount; i++) {
        for(int j = 0; j < colCount; j++) {
            
            int alive = 0;
            for(int l = -1; l <= 1; l++) {
                for(int m = -1; m <= 1; m++) {
                    if(l + i < 0 || l + i > rowCount - 1 || m + j < 0 || m + j > colCount -1) {
                        continue;
                    } else if(grid[l + i][m + j] == '*') {
                        alive++;
                    }
                }
            }
            
            if(grid[i][j] == '*') {
                alive--;
            }
            
            if(grid[i][j] == '*' && alive < 2) {
                next[i][j] = '.';
            } else if(grid[i][j] == '*' && alive > 3) {
                next[i][j] = '.';
            } else if (grid[i][j] == '.' && alive == 3) {
                next[i][j] = '*';
            } else {
                next[i][j] = grid[i][j];
            }
        }
    }
    
    for(int i = 0; i < rowCount; i++) {
        for(int j = 0; j < colCount; j++) {
            grid[i][j] = next[i][j];
        }
    }
}