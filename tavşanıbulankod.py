import random

tavsan = 0
tahmin = 2
deneme = 0
yon = 0
t = -1
z = 0

print("100 bosluklu tavsan bulma oyunu icin tavsanin deligini sen belirle oynuyacagini sec: ")
tavsan = int(input())

print("100 bosluklu tavsan bulma oyunu")

while tavsan != tahmin:
    ilerigeri = random.choice([-1, 1])
    tavsan += ilerigeri

    if tavsan >= 101:
        tavsan = 99
    elif tavsan <= 0:
        tavsan = 2

    print("Tavsan bu delikte: ", tavsan)

    if tahmin == 2:
        yon = 1
        t += 1
    elif tahmin == 99:
        yon = 2
        z += 1

    if i == 1 and t == 2:
        tahmin += 1
    elif i == 2 and z == 2:
        tahmin -= 1

    print("Tahminin bu: ", tahmin)
    deneme += 1

print("Tavsan ", tavsan, " numarali deliginde iken tahminin: ", tahmin)
print(deneme, ". denemde buldun.")
