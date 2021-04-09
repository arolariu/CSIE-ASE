
import java.util.Scanner;

public class DivisibleByThree {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int first = scanner.nextInt();
        int second = scanner.nextInt();
        divisibleByThreeInRange(first, second);
    }
    public static void divisibleByThreeInRange(int beginning, int end) {
        for(int i = beginning; i <= end; i++) {
            if( i % 3 == 0 ) {
                System.out.println(i);
            }
        }
    }
}
