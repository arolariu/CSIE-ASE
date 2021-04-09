
import java.util.Scanner;

public class CountingToHundred {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int limit = scanner.nextInt();
        for(int i = limit; i<=100;i++) {
            System.out.println(i);
        }
    }
}
