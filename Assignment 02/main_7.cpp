#include <iostream>

int main() {
    
    unsigned int n;
    int sum = 0;
    
    std::cin >> n;
    
    while(n > 0) {
        
        int d = n % 10;
        
        if(d % 2 == 0) {
            
            sum += d;
            
        }
        
        n /= 10;
        
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}