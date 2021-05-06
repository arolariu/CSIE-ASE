
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class SportStatistics {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("File: ");
        String filename = scan.nextLine();
        System.out.println("Team: ");
        String team = scan.nextLine();
        ArrayList<Integer> results = gamesNo(filename, team);
        statistics(team, results);
    }

    public static void statistics(String team, ArrayList<Integer> results) {
        System.out.println("Games: " + results.size());
        System.out.println("Wins: " + Collections.frequency(results, 1));
        System.out.println("Losses: " + Collections.frequency(results, 0));
    }

    public static ArrayList<Integer> gamesNo(String filename, String team) {
        ArrayList<Integer> values = new ArrayList<>();
        try(Scanner filescanner = new Scanner(Paths.get(filename))) {
            while(filescanner.hasNextLine()) {
                String line = filescanner.nextLine();
                if(line.contains(String.valueOf(team))) {
                    String[] parts = line.split(",");
                    if(parts[0].equals(team)) {
                        if(Integer.valueOf(parts[2]) > Integer.valueOf(parts[3])) {
                            values.add(1);
                        } else {
                            values.add(0);
                        }
                    } else if(parts[1].equals(team)) {
                        if(Integer.valueOf(parts[3]) > Integer.valueOf(parts[2])) {
                            values.add(1);
                        } else {
                            values.add(0);
                        }
                    }
                }
            }
        } catch (Exception e) {
            System.out.println("Error message: " + e.getMessage());
        }
        return values;
    }
}
