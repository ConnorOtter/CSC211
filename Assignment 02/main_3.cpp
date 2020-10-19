#include <iostream>

int main() {
    
    int n;
    
    std::cin >> n;

    if(n == 0) {
        
        n = 1;
        
        std::cout << n << std::endl;
        
    } else if(n > 12 || n < 1) {
        
        std::cout << "Can't handle this\n";
        
    } else {
        
        for(int i = n - 1; i >= 1; i--) {
            
            n *= i;
            
        }
        
        std::cout << n << std::endl;
        
    }
    
    return 0;
}