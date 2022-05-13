def czy_liczba_pierwsza(liczb):
    liczba = int(liczb)
    if liczba < 2:
        return False

    i = 2
    dzielniki = []
    while i < liczba:
        dzielniki.append(i)
        i += 1

    for dzielnik in dzielniki:
        if liczba % dzielnik == 0:
            return False

    return True


while True:
    liczba = input("Twoja liczba: ")
    print("Czy to liczba pierwsza? - ", end="")
    if czy_liczba_pierwsza(liczba):
        print("TAK\n")
    else: print("NIE\n")
