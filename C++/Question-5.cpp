#include <iostream>

// Function to calculate the factorial of a number
int factorial(int n) {
    if(n==0) return 1;
        return n * factorial(n - 1);
}

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    int result = factorial(number);
    
    std::cout << "The factorial of " << number << " is " << result << std::endl;
    
    return 0;
}