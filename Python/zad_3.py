import sys

length = len(sys.argv)

if length != 3:
    print ('Wprowadzono nieprawidłową liczbę argumentów')
    sys.exit(0)
else:
    print ('Wprowadzona wartość m wynosi:', sys.argv[1])
    print ('Wprowadzona wartość n wynosi:', sys.argv[2])
    try:
        m = int(sys.argv[1])
        n = int(sys.argv[2])
        if m <= n:
            def suma_szescianow(m,n):
                suma = 0
                for i in range(m,n+1):
                    suma = suma + i**3
                print('Suma szescianow liczb od m do n wynosi: ', suma)
                return suma
        else:
            print('Wprowadzenie nie spelnia warunku m <= n!')
            sys.exit(0)
    except ValueError:
        print ("Wprowadzony argument nie jest liczbą lub nie jest liczbą całkowitą!")
        sys.exit(0)

suma_szescianow(m, n)
