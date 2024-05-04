#include <iostream>

// Function to calculate the factorial of a number
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;
    if(number<0) {
        std::cout << "The factorial of " << number << " not exist " <<std::endl;
    }
    else{
    int result = factorial(number);
    std::cout << "The factorial of " << number << " is " << result << std::endl;
    }
    return 0;
}