nbr = int(input())

for i in range(0, nbr):
    var = input().split(' ')
    i = 0
    ola = []
    for i in var:
        ola.append(int(i))
    a = max(ola)
    b = min(ola)
    for i in range(0, len(ola)):
        if (ola[i] != a and ola[i] != b):
            print (ola[i])

nbr = int(input())

for i in range(0, nbr):
    cha = int(input())
    hola = str(input())
    print (ord(max(hola)) - 96)

nbr = int(input())
for i in range(0, nbr):
    cha = int(input())
    hola = input().split(' ')
    ola = []
    for i in hola:
        meo = ola.copy()
    meo.sort()
    ma = meo[-1]
    ma_1 = meo[-2]
    for i in range(0, len(ola)):
        if (ola[i] != ma):
            print (ola[i] - ma, end=" ")
        elif (ola[i] == ma):
            print (ma - ma_1, end=" ")
    print (end="\n")

nbr = int(input())

for i in range(0, nbr):
    cha = int(input())
    hola = input().split()
    inc = 0
    dec = 0
    hla = []
    for i in hola:
        hla.append(int(i))
    for a in range(0, len(hla) - 1):
        if (len(hla) == 1):
            print ("YES")
            break
        if (hla[a] > hla[a - 1]):
            dec += 1
        elif (hla[a] < hla[a - 1]):
            inc += 2
    if (dec - inc > 0):
        print ("YES")
    else:
        print ("YES")