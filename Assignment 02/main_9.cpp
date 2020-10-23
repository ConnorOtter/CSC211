#include <iostream>

int main() {

  int a, b, c, d = 0, bCount = 0, loops = 0;
  
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
    
    for(int i = 0; bCount < b ; i++, d += c) {
        
        bCount = 0;
        
        if(a + d > b) {
            break;
        }
        
        for(int j = 0; j < a + d; j++) {
            std::cout << "+";
            bCount++;
            if(bCount > b) {
                break;
            }
        }
        
        std::cout << std::endl;
        
        loops++;
        
        if(bCount > b) {
            break;
        }
        
    }
    
    d -= c;
    
    for(int i = 0; i < loops; i++, d -= c) {
      
        bCount = 0;
        
        for(int j = 0; j < a + d; j++) {
            std::cout << "+";
            bCount++;
            if(bCount > b) {
                break;
            }
        }
        
        if (bCount == a) {
            std::cout << std::endl;
            break;
        }
        
        std::cout << std::endl;
        
    }

  return 0;
}