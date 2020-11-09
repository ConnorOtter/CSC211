#include <iostream>

int main() {
    
    int input[100];
    int n;
    bool isSorted = true;
    
    int j = 0;
    while(std::cin >> n) {
        input[j] = n;
        j++;
    }
    
    for(int i = 0; i < j - 1; i++) {
        if(input[i] < input[i + 1]) {
            isSorted = false;
        }
    }
    
    if(isSorted == true) {
        std::cout << "Sorted\n";
    } else {
        std::cout << "Not Sorted\n";
    }
    
    return 0;
}