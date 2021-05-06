
public class Money {

    private final int euros;
    private final int cents;

    public Money(int euros, int cents) {

        if (cents > 99) {
            euros = euros + cents / 100;
            cents = cents % 100;
        }

        if (cents < 0) {
            euros = euros + cents / 100;
            cents = cents % 100;
        }

        this.euros = euros;
        this.cents = cents;
    }

    public int euros() {
        return this.euros;
    }

    public int cents() {
        return this.cents;
    }

    public Money plus(Money addition) {
        Money newMoney = new Money(this.euros + addition.euros(), this.cents + addition.cents());
        return newMoney;
    }

    public boolean lessThan(Money compared) {
        if(this.euros < compared.euros() ||
            (this.euros == compared.euros() && this.cents <= compared.cents())) {
            return true;
        }
        return false;
    }

    public Money minus(Money decreaser) {
        int euros = this.euros - decreaser.euros();
        int cents = this.cents - decreaser.cents();
        Money newMoney;

        if(euros < 0) { newMoney = new Money(0,0); return newMoney; }
        if(cents < 0) {
            euros--;
            cents = 100 + cents;
        }
        newMoney = new Money(euros,cents);
        return newMoney;
    }

    @Override
    public String toString() {
        String zero = "";
        if (this.cents < 10) {
            zero = "0";
        }

        return this.euros + "." + zero + this.cents + "e";
    }

}
