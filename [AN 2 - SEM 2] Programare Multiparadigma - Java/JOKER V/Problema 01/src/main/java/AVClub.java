
import java.util.Scanner;

public class AVClub {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while(true) {
            String word = scanner.nextLine();

            if(word.equals("")) {
                break;
            }

            String[] words = word.split(" ");
            for(String text : words) {
                if(text.contains("av")) {
                    System.out.println(text);
                }
            }
        }

    }
}
