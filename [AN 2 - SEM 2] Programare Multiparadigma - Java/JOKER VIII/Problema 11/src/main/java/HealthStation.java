
public class HealthStation {
    private int counter = 0;

    public int weigh(Person person) {
        this.counter++;
        return person.getWeight();
    }

    public void feed(Person person) {
        person.setWeight(person.getWeight() + 1);
    }

    public int weighings() {
        return this.counter;
    }
}
