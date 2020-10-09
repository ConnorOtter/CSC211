#include <iostream>

int main() {
    
    int a, b, c;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    if(a + b + c != 180) {
        
        std::cout << "This triangle is impossible\n";
        
    } else if(a == 90 || b == 90 || c == 90) {
        
        std::cout << "Right\n";
        
    } else if(a > 90 || b > 90 || c > 90) {
        
        std::cout << "Obtuse\n";
        
    } else if(a < 90 && b < 90 && c < 90) {
        
        std::cout << "Acute\n";
        
    }
    
    return 0;
}