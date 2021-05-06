
import java.util.ArrayList;

public class GradeRegister {

    private ArrayList<Integer> grades;
    private ArrayList<Integer> examPoints;

    public GradeRegister() {
        this.grades = new ArrayList<>();
        this.examPoints = new ArrayList<>();
    }

    public void addGradeBasedOnPoints(int points) {
        this.grades.add(pointsToGrade(points));
        this.examPoints.add(points);
    }

    public int numberOfGrades(int grade) {
        int count = 0;
        for (int received : this.grades) {
            if (received == grade) {
                count++;
            }
        }

        return count;
    }

    public static int pointsToGrade(int points) {

        int grade = 0;
        if (points < 50) {
            grade = 0;
        } else if (points < 60) {
            grade = 1;
        } else if (points < 70) {
            grade = 2;
        } else if (points < 80) {
            grade = 3;
        } else if (points < 90) {
            grade = 4;
        } else {
            grade = 5;
        }

        return grade;
    }

    public double averageOfGrades() {
        double average = 0;
        for(int i = 0; i < this.grades.size(); i++) {
            average += this.grades.get(i);
        }
        average /= this.grades.size();
        return this.grades.size() == 0 ? -1: average;
    }
    public double averageOfPoints() {
        double average = 0;
        for(int i = 0; i < this.examPoints.size(); i++) {
            average += this.examPoints.get(i);
        }
        average /= this.examPoints.size();
        return this.examPoints.size() == 0 ? -1: average;
    }
}
