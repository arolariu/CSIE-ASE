public class Container {
    private int amount = 0;

    public Container() {}

    public int contains() {return this.amount;}
    public void add(int amount) {
        if(amount < 0) { }
        else if(amount + this.amount > 100) { this.amount = 100; }
        else { this.amount += amount; }
    }
    public void remove(int amount) {
        if(amount < 0) { }
        else if(this.amount - amount < 0) { this.amount = 0; }
        else { this.amount -= amount; }
    }


    @Override
    public String toString() { return this.amount + "/100"; }
}
