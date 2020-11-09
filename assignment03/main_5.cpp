#include <iostream>

void removeDuplicates(char* str);

int main() {
    
    char input[100];
    
    std::cin.getline(input, 100);
    
    removeDuplicates(input);
    
    std::cout << input << std::endl;
    
    return 0;
}

void removeDuplicates(char* str) {
    if (str[0] == '\0') 
        return;
    if (str[0] == str[1]) {
        int i = 0;  
        for(i; str[i] != '\0'; i++) { 
            str[i] = str[i + 1];
        } 
        removeDuplicates(str); 
    } 
    removeDuplicates(str + 1); 
} 