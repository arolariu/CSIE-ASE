
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Scanner;

public class IsItInTheFile {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Name of the file:");
        String file = scanner.nextLine();
        ArrayList<String> names = new ArrayList<>();
        System.out.println("Search for:");
        String searchedFor = scanner.nextLine();

        try (Scanner fil = new Scanner(Paths.get(file))) {
            while(fil.hasNextLine()) { names.add(fil.nextLine()); }
        } catch (Exception e) { System.out.println("Reading the file " + file + " failed."); }

        if(names.size() > 0) {
            if (names.contains(searchedFor)) {
                System.out.println("Found!");
            } else {
                System.out.println("Not found.");
            }
        }
    }
}
