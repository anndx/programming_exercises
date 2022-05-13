using System.Collections.Generic;

Console.Write("Podaj liste numerow rozdzielonych przecinkiem: ");
var lista = Console.ReadLine();

if (string.IsNullOrEmpty(lista))
    return;

var listaLiczb = new List<int>();

foreach (var item in lista.Split(','))
{
    listaLiczb.Add(int.Parse(item));
}

Console.Write("Odwrocona lista: ");

for (var i = listaLiczb.Count-1; i >= 0; i--)
{
    if (i == 0)
        Console.Write(listaLiczb[i]);
    else Console.Write(listaLiczb[i] + ", ");
}