import java.util.Scanner;

public class Kalkulator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Podaj 1 liczbe: ");
        float liczba1 = scanner.nextFloat();
        System.out.print("Podaj 2 liczbe: ");
        float liczba2 = scanner.nextFloat();
        System.out.print("\nMENU" +
                "\n-----------" +
                "\n1. Dodawanie" +
                "\n2. Odejmowanie" +
                "\n3. Mnozenie" +
                "\n4. Dzielenie" +
                "\n\nWybierz funkcje: ");
        int wybor = scanner.nextInt();

        switch (wybor) {
            case 1:
                System.out.println("\nWynik: " + (liczba1+liczba2));
                break;
            case 2:
                System.out.println("\nWynik: " + (liczba1-liczba2));
                break;
            case 3:
                System.out.println("\nWynik: " + (liczba1*liczba2));
                break;
            case 4:
                if (liczba2 == 0)
                    System.out.println("\nNie dzielimy przez 0!");
                else System.out.println("\nWynik: " + (liczba1/liczba2));
                break;
            default:
                System.out.println("\nNiewlasciwe dzialanie");
                break;
        }
    }
}
