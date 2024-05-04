// Assume 64 USD is equal to 54 EUR

#include <iostream>
#include <string>

double usdToEur(double amount) {
    return amount * 0.8;
}

double eurToUsd(double amount) {
    return amount * 1.2;
}

int main() {
    double amount;
    std::string currency;

    std::cout << "Enter amount: ";
    std::cin >> amount;
    std::cout << "Enter currency (USD/EUR): ";
    std::cin >> currency;

    if (currency == "USD") {
        double convertedAmount = eurToUsd(amount);
        std::cout << "Amount in EUR: " << convertedAmount << std::endl;
    } else if (currency == "EUR") {
        double convertedAmount = usdToEur(amount);
        std::cout << "Amount in USD: " << convertedAmount << std::endl;
    } else {
        std::cout << "Invalid currency." << std::endl;
    }

    return 0;
}
