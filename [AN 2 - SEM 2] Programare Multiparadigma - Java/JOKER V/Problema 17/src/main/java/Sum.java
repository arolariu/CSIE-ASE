
import java.util.ArrayList;

public class Sum {

    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(3);
        list.add(1);
        list.add(-2);
        list.add(-10);
        list.add(17);
        int sum = sum(list);
        System.out.println(sum);
    }
    public static int sum(ArrayList<Integer> numbers) {
        int sum = 0;
        for(int number : numbers) {
            sum += number;
        }
        return sum;
    }

}
