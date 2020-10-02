#include <iostream>

int main() {
    
    int n;
    
    std::cin >> n;
    
    if (n > 100 && n % 8 == 0) {
        std::cout << n << " satisfies the criteria\n";
    } else {
        std::cout << n << " does not satisfy the criteria\n";
    }
    
    return 0;
}