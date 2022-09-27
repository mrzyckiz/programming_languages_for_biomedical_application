import sys

if len(sys.argv)==3: 
    print('Liczba wierszy wynosi:', sys.argv[1])
    print('Liczba kolumn wynosi :', sys.argv[2])
    print ("")
    try:
        m = int(sys.argv[1])
        n = int(sys.argv[2])
        if m > 0 and n > 0:
            for row in range(1, m + 1):
                tab = [[(row * col) for col in range(1, n+1)] for row in range(1, m+1)]
                #print(*("{:4}".format(row * col) for col in range(1, n + 1)))
            for item in tab:
                print(("{:4}"*len(item)).format(*item))     
        else:
            print ("Podaj poprawne argumenty")
    except ValueError:
        print("Błąd argumentu")
else:
    print("Niepoprawna ilość argumentów")

