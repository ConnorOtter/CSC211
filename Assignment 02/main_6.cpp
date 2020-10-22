#include <iostream>

int main() {
    
    int n, s, sum, temp;
    
    std::cin >> n;
    std::cin >> s;
    
    sum = (n - s) + 1;
    
    temp = sum;
    
    for(int i = 1; i < s; i++) {
        
        temp += 1;
        sum += temp;
        
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}