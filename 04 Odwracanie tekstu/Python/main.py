tekst = input("Wprowadz jakis tekst: ")
odwrocony_tekst = []
for znak in tekst:
    odwrocony_tekst.append(znak)

odwrocony_tekst.reverse()

print("Odwrocony test: ", end=" ")
for znak in range(len(odwrocony_tekst)):
    print(odwrocony_tekst[znak], end="")