import java.util.Scanner;
import java.util.Random;

public class NumberGuessingGame {
    public static void guessNumber() {
        Random random = new Random();
        int number = random.nextInt(100) + 1; // Generates a random number between 1 and 100
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.print("Guess the number (between 1 and 100): ");
            int guess = scanner.nextInt();

            if (guess < number) {
                System.out.println("Too low! Try again.");
            } else if (guess > number) {
                System.out.println("Too high! Try again.");
            } else {
                System.out.println("Congratulations! You guessed the number.");
                break;
            }
        }
    }

    public static void main(String[] args) {
        guessNumber();
    }
}