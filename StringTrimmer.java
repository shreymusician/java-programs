import java.util.Scanner;

public class StringTrimmer {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string : ");
        String str = scanner.nextLine();

        int len = str.length();
        int s = 0, e = len - 1;

        // Find the first alphabetic character from the start
        while (s <= e && !Character.isLetter(str.charAt(s))) {
            s++;
        }

        // Find the first alphabetic character from the end
        while (e >= s && !Character.isLetter(str.charAt(e))) {
            e--;
        }

        StringBuilder res = new StringBuilder();

        // Copy characters and normalize internal spaces
        for (int i = s; i <= e; i++) {
            char current = str.charAt(i);

            if (!Character.isWhitespace(current)) {
                res.append(current);
            } 
            // Safely check the next character to prevent boundary crash
            else if (Character.isWhitespace(current) && i + 1 <= e && Character.isLetter(str.charAt(i + 1))) {
                res.append(' ');
            }
        }

        System.out.println("Result : " + res.toString());
        scanner.close();
    }
}
 
