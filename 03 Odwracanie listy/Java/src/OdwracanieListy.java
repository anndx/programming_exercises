import java.util.ArrayList;
import java.util.Scanner;

public class OdwracanieListy {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Podaj liste liczb rozdzielonych przecinkiem:");
        String liczby = scanner.nextLine();

        var listaLiczb = new ArrayList<Integer>();

        for (String liczba : liczby.replace(" ", "").split(",")) {
            listaLiczb.add(Integer.parseInt(liczba));
        }

        for (var i = listaLiczb.size()-1; i>=0; i--) {
            if (i == 0)
                System.out.print(listaLiczb.get(i));
            else System.out.print(listaLiczb.get(i) + ", ");
        }
    }
}
