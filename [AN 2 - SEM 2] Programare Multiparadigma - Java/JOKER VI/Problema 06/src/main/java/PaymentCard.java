public class PaymentCard {
    private double balance;

    public PaymentCard(double openingBalance) {
        this.balance = openingBalance;
    }

    public void eatAffordably() {
        if(this.balance < 2.60) {
            return;
        }
        this.balance -= 2.60;
    }

    public void eatHeartily() {
        if(this.balance < 4.60) {
            return;
        }
        this.balance -= 4.60;
    }

    public void addMoney(double amount) {
        if (this.balance + amount > 150.00) {
            this.balance = 150.00;
        } else if (amount < 0) {
            return;
        } else {
            this.balance += amount;
        }
    }

    @Override
    public String toString() {
        return "The card has a balance of " + this.balance + " euros";
    }
}
