#include <iostream>
#include <iomanip>

int main() {
    
    double x, y, z, n;
    
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    
    n = (x + y + z) / 3;
    
    std::cout.precision(4);
    
    std::cout << std::fixed << "The average of " << x << ", " << y << ", and " << z << " is " << n << std::endl;
    
    return 0;
}