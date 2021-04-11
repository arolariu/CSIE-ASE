
import java.util.Scanner;

public class AgeOfTheOldest {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int age = 0;

        while(true) {
            String combo = scanner.nextLine();

            if(combo.equals("")) {
                break;

            } else {
                String[] words = combo.split(",");
                if(Integer.valueOf(words[1]) > age) {
                    age = Integer.valueOf(words[1]);
                }

            }
        }
        System.out.println("Age of the oldest: " + age);
    }
}
