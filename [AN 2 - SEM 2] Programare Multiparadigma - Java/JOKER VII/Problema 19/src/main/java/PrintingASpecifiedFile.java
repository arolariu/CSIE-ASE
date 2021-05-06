
import java.nio.file.Paths;
import java.util.Scanner;

public class PrintingASpecifiedFile {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Which file should have its contents printed?");
        String filename = scanner.nextLine();
        try(Scanner filescanner = new Scanner(Paths.get(filename))) {
            while(filescanner.hasNextLine()) {
                System.out.println(filescanner.nextLine());
            }
        } catch(Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
