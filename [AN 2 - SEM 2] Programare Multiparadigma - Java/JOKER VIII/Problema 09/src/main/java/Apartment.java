public class Apartment {

    private int rooms;
    private int squares;
    private int princePerSquare;

    public Apartment(int rooms, int squares, int pricePerSquare) {
        this.rooms = rooms;
        this.squares = squares;
        this.princePerSquare = pricePerSquare;
    }

    public boolean largerThan(Apartment compared) {
        return this.squares > compared.squares;
    }

    public int priceDifference(Apartment compared) {
        int ownPrice = this.squares * this.princePerSquare;
        int compPrice = compared.squares * compared.princePerSquare;
        return Math.abs(ownPrice - compPrice);
    }

    public boolean moreExpensiveThan(Apartment compared) {
        return this.squares * this.princePerSquare >= compared.squares * compared.princePerSquare;
    }
}
