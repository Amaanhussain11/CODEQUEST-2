// Assume 64 USD is equal to 54 EUR

#include <iostream>
#include <string>

double usdToEur(double amount) {
    return amount * 27/32;
}

double eurToUsd(double amount) {
    return amount * 32/27;
}

int main() {
    double amount;
    std::string currency;

    std::cout << "Enter amount: ";
    std::cin >> amount;
    std::cout << "Enter currency (USD/EUR): ";
    std::cin >> currency;

    if (currency == "USD") {
        double convertedAmount = usdToEur(amount);
        std::cout << "Amount in EUR: " << convertedAmount << std::endl;
    } else if (currency == "EUR") {
        double convertedAmount = eurToUsd(amount);
        std::cout << "Amount in USD: " << convertedAmount << std::endl;
    } else {
        std::cout << "Invalid currency." << std::endl;
    }

    return 0;
}
