#include <iostream>

int ipow(int base, int exponent);

int main() {
    
    bool cPrime = true;
    int n, digits, dCount;
    
    std::cin >> n;
    
    if(n == 1 || n == 4 || n == 6 || n == 8 || n == 9) {
        cPrime = false;
    } else if(n / 10 < 10) {
        digits = 2;
    } else if(n / 100 < 10) {
        digits = 3;
    } else if(n / 1000 < 10) {
        digits = 4;
    } else if(n / 10000 < 10) {
        digits = 5;
    } else if(n / 100000 < 10) {
        digits = 6;
    } else if(n / 1000000 == 10) {
        digits = 7;
    }
    
    dCount = digits;
    
    if(cPrime == true && n != 2 && n != 3 && n != 5 && n != 7) {
        
        for(int i = 0, m = 10, d = 1; i < digits; i++, m *= 10, d *= 10) {
            
            if((n % m) / d == 0 || (n % m) / d == 2 || (n % m) / d == 4 || (n % m) / d == 5 || (n % m) / d == 6 || (n % m) / d == 8) {
                cPrime = false;
                break;
            }
            
        }
        
        while(dCount--) {
            int temp;
            for(int i = 2; i <= n / 2; i++) {
                if(n % i == 0) {
                    cPrime = false;
                    break;
                }
            }
            temp = n / ipow(10, digits - 1);
            n = n % ipow(10, digits - 1);
            n *= 10;
            n += temp;
        }
        
    }
    
    if(cPrime == true) {
        std::cout << "True\n";
    } else if(cPrime == false) {
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