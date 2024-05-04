import java.util.Scanner;

public class Main {

    // Function to calculate the factorial of a number
    static int factorial(int n) {
	return n * factorial(n - 1);
        
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        int result = factorial(number);

        System.out.println("The factorial of " + number + " is " + result);

        scanner.close();
    }
}
