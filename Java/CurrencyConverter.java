// Assume 64 USD is equal to 54 EUR
import java.util.Scanner;

public class CurrencyConverter {
    public static double usdToEur(double amount) {
        return amount * 0.8;
    }

    public static double eurToUsd(double amount) {
        return amount * 1.2;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter amount: ");
        double amount = scanner.nextDouble();
        System.out.print("Enter currency (USD/EUR): ");
        String currency = scanner.next();

        if (currency.equalsIgnoreCase("USD")) {
            double convertedAmount = usdToEur(amount);
            System.out.println("Amount in EUR: " + convertedAmount);
        } else if (currency.equalsIgnoreCase("EUR")) {
            double convertedAmount = eurToUsd(amount);
            System.out.println("Amount in USD: " + convertedAmount);
        } else {
            System.out.println("Invalid currency.");
        }
    }
}
