#include <iostream>

int main() {
    
    long long n;
    int k, j;
    
    std::cin >> n;
    std::cin >> k;
    
    j = n;
    
    if(k == 0) {
        
        n = 1;
        
    } else {
    
        for(int i = k - 1; i >= 1; i--) {
            
            n *= j;
            
        }
        
    }
    
    std::cout << n << std::endl;
    
    return 0;
}