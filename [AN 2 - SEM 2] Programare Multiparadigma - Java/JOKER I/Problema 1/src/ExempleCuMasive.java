public class ExempleCuMasive {

    static void afisare(String mesaj, int[] vector){
        System.out.println(mesaj);
        for(int i =0; i < vector.length; i++)
            if(vector[i] % 2 == 0)
                System.out.print(vector[i] + " ");
        System.out.println();

    }

    static int[] pare(int[] vector) {
        int nrValoriPare = 0;
        for (int i = 0; i < vector.length; i++) {
            if (vector[i] % 2 == 0)
                nrValoriPare++;
        }

        var rezultat = new int[nrValoriPare];

        for (int i = 0, j = 0; i < vector.length; i++) {
            if (vector[i] % 2 == 0)
                rezultat[j++] = vector[i];
        }
        return rezultat;
    }

    public static void main(String[] args) {
        int[] masivInt = new int[args.length];

        for(int i =0; i<args.length; i++) {
            System.out.print(args[i] + " ");
            masivInt[i] = Integer.parseInt(args[i]);
        }
        System.out.println();

        for(int i =0; i<args.length; i++)
            System.out.print(masivInt[i] + " ");
        System.out.println();

        afisare("Vectorul initial:", masivInt);
        System.out.println("Valori Pare:");
        int[] rezultat = pare(masivInt);
        afisare("Vector cu nr. pare:", rezultat);
    }
}

