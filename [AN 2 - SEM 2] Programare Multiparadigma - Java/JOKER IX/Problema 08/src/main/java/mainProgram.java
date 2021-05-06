
import java.util.Scanner;

public class mainProgram {

    public static void main(String[] args) {
        // NB! Do not create other scanner objects than the one below
        // if and when you create other classes, pass the scanner to them
        // as a parameter

        Scanner scan = new Scanner(System.in);
        Database birds = new Database();

        while(true) {
            System.out.print("? ");
            String command = scan.nextLine();

            if(command.equals("Quit")) {
                break;
            } else if(command.equals("Add")) {
                System.out.print("Name: ");
                String nameInRoman = scan.nextLine();
                System.out.print("Name in latin: ");
                String nameInLatin = scan.nextLine();
                Bird bird = new Bird(nameInRoman, nameInLatin);
                birds.addBird(bird);
            } else if(command.equals("Observation")) {
                System.out.print("Bird? ");
                String name = scan.nextLine();
                boolean isFound = false;
                for(Bird bird : birds.getBirds()) {
                    if(bird.getRoman().equals(name)) {
                        bird.incrementObservations();
                        isFound = true;
                        break;
                    }
                }
                if(!isFound) { System.out.println("Not a bird!"); }
            } else if(command.equals("All")) {
                System.out.println(birds);
            } else if(command.equals("One")) {
                System.out.print("Bird? ");
                String nameInRoman = scan.nextLine();
                for(Bird bird : birds.getBirds()) {
                    if(bird.getRoman().equals(nameInRoman)) {
                        System.out.println(bird);
                    }
                }
            }
        }
    }

}
