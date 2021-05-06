import java.util.Scanner;

public class TextUI {
    private Scanner scanner;
    private SimpleDictionary dict;

    public TextUI(Scanner scanner, SimpleDictionary dict) {
        this.scanner = scanner;
        this.dict = dict;
    }
    public void start() {
        String command;
        do {
            System.out.print("Command: ");
            command = this.scanner.nextLine();
            if (command.equals("end")) {
                System.out.println("Bye bye!");
            } else if(command.equals("add")) {
                System.out.print("Word: ");
                String initialWord = this.scanner.nextLine();
                System.out.print("Translation: ");
                String finalWord = this.scanner.nextLine();
                dict.add(initialWord,finalWord);
            } else if(command.equals("search")) {
                System.out.print("To be translated: ");
                String initialWord = this.scanner.nextLine();
                if(dict.translate(initialWord) == null) {
                    System.out.println("Word " + initialWord + " was not found");
                } else {
                    System.out.println("Translation: " + dict.translate(initialWord));
                }
            } else {
                System.out.println("Unknown command");
            }
        } while(!(command.equals("end")));
    }
}
