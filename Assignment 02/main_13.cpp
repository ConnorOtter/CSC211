#include <iostream>

int ipow(int base, int exponent);

int main() {
    
    int num, r, testNum, result = 0, power, n = 0;
    
    std::cin >> num;
    testNum = num;
    
    while(testNum != 0) {
        testNum /= 10;
        n++;
    }
    
    testNum = num;
    
    while(testNum != 0) {
        r = testNum % 10;
        power = ipow(r, n);
        result += power;
        testNum /= 10;
    }
    
    if(result == num) {
        std::cout << "True\n";
    } else if(result != num) {
        std::cout << "False\n";
    }
    
    return 0;
}

int ipow(int base, int exponent) {
    int temp = base;
    for(int i = 1; i < exponent; i++) {
        base *= temp;
    }
    return base;
}