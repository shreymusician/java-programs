import java.util.Scanner;

public class find_index {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input string from the user
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        System.out.print("Enter a character to match : ");
        char key = scanner.next().charAt(0);
        
        for(int i=0; i<input.length(); i++)
        {
            char ch = input.charAt(i);

            if(ch == key)
            {
                System.out.println("Fount Character at index : " + i);
                break;
            }    
        }
        
        scanner.close();
    }
}
