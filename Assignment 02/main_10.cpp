#include <iostream>

int main() {
    
    double loan, interest, payment, payed = 0, remaining;
    int months = 0;
    
    std::cin >> loan;
    std::cin >> interest;
    std::cin >> payment;
    
    remaining = loan;
    interest += 1;
    
    while(remaining >= 0.1) {
        remaining *= interest;
        payed += payment;
        remaining -= payment;
        months++;
    }
    
    std::cout << months << std::endl;
    
    return 0;
}