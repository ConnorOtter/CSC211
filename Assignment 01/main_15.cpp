#include <iostream>
#include <iomanip>

int main() {
    
    double t;
    
    std::cin >> t;
    
    std::cout.precision(4);
    std::cout << std::fixed;
    
    t = (t * 1.8) + 32;
    
    if(t <= 32) {
        
        std::cout << "It is cold out\n";
        
    } else if(t > 32 && t <= 65) {
        
        std::cout << "Wear a jacket\n";
        
    } else if(t > 65) {
       
        std::cout << "It is nice out\n";
       
    }
    
    return 0;
}