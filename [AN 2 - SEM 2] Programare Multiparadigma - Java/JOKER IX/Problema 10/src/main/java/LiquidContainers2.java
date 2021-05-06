
import java.util.Scanner;

public class LiquidContainers2 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Container c1 = new Container();
        Container c2 = new Container();

        while (true) {
            System.out.print("> ");

            String input = scan.nextLine();
            if (input.equals("quit")) {
                break;
            } else if (input.split(" ")[0].equals("add")) {
                c1.add(Integer.parseInt(input.split(" ")[1]));
            } else if (input.split(" ")[0].equals("move")) {
                if (c1.contains() >= Integer.parseInt(input.split(" ")[1])) {
                    c1.remove(Integer.parseInt(input.split(" ")[1]));
                    c2.add(Integer.parseInt(input.split(" ")[1]));
                } else {
                    c2.add(c1.contains());
                    c1.remove(c1.contains());
                }
            } else if (input.split(" ")[0].equals("remove")) {
                c2.remove(Integer.parseInt(input.split(" ")[1]));
            }
            System.out.println("First: " + c1);
            System.out.println("Second: " + c2);
        }
        if (c1.contains() == 1 || c1.contains() == 0) {
            System.out.println("First: 0/100");
            System.out.println("Second: " + c2);
        }
    }
}
