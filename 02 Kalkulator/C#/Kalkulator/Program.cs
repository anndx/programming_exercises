Console.Write("Podaj 1 liczbe: ");
float liczba1 = Single.Parse(Console.ReadLine());
Console.Write("Podaj 2 liczbe: ");
float liczba2 = Single.Parse(Console.ReadLine());

Console.Write("\nMENU" +
    "\n------------" +
    "\n1. Dodawanie" +
    "\n2. Odejmowanie" +
    "\n3. Mnozenie" +
    "\n4. Dzielenie" +
    "\n\nWybierz funkcje: ");

int wybor = Convert.ToInt32(Console.ReadLine());

switch (wybor)
{
    case 1:
        Console.WriteLine("Wynik: " + (liczba1 + liczba2));
        break;
    case 2:
        Console.WriteLine("Wynik: " + (liczba1 - liczba2));
        break;
    case 3:
        Console.WriteLine("Wynik: " + (liczba1 * liczba2));
        break;
    case 4:
        if (liczba2 == 0)
            Console.WriteLine("Nie dzielimy przez 0!");
        else
            Console.WriteLine("Wynik: " + (liczba1 / liczba2));
        break;
    default:
        Console.WriteLine("Bledne dzialanie");
        break;
}