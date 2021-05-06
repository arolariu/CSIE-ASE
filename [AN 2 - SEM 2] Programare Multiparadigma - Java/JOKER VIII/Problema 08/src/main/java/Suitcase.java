import java.util.ArrayList;

public class Suitcase {
    private ArrayList<Item> items;
    private int finalWeight;

    public Suitcase(int weight) {
        this.items = new ArrayList<>();
        this.finalWeight = weight;
    }

    public void addItem(Item item) {
        int sum = this.totalWeight();
        if(sum + item.getWeight() <= this.finalWeight) {
            this.items.add(item);
        }
    }

    public void printItems() {
        for(Item item : items) {
            System.out.println(item);
        }
    }

    public int totalWeight() {
        int sum = 0;
        if (!items.isEmpty()) {
            for (Item itemz : items) {
                sum += itemz.getWeight();
            }
        }
        return sum;
    }

    public Item heaviestItem() {
        if(!this.items.isEmpty()) {
            Item first = items.get(0);
            for(Item item : items) {
                if(item.getWeight() > first.getWeight()) {
                    first = item;
                }
            }
            return first;
        }
        return null;
    }
    @Override
    public String toString() {
        int sum = this.totalWeight();
        return this.items.isEmpty() ? "no items (0kg)" : this.items.size() + " item" +
                (this.items.size() == 1 ? " (" : "s (") +
                sum + " kg)";
    }
}
