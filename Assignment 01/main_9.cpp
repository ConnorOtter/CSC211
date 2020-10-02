#include <iostream>

int main() {
    
    int age;
    
    std::cin >> age;
    
    if (age < 16) {
        std::cout << "Too young\n";
    } else if (age >= 16 && age < 18) {
        std::cout << "Can drive\n";
    } else if (age >= 18 && age < 21) {
        std::cout << "Can join the military\n";
    } else {
        std::cout << "Can have a beer\n";
    }
    
    return 0;
}