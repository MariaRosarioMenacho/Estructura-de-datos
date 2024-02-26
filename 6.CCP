#EXPONENTE
def potencia(base, exponente):
    if (exponente==0):
        return 1
    else:
        return base * potencia(base, exponente -1)
    x=int(input("ingrese la base:"))
    y=int(input("ingrese el eponente:"))
    print("el resultado es:", resultado)
