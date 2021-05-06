
import java.util.Scanner;

public class Cubes {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while(true) {
            String line = scanner.nextLine();
            if(line.equals("end")) {
                break;
            }
            int value = Integer.valueOf(line);
            System.out.println(value * value * value);
        }
    }
}
