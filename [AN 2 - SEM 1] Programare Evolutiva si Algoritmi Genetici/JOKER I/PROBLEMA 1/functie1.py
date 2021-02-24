# functia 1

# importa biblioteca numpy - numerical python : una dintre cele mai utilizate biblioteci
import numpy as np


# sirul lui Fibonacci: a(0)=0, a(1)=1, a(n+2)=a(n+1)+a(n)
# n>=0

###sirul lui Fibonacci - implementare nerecursiva utilizand vectori:sunt calculati primii n+1 termeni
def Fib1v(n):
    F = np.zeros(n + 1, dtype="int")
    F[1] = 1
    for i in range(2, n + 1):
        F[i] = F[i - 1] + F[i - 2]
    return F


###sirul lui Fibonacci - implementare nerecursiva utilizand liste:sunt calculati primii n+1 termeni
def Fib1l(n):
    F = [0, 1]
    for i in range(2, n + 1):
        F = F + [F[i - 1] + F[i - 2]]
    return F


###sirul lui Fibonacci - implementare recursiva: este calculat doar termenul n
def Fibr(n):
    if n == 0:
        return 0
    else:
        if n == 1:
            return 1
        else:
            return Fibr(n - 1) + Fibr(n - 2)

# apel in consola
# import functie1 as f1
# val=f1.Fib1r(5)
