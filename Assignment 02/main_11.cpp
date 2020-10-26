#include <iostream>

int rowCount(char l);

int main() {
    
    char letter, a = 'A';
    int rows;
    
    std::cin >> letter;
    
    rows = rowCount(letter);
    
    for(int i = 1, m = 1; i <= rows; i++, m += 2, a = 'A') {
        
        for(int k = 1; k <= rows - i; k++) {
            std::cout << "  ";
        }
        
        for(int k = 0; k <= (m / 2); k++) {
            
            std::cout << a;
            if(i == 1 && a == 'A') {
                break;
            }
            a++;
            std::cout << " ";
            
        }
        
        a -= 2;
        
        for(int k = 0; k < (m / 2); k++) {
            
            std::cout << a;
            if(a == 'A') {
                break;
            }
            --a;
            std::cout << " ";
            
        }
        
        std::cout << std::endl;
        
    }
    
    return 0;
}

int rowCount(char l) {
    int input;
    switch(l) {
        case 'A': input = 1;
        break;
        case 'B': input = 2;
        break;
        case 'C': input = 3;
        break;
        case 'D': input = 4;
        break;
        case 'E': input = 5;
        break;
        case 'F': input = 6;
        break;
        case 'G': input = 7;
        break;
        case 'H': input = 8;
        break;
        case 'I': input = 9;
        break;
        case 'J': input = 10;
        break;
        case 'K': input = 11;
        break;
        case 'L': input = 12;
        break;
        case 'M': input = 13;
        break;
        case 'N': input = 14;
        break;
        case 'O': input = 15;
        break;
        case 'P': input = 16;
        break;
        case 'Q': input = 17;
        break;
        case 'R': input = 18;
        break;
        case 'S': input = 19;
        break;
        case 'T': input = 20;
        break;
        case 'U': input = 21;
        break;
        case 'V': input = 22;
        break;
        case 'W': input = 23;
        break;
        case 'X': input = 24;
        break;
        case 'Y': input = 25;
        break;
        case 'Z': input = 26;
        break;
    }
    return input;
}