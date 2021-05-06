public class Bird {
    private String nameInRoman;
    private String nameInLatin;
    private int noOfObs;

    public Bird() { }
    public Bird(String roman, String latin) {
        this.nameInRoman = roman;
        this.nameInLatin = latin;
    }

    public String getRoman() { return this.nameInRoman; }
    public String getLatin() { return this.nameInLatin; }
    public int getObservations() { return this.noOfObs; }

    public void incrementObservations() { this.noOfObs++; }


    @Override
    public String toString() {
        return this.nameInRoman + "(" + this.nameInLatin + "): " + this.noOfObs
                + "observation" + (this.noOfObs == 1 ? "\n" : "s\n");
    }
}
