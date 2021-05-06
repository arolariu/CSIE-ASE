import java.util.ArrayList;

public class Room {
    private ArrayList<Person> persons;

    public Room() {this.persons = new ArrayList<>();}

    public void add(Person person) {
        this.persons.add(person);
    }
    public boolean isEmpty() {
        return this.persons.isEmpty();
    }
    public ArrayList<Person> getPersons() {
        return this.persons;
    }
    public Person shortest() {
        if(!this.isEmpty()) {
            Person shortest = persons.get(0);
            for (Person person : persons) {
                if (person.getHeight() < shortest.getHeight()) {
                    shortest = person;
                }
            }
            return shortest;
        }
        return null;
    }

    public Person take() {
        if(!(this.isEmpty())) {
            int index = this.persons.indexOf(this.shortest());
            final Person temp = this.persons.get(index);
            this.persons.remove(index);
            return temp;
        } else {
            return null;
        }
    }
}
