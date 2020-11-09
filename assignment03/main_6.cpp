#include <iostream>
#include <string>

int hash(std::string& str, int length);

int main() {
    
    std::string input;
    std::getline(std::cin, input);
    
    std::cout << hash(input, input.length()) << std::endl;
    
    return 0;
}

int hash(std::string& str, int length) {
    int hashSum = 0;
    for(int i = 0; i < str.length(); i++) {
        hashSum += str[i];
    }
    return hashSum;
}