
import java.util.ArrayList;

public class RemoveLast {

    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        list.add("Ana");
        list.add("Azorel");
        list.add("Bogdan");
        list.add("Theo");
        list.add("Ionut");
        list.add("Alex");
        removeLast(list);
        removeLast(list);
        removeLast(list);
        removeLast(list);
        for(String name : list) {
            System.out.println(name);
        }
    }
    public static void removeLast(ArrayList<String> strings) {
        if(strings.size() == 0) {
            return;
        } else {

            strings.remove(strings.size() - 1);
        }
    }
}
