Console.Write("Liczba wyrazow ciagy: ");
int liczba_wyrazow = Convert.ToInt32(Console.ReadLine());

int[] ciag = new int[100000];
ciag[0] = 1;
ciag[1] = 1;

for (int i = 2; i < liczba_wyrazow; i++)
{
    ciag[i] = ciag[i - 2] + ciag[i - 1];
}

for (int i = 0; i < liczba_wyrazow; i++)
{
    Console.WriteLine(ciag[i]);
}

