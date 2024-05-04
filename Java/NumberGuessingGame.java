import java.util.Scanner;
import java.util.Random;

public class NumberGuessingGame {
    public static void guessNumber() {
        Random random = new Random();
        int number = random.nextInt(100) + 1;
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.print("Guess the number (between 1 and 100): ");
            int guess = scanner.nextInt();

            if (guess < 1) {
                System.out.println("Too low! Try again.");
            } else if (guess > 100) {
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
