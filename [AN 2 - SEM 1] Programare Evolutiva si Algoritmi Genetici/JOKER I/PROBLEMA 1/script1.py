# script 1


# importa biblioteca numpy - numerical python : una dintre cele mai utilizate biblioteci
import numpy as np

# #### lucrul cu matrice ca tip de date ndarray
# definirea (si alocarea) unei matrice 4x5 cu toate elementele nule
mat = np.zeros([4,5],dtype="double")

# initializarea primelor 4 coloane ale matricei cu elementele din fisierul mat.txt
mat[:4,:4]=np.genfromtxt("mat.txt")

# preia o data de la tastatura
print("Matricea citita:\n\n")
print(mat)
c = input()

# calculul ultimei coloane -  suma elementelor pe fiecare linie
for i in range(4):
    mat[i,4]=np.sum(mat[i,:4])
print("Matricea completa:\n\n")
print(mat)
c = input()

# generarea unei matrice cu numere aleatoare U(0,1), de dimensiuni 5x3
mat_aleator=np.random.uniform(0,1,[5,3])
print("Matricea generata aleator:\n\n")
print(mat_aleator)
c = input()

# produsul mat x mat_aleator
mat_produs=np.matmul(mat,mat_aleator)
print("\n\nMatricea produs:")
print(mat_produs)

# listarea liniilor pare (prima linie are indice 0, este considerata para)
print("\n\nLiniile pare ale matricei produs:")
for i in range(0,4,2):
    print(mat_produs[i,0:3])

# din caseta consola import script1
