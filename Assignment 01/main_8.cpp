#include <iostream>

int main() {
    
    int n;
    
    std::cin >> n;
    
    if (n % 10 == 9 || n % -10 == -9) {
        std::cout << n << " is good\n";
    } else {
        std::cout << n << " is no good\n";
    }
    
    return 0;
}