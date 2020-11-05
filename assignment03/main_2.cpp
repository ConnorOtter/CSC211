#include <iostream>
#include <string>

void reverse(std::string& str);
void lowercase(std::string& str);

int main() {
    
    bool isPalindrome = false;
    
    std::string input;
    std::getline(std::cin, input);
    lowercase(input);
    std::string test = input;
    
    reverse(test);
    
    if(input == test) {
        isPalindrome = true;
    }
    
    if(isPalindrome == true) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }
    
    return 0;
}

void reverse(std::string& str) {
    int l = str.length();
    for(int i = 0; i < l / 2; i++) {
        std::swap(str[i], str[l - i - 1]);
    }
}

void lowercase(std::string& str) {
    int l = str.length();
    for(int i = 0; i < l; i++) {
        switch(str[i]) {
            case 'A': str[i] = 'a';
            break;
            case 'B': str[i] = 'b';
            break;
            case 'C': str[i] = 'c';
            break;
            case 'D': str[i] = 'd';
            break;
            case 'E': str[i] = 'e';
            break;
            case 'F': str[i] = 'f';
            break;
            case 'G': str[i] = 'g';
            break;
            case 'H': str[i] = 'h';
            break;
            case 'I': str[i] = 'i';
            break;
            case 'J': str[i] = 'j';
            break;
            case 'K': str[i] = 'k';
            break;
            case 'L': str[i] = 'l';
            break;
            case 'M': str[i] = 'm';
            break;
            case 'N': str[i] = 'n';
            break;
            case 'O': str[i] = 'o';
            break;
            case 'P': str[i] = 'p';
            break;
            case 'Q': str[i] = 'q';
            break;
            case 'R': str[i] = 'r';
            break;
            case 'S': str[i] = 's';
            break;
            case 'T': str[i] = 't';
            break;
            case 'U': str[i] = 'u';
            break;
            case 'V': str[i] = 'v';
            break;
            case 'W': str[i] = 'w';
            break;
            case 'X': str[i] = 'x';
            break;
            case 'Y': str[i] = 'y';
            break;
            case 'Z': str[i] = 'z';
            break;
        }
    }
}