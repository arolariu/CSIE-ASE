
import java.util.Scanner;

public class AverageOfPositiveNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int total = 0;
        int sum = 0;

        while (true) {
            System.out.println("Give a number:");
            int number = Integer.valueOf(scanner.nextLine());

            if (number == 0) {
                break;
            }

            if (number < 0) {
                continue;
            }

            total += 1;
            sum += number;
        }

        if (total > 0) {
            System.out.println("Average of the numbers: " + (1.0 * sum / total));
        } else {
            System.out.println("Cannot calculate the average");
        }
    }
}
