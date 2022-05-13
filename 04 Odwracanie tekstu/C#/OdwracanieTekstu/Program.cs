Console.Write("Wprowadz jakis tekst: ");
var tekst = Console.ReadLine();

Console.Write("Odwrocony tekst: ");
for (int i=tekst.Length-1; i>=0; i--)
{
    Console.Write(tekst[i]);
}