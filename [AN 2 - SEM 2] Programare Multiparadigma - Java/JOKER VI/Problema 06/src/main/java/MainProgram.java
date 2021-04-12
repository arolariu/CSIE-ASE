
public class MainProgram {

    public static void main(String[] args) {

         PaymentCard Paul = new PaymentCard(20.0);
         PaymentCard Matt = new PaymentCard(30.0);

         Paul.eatHeartily();
         Matt.eatAffordably();

        System.out.println("Paul: " + Paul);
        System.out.println("Matt: " + Matt);

        Paul.addMoney(20.0);
        Matt.eatHeartily();

        System.out.println("Paul: " + Paul);
        System.out.println("Matt: " + Matt);

        Paul.eatAffordably();
        Paul.eatAffordably();

        Matt.addMoney(50.0);

        System.out.println("Paul: " + Paul);
        System.out.println("Matt: " + Matt);


    }
}
