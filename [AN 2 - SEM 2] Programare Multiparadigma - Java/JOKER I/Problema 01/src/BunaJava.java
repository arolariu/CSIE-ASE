import java.util.Scanner;

public class BunaJava {
    public static void main(String[] args) { // in C/C++ main (int argc, char** argv)
        for (int i=0; i < args.length ; i++)
            System.out.print(args[i] + " "); // Concatenare de String

        System.out.println();

        Scanner stdin = new Scanner(System.in);

        System.out.print("Introduceti nume: ");
        String nume = stdin.nextLine(); // preia de la tastatura o linie pana la lfnl
        System.out.println("Buna, " + nume + "!");

        System.out.println("a = ");
        int a = stdin.nextInt();
        System.out.println("b = ");
        int b = stdin.nextInt();

        System.out.println("a + b = " + (a + b));
    }
}
