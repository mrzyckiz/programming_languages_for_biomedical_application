import sys

try:
    if len(sys.argv) != 2:
        print ("Bład argumentu")
    else:
        file = sys.argv[1]
        text = open(file).read()
        splitting = [s.strip().split(";") for s in text.splitlines()]
        sorting = sorted(splitting, key=lambda splitting: splitting[1], reverse=True)
        if len(sorting) >= 10:
            for i in range(10):
                print (sorting[i])
        else:
            for i in range(len(sorting)):
                print(sorting[i])
except FileNotFoundError:
    print ('Nieprawidłowa nazwa pliku')
    sys.exit(0)
except ValueError:
    print ('Zła struktura pliku')
except IndexError:
    print('Zła struktura pliku')

