
import java.util.Scanner;

public class LiquidContainers {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int first = 0, second = 0;

        while (true) {
            System.out.print("> ");

            String input = scan.nextLine();
            if (input.equals("quit")) {
                if(first == 0) {
                    System.out.println("First: " + first + "/100");
                    System.out.println("Second: "+ second + "/100");
                } else if(first == 1) {
                    System.out.println("First: " + 0 + "/100");
                    System.out.println("Second: "+ second + "/100");
                }
                break;
            } else if(input.split(" ")[0].equals("add")) {
                int amount = Integer.parseInt(input.split(" ")[1]);
                if(amount < 0) {
                    continue;
                }
                else if(amount + first <= 100) {
                    first += amount;
                } else {
                    first = 100;
                }
            } else if(input.split(" ")[0].equals("move")) {
                int amount = Integer.parseInt(input.split(" ")[1]);
                if(amount < 0) {
                    continue;
                } else if(first - amount < 0) {
                    second += first;
                    first = 0;
                } else if(amount + second <= 100) {
                    first -= amount;
                    second += amount;
                } else {
                    second = 100;
                }
            } else if (input.split(" ")[0].equals("remove")) {
                int amount = Integer.parseInt(input.split(" ")[1]);
                if(amount < 0 || second - amount < 0) {
                    continue;
                } else {
                    second -= amount;
                }
            }
            System.out.println("First: " + first + "/100");
            System.out.println("Second: "+ second + "/100");
        }
    }

}
