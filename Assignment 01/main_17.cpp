#include <iostream>

int main() {
    
    char grade;
    
    std::cin >> grade;
    
    switch(grade) {
        
        case 'A': std::cout << "Excellent\n";
        break;
        
        case 'a': std::cout << "Excellent\n";
        break;
        
        case 'B': std::cout << "Good\n";
        break;
        
        case 'b': std::cout << "Good\n";
        break;
        
        case 'C': std::cout << "Average\n";
        break;
        
        case 'c': std::cout << "Average\n";
        break;
        
        case 'D': std::cout << "Poor\n";
        break;
        
        case 'd': std::cout << "Poor\n";
        break;
        
        case 'F': std::cout << "Failing\n";
        break;
        
        case 'f': std::cout << "Failing\n";
        break;
        
    }
    
    return 0;
}