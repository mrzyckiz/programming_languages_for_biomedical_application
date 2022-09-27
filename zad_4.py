import sys
def fibonacci(x,y,n):
            if x>=0 and y>0 and n>0:
                wynik=[]
                for  i in range(0,n):
                    wynik.append(x)
                    x,y = y,x+y
                print ("Ciąg Fibonacciego wynosi : ", wynik)
            else:
                print("Wpisz poprawne dane")
                sys.exit(0)
if len(sys.argv)==4:
    try:
        x=int(sys.argv[1])
        y=int(sys.argv[2])
        n=int(sys.argv[3])
        
    except ValueError:
        print("Wpisz poprawne dane")
        sys.exit(0)
else:
    print("Bład argumentu")
    sys.exit(0)
fibonacci(x,y,n)

