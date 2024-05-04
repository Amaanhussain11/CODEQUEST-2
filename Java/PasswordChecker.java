// Password should have atleast 8 characters
// Password must have atleast one lowercase character, one uppercase character and a special character

import java.util.Scanner;

public class PasswordChecker {
    static int lc=0,uc=0,sc=0;
    public static boolean checkPassword(String password) {
        if (password.length() >= 8) {
            for (int i = 0; i < password.length(); i++) {
                if(password.charAt(i)>='a' && password.charAt(i)<='z') lc++;
                else if(password.charAt(i)>='A' && password.charAt(i)<='Z') uc++;
                else if(password.charAt(i)>='0' && password.charAt(i)<='9') ;
                else if(password.charAt(i)==' ') ;
                else sc++;
                
            }
            if(lc>0 && uc>0 && sc>0) return true;
            else return false;
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
            System.out.println("Password is invalid.");
        }
    }
}
