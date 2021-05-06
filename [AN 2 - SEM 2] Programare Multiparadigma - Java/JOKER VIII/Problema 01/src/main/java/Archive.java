public class Archive {
    private String identifier;
    private String name;

    public Archive(String identifier, String name) {
        this.identifier = identifier;
        this.name = name;
    }

    @Override
    public String toString() {
        return this.identifier + ": " + this.name;
    }

    @Override
    public boolean equals(Object o) {
        if(this == o) return true;
        if(!(o instanceof Archive)) return false;

        Archive object = (Archive) o;
        if(this.identifier.equals(object.identifier)) return true;
        return false;
    }
}
