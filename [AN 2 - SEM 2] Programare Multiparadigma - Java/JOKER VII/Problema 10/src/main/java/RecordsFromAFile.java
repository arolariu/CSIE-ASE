
import java.nio.file.Paths;
import java.util.Scanner;

public class RecordsFromAFile {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Name of the file:");
        String name = scanner.nextLine();

        try (Scanner file = new Scanner(Paths.get(name))) {
            while(file.hasNextLine()) {
                String line = file.nextLine();
                String[] parts = line.split(",");

                String user = parts[0];
                int age = Integer.valueOf(parts[1]);

                String plural = age == 1 ? "" : "s";
                System.out.print(user + ", age: " + age + " year" + plural);
                System.out.println();
            }
        } catch (Exception e) {

        }
    }
}
