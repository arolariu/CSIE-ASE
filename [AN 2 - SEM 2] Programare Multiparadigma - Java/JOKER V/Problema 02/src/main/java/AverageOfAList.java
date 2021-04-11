
import java.util.ArrayList;
import java.util.Scanner;

public class AverageOfAList {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // implement here a program, that first reads user input
        // adding them on a list until user gives -1.
        // Then it computes the average of the numbers on the list
        // and prints it.
        ArrayList<Integer> numbers = new ArrayList<Integer>();
        while(true) {
            int number = scanner.nextInt();
            if(number == -1) {
                break;
            } else {
                numbers.add(number);
            }
        }
        int sum = 0;
        int total = numbers.size();
        for(int number : numbers) {
            sum += number;
        }
        System.out.println("Average: " + (1.0f * sum / total));
    }
}
