import java.util.ArrayList;

public class Hold {
    private ArrayList<Suitcase> suitcases;
    private int weight;

    public Hold(int weight) {
        this.suitcases = new ArrayList<>();
        this.weight = weight;
    }

    public void addSuitcase(Suitcase suitcase) {
        if(this.getWeight() + suitcase.totalWeight() <= this.weight) {
            this.suitcases.add(suitcase);
        }
    }

    public int getWeight() {
        int total = 0;
        for(Suitcase suitcase : suitcases) {
            total += suitcase.totalWeight();
        }
        return total;
    }

    public void printItems() {
        for(Suitcase suitcase: suitcases) {
            suitcase.printItems();
        }
    }

    @Override
    public String toString() {
        return this.suitcases.size() + " suitcase" +
                (this.suitcases.size() == 1 ? " (" : "s (") +
                this.getWeight() + " kg)";
    }
}

