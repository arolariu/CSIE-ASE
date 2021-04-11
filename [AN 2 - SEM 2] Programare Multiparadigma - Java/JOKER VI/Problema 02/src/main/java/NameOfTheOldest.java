
import java.util.Scanner;

public class NameOfTheOldest {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int age = 0;
        String name = "";
        while(true) {
            String combo = scanner.nextLine();
            if(combo.equals("")) {
                break;
            } else {
                String[] words = combo.split(",");
                if(Integer.valueOf(words[1]) > age) {
                    age = Integer.valueOf(words[1]);
                    name = words[0];
                }
            }
        }
        System.out.println("Name of the oldest: " + name);
    }
}
