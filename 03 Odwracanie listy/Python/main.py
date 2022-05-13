numery = input("Podaj liste numerow rozdzielonych przecinkiem: ")
lista_liczb = []
rozdz_numery = numery.replace(" ", "").split(",")

for liczba in rozdz_numery:
    lista_liczb.append(liczba)

lista_liczb.reverse()

print(lista_liczb)
