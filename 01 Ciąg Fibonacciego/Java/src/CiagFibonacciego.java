import java.util.Scanner;

public class CiagFibonacciego {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Liczba wyrazow ciagu Fibonacciego: ");
        int liczba_wyrazow = scanner.nextInt();

        int[] ciag = new int[100000];
        ciag[0] = 1;
        ciag[1] = 1;

        for (int i=2; i<liczba_wyrazow; i++) {
            ciag[i] = ciag[i-2] + ciag[i-1];
        }

        for (int i = 0; i < liczba_wyrazow; i++) {
            System.out.println(ciag[i]);
        }
    }
}
