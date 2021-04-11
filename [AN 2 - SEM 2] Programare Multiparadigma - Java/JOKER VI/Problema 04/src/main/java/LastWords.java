
import java.util.Scanner;

public class LastWords {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while(true) {
            String word = scanner.nextLine();

            if(word.equals("")) {
                break;
            }

            String[] words = word.split(" ");
            System.out.println(words[words.length - 1]);
        }
    }
}
