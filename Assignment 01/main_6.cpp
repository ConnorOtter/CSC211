#include <iostream>

int main() {
    
    int num;
    
    std::cin >> num;
    
    if (num > 0) {
        std::cout << num << " is positive\n";
    } else if (num < 0) {
        std::cout << num << " is negative\n";
    } else {
        std::cout << num << " is neither positive nor negative\n";
    }
    
    return 0;
}