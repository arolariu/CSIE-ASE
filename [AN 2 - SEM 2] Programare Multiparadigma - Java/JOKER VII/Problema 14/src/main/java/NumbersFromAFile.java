
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Scanner;

public class NumbersFromAFile {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("File? ");
        String file = scanner.nextLine();
        System.out.print("Lower bound? ");
        int lowerBound = Integer.valueOf(scanner.nextLine());
        System.out.print("Upper bound? ");
        int upperBound = Integer.valueOf(scanner.nextLine());

        ArrayList<Integer> numbers = new ArrayList<>();
        try (Scanner fil = new Scanner(Paths.get(file))) {
            while(fil.hasNextLine()) {
                numbers.add(Integer.valueOf(fil.nextLine()));
            }
        } catch (Exception e) {
            System.out.println("The file " + file + " has failed to load.");
        }

        int counter = 0;
        for(int i = 0; i < numbers.size(); i++) {
            if(numbers.get(i) <= upperBound && numbers.get(i) >= lowerBound) {
                counter++;
            }
        }
        System.out.println("Numbers: " + counter);
    }

}
