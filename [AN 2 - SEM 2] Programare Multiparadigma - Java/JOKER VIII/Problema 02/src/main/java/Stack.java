import java.util.ArrayList;

public class Stack {
    private ArrayList<String> strings = new ArrayList<>();

    public boolean isEmpty() {
        return strings.isEmpty();
    }
    public void add(String value) {
        strings.add(value);
    }
    public ArrayList<String> values() {
        ArrayList<String> copy = strings;
        return copy;
    }

    public String take() {
        String last = strings.get(strings.size() - 1);
        strings.remove(strings.size() - 1);
        return last;
    }
}
