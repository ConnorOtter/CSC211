#include <iostream>

int main() {
    
    int num;
    
    std::cin >> num;
    
    if (num % 2 == 0) {
        std::cout << num << " is even\n";
    } else {
        std::cout << num << " is odd\n";
    }
    
    return 0;
}