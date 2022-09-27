import sys
if len(sys.argv)!= 2:
    print ("Wprowadz nazwe pliku")
else:
    wyraz = input('Wprowadź wyraz: ')
    suma=0
    spolgloski="b c ć d f g h j k l m n p r s ś t w z ż ź B C Ć D F G H J K L M N P R S Ś T W Z Ź Ż"
    usun_spacje = ''.join(filter(None,wyraz.split(' ')))
    for litery in usun_spacje:
        if litery in spolgloski:
            suma = suma + 1
    print ("Liczba spółgłosek wynosi :", suma)
     
    plik=open(sys.argv[1], 'a')
    plik.writelines([usun_spacje, ';', str(suma), '\n'])
    plik.close()                                        



