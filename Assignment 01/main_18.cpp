#include <iostream>

int main() {
    
    int day, month, year, weekday, ypart, cent;
    
    std::cin >> day;
    std::cin >> month;
    std::cin >> year;
    
    switch(month) {
        
        case 1: 
            
            month = 13;
            year -= 1;
            break;
        
        case 2: 
            
            month = 14;
            year -= 1;
            break;
        
    }
    
    weekday = (day + (((month + 1) * 26) / 10) + (year % 100) + ((year % 100) / 4) + ((year / 100) / 4) + (5 * (year / 100))) % 7;
    
    switch(weekday) {
        
        case 0: std::cout << "Saturday\n";
        break;
        
        case 1: std::cout << "Sunday\n";
        break;
        
        case 2: std::cout << "Monday\n";
        break;
        
        case 3: std::cout << "Tuesday\n";
        break;
        
        case 4: std::cout << "Wednesday\n";
        break;
        
        case 5: std::cout << "Thursday\n";
        break;
        
        case 6: std::cout << "Friday\n";
        break;
        
    }
    
    return 0;
}