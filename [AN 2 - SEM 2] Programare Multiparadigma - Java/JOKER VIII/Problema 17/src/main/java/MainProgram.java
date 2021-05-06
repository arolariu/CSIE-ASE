
public class MainProgram {

    public static void main(String[] args) {
        Money a = new Money(10, 0);
        Money b = new Money(3, 50);

        Money c = a.minus(b);

        System.out.println(a);  // 10.00e
        System.out.println(b);  // 3.50e
        System.out.println(c);  // 6.50e
        System.out.println("================");

        c = c.minus(a);       // NB: a new Money object is created, and is placed "at the end of the strand connected to c"
//  the old 6.5 euros at the end of the strand disappears and the Java garbage collector takes care of it


        System.out.println(a);  // 10.00e
        System.out.println(b);  // 3.50e
        System.out.println(c);  // 0.00e
        System.out.println("================");
        Money first = new Money(1,0);
        Money second = new Money(2, 0);
        Money third = first.minus(second);
        System.out.println(third);
        Money a1 = new Money(1,50);
        Money b1 = new Money(2,0);
        Money c1 = a1.minus(b1);
        System.out.println(c1);
    }
}
