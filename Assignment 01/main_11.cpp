#include <iostream>

int main() {
    
    int m, d, y;
    
    std::cin >> m;
    std::cin >> d;
    std::cin >> y;
    
    if(m < 1 || m > 12){
        
        std::cout << "Imaginary month\n";
        
    } else {
        
        switch(m) {
            
            case 1: std::cout << "January " << d << ", " << y << std::endl;
            break;
            
            case 2: std::cout << "February " << d << ", " << y << std::endl;
            break;
            
            case 3: std::cout << "March " << d << ", " << y << std::endl;
            break;
            
            case 4: std::cout << "April " << d << ", " << y << std::endl;
            break;
            
            case 5: std::cout << "May " << d << ", " << y << std::endl;
            break;
            
            case 6: std::cout << "June " << d << ", " << y << std::endl;
            break;
            
            case 7: std::cout << "July " << d << ", " << y << std::endl;
            break;
            
            case 8: std::cout << "August " << d << ", " << y << std::endl;
            break;
            
            case 9: std::cout << "September " << d << ", " << y << std::endl;
            break;
            
            case 10: std::cout << "October " << d << ", " << y << std::endl;
            break;
            
            case 11: std::cout << "November " << d << ", " << y << std::endl;
            break;
            
            case 12: std::cout << "December " << d << ", " << y << std::endl;
            break;
            
        }
        
    }
    
    return 0;
}