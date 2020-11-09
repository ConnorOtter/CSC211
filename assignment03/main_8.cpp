#include <iostream>
#include <string>

int unique(std::string& str, int length);

int main() {
    
    std::string input;
    std::getline(std::cin, input);
    
    std::cout << unique(input, input.length()) << std::endl;
    
    return 0;
}

int unique(std::string& str, int length) {
    int uCount = 0;
    for(int i = 0; i < length; i++) {
        bool unique = false;
        for(int j = 0; j < i; j++) {
            if(str[i] == str[j]) {
                unique = true;
                break;
            }
        }
        if(unique == false) {
            uCount++;
        }
    }
    return uCount;
}