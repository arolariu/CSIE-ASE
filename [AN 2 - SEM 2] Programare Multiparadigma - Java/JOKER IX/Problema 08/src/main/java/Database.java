import java.util.ArrayList;

public class Database {
    private ArrayList<Bird> birds;

    public Database() { this.birds = new ArrayList<>(); }

    public ArrayList<Bird> getBirds() { return this.birds; }
    public void addBird(Bird bird) {
        this.birds.add(bird);
    }

    public void addObservation(String name) {
        for(Bird bird : birds) {
            if(bird.getRoman().equals(name)) {
                bird.incrementObservations();
            }
        }
    }

    public void printAll() {
        for(Bird bird : birds) {
            System.out.println(bird);
        }
    }

    public void printOne(String name) {
        for(Bird bird : birds) {
            if(bird.getRoman().equals(name)) {
                System.out.println(bird);
                break;
            }
        }
    }

    @Override
    public String toString() {
        String message = "";
        for(Bird bird : birds) {
            message += bird;
        }
        return message;
    }
}
