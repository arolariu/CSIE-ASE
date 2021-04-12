public class Gauge {
    private int value;

    public Gauge() {
        this.value = 0;
    }

    public void increase() {
        if(this.value >= 5) {
            return;
        }
        this.value++;
    }

    public void decrease() {
        if(this.value <= 0) {
            return;
        }
        this.value--;
    }

    public int value() {
        return this.value;
    }

    public boolean full() {
        if(this.value == 5) {
            return true;
        }
        return false;
    }
}
