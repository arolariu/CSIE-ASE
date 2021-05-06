
import java.util.ArrayList;
import java.util.Scanner;

public class IndexOfSmallest {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // implement here a program that reads user input
        // until the user enters 9999
        ArrayList<Integer> list = new ArrayList<Integer>();
        while(true) {
            int number = scanner.nextInt();
            if(number == 9999) {
                break;
            } else {
                list.add(number);
            }
        }

        // after that, the program prints the smallest number
        // and its index -- the smallest number
        // might appear multiple times
        int smallest = 9999;
        for(int i = 0; i < list.size(); i++) {
            if (list.get(i) < smallest) {
                smallest = list.get(i);
            }
        }
        System.out.println("Smallest number: " + smallest);
        for(int i = 0; i < list.size(); i++) {
            if(list.get(i) == smallest) {
                System.out.println("Found at index: " + i);
            }
        }
        
    }
}