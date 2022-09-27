import sys
import math
length = len(sys.argv)

def licz (a, b, c):
    if a > 0 and b > 0 and c > 0 :
        try:
            p = (a + b + c) / 2
            pole = math.sqrt(p * (p - a) * (p - b) * (p - c))
            return pole
        except ValueError:
            print ("Nie mozna utworzyc trojkąta")
            sys.exit(0)
    else:
        try:
            print('Wprowadzone długości boków są niepoprawne!')
            sys.exit(0)
        except ValueError:
            print('Wprowadzone argumenty nie są liczbami!')
            sys.exit(0)
            

if length != 4:
    print ('Błędna liczba argumentów!')
    sys.exit(0)
else:
    print('Długość pierwszego boku:', sys.argv[1])
    print('Długość drugiego boku:', sys.argv[2])
    print('Długość trzeciego boku:', sys.argv[3])
    try:
        a = float(sys.argv[1])
        b = float(sys.argv[2])
        c = float(sys.argv[3])
    except ValueError:
        print("Błąd argumentu")
        sys.exit(0)

Wynik = licz(a, b, c)
print('Wynik :', '%d' % Wynik)
