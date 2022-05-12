liczba1 = float(input("Podaj 1 liczbe: "))
liczba2 = float(input("Podaj 2 liczbe: "))
print("\nMENU")
print("-----------")
print("1. Dodawanie")
print("2. Odejmowanie")
print("3. Mnozenie")
print("4. Dzielenie")
wybor = input("\nWybierz funkcje: ")

if wybor == "1":
    print("Wynik: " + str(liczba1 + liczba2))
elif wybor == "2":
    print("Wynik: " + str(liczba1 - liczba2))
elif wybor == "3":
    print("Wynik: " + str(liczba1 * liczba2))
elif wybor == "4" and liczba2 != 0:
    print("Wynik: " + str(liczba1 / liczba2))
elif wybor == "4" and liczba2 == 0:
    print("Nie dzielimy przez 0!")
else:
    print("Nieprawidlowe dzialanie")
