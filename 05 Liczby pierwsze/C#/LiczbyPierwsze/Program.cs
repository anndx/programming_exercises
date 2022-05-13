bool czyLiczbaParzysta (int liczba)
{
    if (liczba <2)
        return false;

    for (int i = 2; i*i < liczba; i++)
    {
        if (liczba % i == 0)
            return false;
    }

    return true;
}

while (true)
{
    Console.Write("Twoja liczba: ");
    var liczba = Console.ReadLine();

    Console.Write("Czy to liczba pierwsza? - ");

    if (czyLiczbaParzysta(Convert.ToInt32(liczba)))
        Console.WriteLine("TAK\n");
    else Console.WriteLine("NIE\n");
}
