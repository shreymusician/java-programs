import java.util.Scanner;

public class InsertAsterisk {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input string from the user
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();
        
        // Replace 'a' with '*a'
        String result = input.replace("a", "*a");
        
        // Output the modified string
        System.out.println("Modified string: " + result);
        
        scanner.close();
    }
}
