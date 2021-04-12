
import java.util.Scanner;

public class MainProgram {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Statistics sumAll = new Statistics();
        Statistics sumEven = new Statistics();
        Statistics sumOdd = new Statistics();

        System.out.println("Enter numbers:");
        while(true) {
            int number = scanner.nextInt();
            if(number == -1) {
                break;
            } else {
                sumAll.addNumber(number);
                if(number % 2 == 0) {
                    sumEven.addNumber(number);
                } else {
                    sumOdd.addNumber(number);
                }
            }
        }
        System.out.println("Sum: " + sumAll.sum());
        System.out.println("Sum of even numbers: " + sumEven.sum());
        System.out.println("Sum of odd numbers: " + sumOdd.sum());
    }
}
