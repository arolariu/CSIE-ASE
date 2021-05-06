
import java.io.File;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Scanner;

public class RecipeSearch {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Recipe> recipes = new ArrayList<>();

        System.out.print("File to read: ");
        String filename = scanner.nextLine();
        try (Scanner filescanner = new Scanner(Paths.get(filename))) {
            while (filescanner.hasNextLine()) {
                String name = filescanner.nextLine(); // the name of the recipe
                int duration = Integer.parseInt(filescanner.nextLine()); // the duration
                String ingredient = filescanner.nextLine(); // first ingredient
                Recipe recipe = new Recipe(name, duration, ingredient);
                String potentialIngredient = "";
                while (filescanner.hasNextLine() && potentialIngredient != null) {
                    potentialIngredient += filescanner.nextLine();
                    if (potentialIngredient.isEmpty()) {
                        potentialIngredient = null;
                    } else {
                        recipe.addIngredient(potentialIngredient);
                        potentialIngredient = "";
                    }
                }
                recipes.add(recipe);
            }
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        System.out.println("\nCommands:");
        System.out.println("list - lists the recipes");
        System.out.println("stop - stops the program");
        System.out.println("find name - searched recipes by name");
        System.out.println("find cooking time - searches recipes by cooking time");
        System.out.println("find ingredient - searches recipes by ingredient");

        while (true) {
            System.out.print("Enter command: ");
            String command = scanner.nextLine();

            if (command.equals("stop")) {
                break;
            } else if (command.equals("list")) {
                System.out.println("Recipes:");
                for (Recipe recipe : recipes) {
                    System.out.println(recipe);
                }
            } else if (command.equals("find name")) {
                System.out.print("Searched word: ");
                String wordToFind = scanner.nextLine();
                for(Recipe recipe : recipes) {
                    if(recipe.getName().contains(wordToFind)) {
                        System.out.println(recipe);
                    }
                }
            } else if(command.equals("find cooking time")) {
                System.out.print("Max cooking time: ");
                int maxDuration = Integer.parseInt(scanner.nextLine());
                for(Recipe recipe : recipes) {
                    if(recipe.getDuration() <= maxDuration) {
                        System.out.println(recipe);
                    }
                }
            } else if(command.equals("find ingredient")) {
                System.out.print("Ingredient: ");
                String ingredientToFind = scanner.nextLine();
                for(Recipe recipe : recipes) {
                    for(String ingredient : recipe.getIngredients()) {
                        if(ingredient.equals(ingredientToFind)){
                            System.out.println(recipe);
                        }
                    }
                }
            }
        }

    }
}
