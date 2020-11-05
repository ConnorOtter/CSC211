#include <iostream>
#include <string>

int main() {
    
    int n, nCount = 1, input;
    
    std::cin >> n;
    
    while(std::cin >> input) {
        if(input == n) {
            nCount++;
        }
    }
    
    std::cout << nCount << std::endl;
    
    return 0;
}