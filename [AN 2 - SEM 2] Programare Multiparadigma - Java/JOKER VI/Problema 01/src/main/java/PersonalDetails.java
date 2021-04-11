
import java.util.ArrayList;
import java.util.Scanner;

public class PersonalDetails {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String longest = "";
        int sum = 0;
        int counter = 0;

        while(true) {
            String combo = scanner.nextLine();

            if(combo.equals("")) {
                break;
            } else {
                String[] words = combo.split(",");
                if(words[0].length() > longest.length()) {
                    longest = words[0];
                }
                sum += Integer.valueOf(words[1]);
                counter++;
            }
        }
        System.out.println("Longest name: " + longest);
        System.out.println("Average of birth years: " + 1.0f * sum / counter);
    }
}
