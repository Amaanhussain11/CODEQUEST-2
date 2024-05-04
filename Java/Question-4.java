import java.util.Scanner;

public class PasswordChecker {
    public static boolean checkPassword(String password) {
        if (password.length() >= 8) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a password: ");
        String password = scanner.nextLine();
        if (checkPassword(password)) {
            System.out.println("Password is valid.");
        } else {
            System.out.println("Password is too short.");
        }
    }
}