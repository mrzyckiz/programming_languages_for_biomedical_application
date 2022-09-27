import sys
length = len(sys.argv)

if length != 3:
    print ('Błąd argumentu')
else:
    print('Pierwsza liczba wynosi:', sys.argv[1])
    print('Druga liczba wynosi:', sys.argv[2])
    try:
        a = float(sys.argv[1])
        b = float(sys.argv[2])
        if int(a) == 0 or int(b) == 0:
            print('Niepoprawne liczby')
        elif int(a)!= 0 and int(b) !=0:
            wynik = float(a / b)
            print('Wynik :', '%.5f' % wynik)
    except ValueError:
        print('Wprowadz poprawne argumenty')


