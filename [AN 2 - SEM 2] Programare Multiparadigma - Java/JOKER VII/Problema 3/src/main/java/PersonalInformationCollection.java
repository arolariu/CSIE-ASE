
import java.util.ArrayList;
import java.util.Scanner;

public class PersonalInformationCollection {

    public static void main(String[] args) {
        // implement here your program that uses the PersonalInformation class

        int counter = 0;
        ArrayList<PersonalInformation> infoCollection = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        while(true) {
            System.out.print("First name: ");
            String firstName = scanner.nextLine();
            if(firstName.isEmpty()) {
                break;
            }
            System.out.print("Last name: ");
            String lastName = scanner.nextLine();
            System.out.print("Identification number: ");
            String ID = scanner.nextLine();

            infoCollection.add(new PersonalInformation(firstName, lastName, ID));
            counter++;
        }
        System.out.println();
        for(int i = 0 ; i < counter ; i++) {
            System.out.println(infoCollection.get(i).getFirstName() + " " + infoCollection.get(i).getLastName());
        }

    }
}
