
import java.util.Scanner;

public class DoubleInput {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // write your program here
        System.out.println("Give a number:");
        String numberDouble = scanner.nextLine();
        double number = Double.valueOf(numberDouble);
        System.out.println("You gave the number " + number);
    }
}
