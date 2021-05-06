
import java.util.Objects;

public class Person {

    private String name;
    private SimpleDate birthday;
    private int height;
    private int weight;

    public Person(String name, SimpleDate birthday, int height, int weight) {
        this.name = name;
        this.birthday = birthday;
        this.height = height;
        this.weight = weight;
    }

    // implement an equals method here for checking the equality of objects

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        Person person = (Person) o;

        if(height != person.height) return false;
        if (weight != person.weight) return false;
        if (name != null ? !name.equals(person.name) : person.name != null) return false;
        return birthday != null ? birthday.equals(person.birthday) : person.birthday == null;
    }
}
