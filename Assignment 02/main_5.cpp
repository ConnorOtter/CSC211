#include <iostream>

int main() {
    
    bool isPrime = true;
    int n;
    
    std::cin >> n;
    
    if(n == 0 || n == 1) {
        
        isPrime = false;
        
    } else {
        
        for(int i = 2; i <= n / 2; i++) {
            
            if(n % i == 0) {
                
                isPrime = false;
                break;
                
            }
            
        }
        
    }
    
    if(isPrime) {
        
        std::cout << "True\n";
        
    } else {
        
        std::cout << "False\n";
        
    }
    
    return 0;
}