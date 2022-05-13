import java.util.Scanner;

public class LiczbyPierwsze {

    public static boolean czyLiczbaPierwsza (int liczba) {

        if (liczba<2)
            return false;

        for (int i = 2; i*i < liczba; i++) {
            if (liczba % i == 0)
                return false;
        }

        return true;
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.print("Twoja liczba: ");
            int liczba = scanner.nextInt();
            System.out.print("Czy to liczba pierwsza? - ");
            if (czyLiczbaPierwsza(liczba))
                System.out.println("TAK");
            else System.out.println("NIE");
        }

    }
}
