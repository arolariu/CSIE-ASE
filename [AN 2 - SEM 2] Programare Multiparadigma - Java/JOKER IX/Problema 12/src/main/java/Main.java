
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Write your program here -- consider breaking the program into 
        // multiple classes.
        System.out.println("Enter point totals, -1 stops:");
        int sum = 0, sum2 = 0, counter = 0, counter2 = 0;
        int g0 = 0, g1 = 0, g2 = 0;
        int g3 = 0, g4 = 0, g5 = 0;

        while(true) {
            int number = Integer.parseInt(scanner.nextLine());
            if(number == -1) { break; }
            else if(number >= 0 && number <= 100) {
                sum += number;
                if(number >= 50) {
                    sum2 += number;
                    counter2++;
                }
                counter++;
            }
            if(number >= 0 && number <= 100) {
                if (number < 50) {
                    g0++;
                } else if (number < 60) {
                    g1++;
                } else if (number < 70) {
                    g2++;
                } else if (number < 80) {
                    g3++;
                } else if (number < 90) {
                    g4++;
                } else if (number >= 90) {
                    g5++;
                }
            }
        }
        System.out.println("Point average (all): " + 1.0f * sum / counter);
        System.out.println("Points average (passing): " + (sum2 == 0 ? "-" : 1.0f * sum2 / counter2));
        System.out.println("Pass percentage: " + 1.0f * 100 * counter2 / counter);
        System.out.println("Grade distribution:");
        System.out.println("5: " + stars(g5));
        System.out.println("4: " + stars(g4));
        System.out.println("3: " + stars(g3));
        System.out.println("2: " + stars(g2));
        System.out.println("1: " + stars(g1));
        System.out.println("0: " + stars(g0));
    }

    public static String stars(int number) {
        String star = "";
        for(int i = 0; i < number; i++) {
            star += "*";
        }
        return star;
    }
}
