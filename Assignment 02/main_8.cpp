#include <iostream>

int main() {
    
    int n;
    
    std::cin >> n;
    
    if(n % 2 == 0) {
        
        std::cout << "Sorry, not odd\n";
        
    } else {
        
        for(int i = 0; i < n; i++) {
            
            int aCount = 0;
            
            for(int j = 0; j < n; j++) {
                
                if(i == j || i + j == n - 1) {
                    
                    std::cout << '*';
                    aCount++;
                    
                    if(aCount == 2) {
                        break;
                    }
                    
                } else {
                    
                    std::cout << " ";
                    
                }
                    
                if(i == (n / 2) && aCount == 1) {
                    break;
                }
                
            }
            
            std::cout << std::endl;
            
        }
        
    }
    
    return 0;
}