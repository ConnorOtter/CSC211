#include <iostream>
#include <string>

void reverse(std::string& str);

int main() {
    
    std::string input;
    std::getline(std::cin, input);
    
    reverse(input);
    
    std::cout << input << std::endl;
    
    return 0;
}

void reverse(std::string& str) {
    int l = str.length();
    for(int i = 0; i < l / 2; i++) {
        std::swap(str[i], str[l - i - 1]);
    }
}