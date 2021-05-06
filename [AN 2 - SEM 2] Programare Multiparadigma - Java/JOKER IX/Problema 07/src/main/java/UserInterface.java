import java.util.Scanner;

public class UserInterface {
    private TodoList list;
    private Scanner scanner;

    public UserInterface(TodoList list, Scanner scanner) {
        this.list = list;
        this.scanner = scanner;
    }

    public void start() {
        while(true) {
            System.out.print("Command: ");
            String command = this.scanner.nextLine();
            if(command.equals("add")) {
                System.out.print("To add: ");
                String toAdd = this.scanner.nextLine();
                this.list.add(toAdd);
            } else if(command.equals("stop")) {
                break;
            } else if(command.equals("list")) {
                this.list.print();
            } else if(command.equals("remove")) {
                System.out.print("Which one is removed? ");
                int index = Integer.valueOf(this.scanner.nextLine());
                this.list.remove(index);
            }
        }
    }
}
