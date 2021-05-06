import java.util.ArrayList;

public class Recipe {
    private String name;
    private int duration;
    private ArrayList<String> ingredients;

    public Recipe() { this.ingredients = new ArrayList<>(); }
    public Recipe(String name, int duration, String ingredient) {
        this.name = name;
        this.duration = duration;
        this.ingredients = new ArrayList<>();
        this.addIngredient(ingredient);
    }

    public String getName() { return this.name; }
    public int getDuration() { return this.duration; }
    public ArrayList<String> getIngredients() { return this.ingredients; }

    public void addIngredient(String ingredient) { this.ingredients.add(ingredient); }

    @Override
    public String toString() {
        return this.name + ", cooking time: " + this.duration;
    }
}
