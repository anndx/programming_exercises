import java.util.Scanner;

public class OdwracanieTekstu {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Wprowadz jakis tekst: ");
        var tekst = scanner.nextLine();

        System.out.print("Odwrocony tekst: ");
        for (var i = tekst.length() - 1; i >= 0; i--) {
            System.out.print(tekst.charAt(i));
        }
    }
}
