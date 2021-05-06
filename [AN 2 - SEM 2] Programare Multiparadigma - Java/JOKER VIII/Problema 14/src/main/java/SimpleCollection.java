
import java.util.ArrayList;

public class SimpleCollection {

    private String name;
    private ArrayList<String> elements;

    public SimpleCollection(String name) {
        this.name = name;
        this.elements = new ArrayList<>();
    }

    public void add(String element) {
        this.elements.add(element);
    }

    public ArrayList<String> getElements() {
        return this.elements;
    }

    public String longest() {
        String biggestElement = "";
        for(String elem : elements) {
            if (elem.length() > biggestElement.length()) {
                biggestElement = elem;
            }
        }
        return biggestElement.isEmpty() ? null : biggestElement;
    }
}
