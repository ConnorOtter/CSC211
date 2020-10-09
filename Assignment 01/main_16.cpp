#include <iostream>
#include <iomanip>

int main() {
    
    double t, ct;
    char u;
    
    std::cin >> t;
    std::cin >> u;
    
    std::cout.precision(4);
    
    switch(u) {
        
        case 'C': 
            
            ct = (t * 1.8) + 32;
            std::cout << std::fixed << t << " degree(s) " << u << " is equal to " << ct << " degree(s) F\n";
            break;
            
        case 'F':
        
            ct = (t - 32) * (.55555555);
            std::cout << std::fixed << t << " degree(s) " << u << " is equal to " << ct << " degree(s) C\n";
            break;
        
    }
    
    return 0;
}