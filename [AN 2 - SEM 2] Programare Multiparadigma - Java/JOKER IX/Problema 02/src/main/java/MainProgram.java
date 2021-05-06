import java.util.Arrays;

public class MainProgram {

    public static void main(String[] args) {
        // write your test code here

        int[] numbers = {8, 3, 7, 9, 1, 2, 4};
        System.out.println(Arrays.toString(numbers));
        MainProgram.sort(numbers);
    }

    public static int smallest(int[] array) {
        int number = array[0];
        for(int i = 0; i < array.length; i++) {
            if(array[i] < number) {
                number = array[i];
            }
        }
        return number;
    }

    public static int indexOfSmallest(int[] array) {
        int number = smallest(array);
        for(int i = 0; i < array.length; i++) {
            if(array[i] == number) {
                return i;
            }
        }
        return -1;
    }

    public static int indexOfSmallestFrom(int[] array, int startIndex) {
        int[] newArray = new int[array.length - startIndex];
        int j = 0;
        for(int i = startIndex; i < array.length; i++) {
            newArray[j++] = array[i];
        }
        return indexOfSmallest(newArray) + startIndex;
    }

    public static void swap(int array[], int firstIndex, int secondIndex) {
        int temp = array[firstIndex];
        array[firstIndex] = array[secondIndex];
        array[secondIndex] = temp;
    }

    public static void sort(int[] array) {
        for(int i = 0; i < array.length; i++) {
            swap(array, i, indexOfSmallestFrom(array, i));
            System.out.println(Arrays.toString(array));
        }
    }

}
