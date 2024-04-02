

def gato(src,n,hanoi):
    

    #pila = [i+1 for i in range(n)]
    #p2 = []
    for i in range(n):
        hanoi[src-1].append(i + 1)

    
    '''
    hanoi.append(pila)
    hanoi.append(p2)
    hanoi.append(p2)
    '''
    #print(pila)
    print(hanoi)



def hanoi(hn,n, source, destination, auxiliary):
    if len(hn[0]) == 0 and len(hn[1]) == 0 and len(hn[2]) == 0:
        gato(source,n,hn)
    
    if n==0:
        return
    hanoi(hn,n-1,source, auxiliary, destination)
    #print disco / pos donde saca / pos donde va
    hanoi(hn,n-1,auxiliary,destination,source)


N = int(input("Cantidad de Discos: "))
src = int(input("Donde comienza: "))
dst = int(input("Donde termina: "))
if (src == 1 and dst == 2) or (src == 2 and dst == 1):
    aux = 3
elif  (src == 2 and dst == 3) or (src == 3 and dst == 2):
    aux = 1

hn = [[],[],[]]

hanoi(hn,N,src,dst,aux)