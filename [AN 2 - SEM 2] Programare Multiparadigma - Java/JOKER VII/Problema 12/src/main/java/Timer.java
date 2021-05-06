public class Timer {
    private ClockHand hundreds;
    private ClockHand seconds;

    public Timer() {
        this.hundreds = new ClockHand(100);
        this.seconds = new ClockHand(60);
    }

    @Override
    public String toString() {
        return this.seconds + ":" + this.hundreds;
    }

    public void advance() {
        this.hundreds.advance();
        if(this.hundreds.value() ==  0) {
            this.seconds.advance();
        }
    }
}
