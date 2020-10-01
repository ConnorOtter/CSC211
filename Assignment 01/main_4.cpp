#include <iostream>

int main() {

    int a, b, x;
    char c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    switch (c) {

        case '+': x = a + b;
        break;

        case '-': x = a - b;
        break;

        case '*': x = a * b;
        break;

        case '/': x = a / b;
        break;

    }

    std::cout << a << " " << c << " " << b << " = " << x << std::endl;

    return 0;
}