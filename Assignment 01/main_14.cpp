#include <iostream>
#include <iomanip>

int main() {
    
    double x, y;
    
    std::cin >> x;
    std::cin >> y;
    
    if(x > 0 && y > 0) {
        
        std::cout << "Quadrant 1\n";
        
    } else if(x < 0 && y > 0) {
        
        std::cout << "Quadrant 2\n";
        
    } else if(x < 0 && y < 0) {
        
        std::cout << "Quadrant 3\n";
        
    } else if(x > 0 && y < 0) {
        
        std::cout << "Quadrant 4\n";
        
    } else {
        
        std::cout << "No quadrant\n";
        
    }
    
    return 0;
}