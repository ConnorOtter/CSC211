#include <iostream>

int main() {
    
    int x, y, z;
    
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    
    if(x < y && x < z) {
        
        std::cout << "The smallest number entered was " << x << std::endl;
        
    } else if(y < x && y < z) {
        
        std::cout << "The smallest number entered was " << y << std::endl;
        
    } else {
        
        std::cout << "The smallest number entered was " << z << std::endl;
        
    }
    
    return 0;
}