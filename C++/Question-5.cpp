#include <iostream>

// Function to calculate the factorial of a number
int factorial(int n) {
    int ans  =1;
     for(int i =2;i<=n;i++){
        ans = ans*i;
     }
     return ans ;
}

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    int result = factorial(number);
    
    std::cout << "The factorial of " << number << " is " << result << std::endl;
    
    return 0;
}