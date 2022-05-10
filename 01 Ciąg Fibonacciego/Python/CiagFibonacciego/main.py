liczba_wyrazow = int(input("Ile wyrazów ciągu wyznaczyć: "))
poprzednia = 1
wczesniejsza = 0
wyraz1 = 1
print(wyraz1)
for wyraz in range(1, liczba_wyrazow):
    wyraz = poprzednia + wczesniejsza
    print(wyraz)
    wczesniejsza = poprzednia
    poprzednia = wyraz
