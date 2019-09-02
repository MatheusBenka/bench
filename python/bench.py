import time

class Main:
    matrixA = []
    matrixB = []
    matrixR = []

    def SetarMatrix(self,tam, valor):
        self.matrixA = [[0]*tam] * tam
        self.matrixB = [[0]*tam] * tam
        self.matrixR = [[0]*tam] * tam
        for i in range(0,tam):
            self.matrixA[i] = [0] * tam
            self.matrixB[i] = [0] * tam
            self.matrixR[i] = [0] * tam

            for j in range(0,tam):
                self.matrixA[i][j] = valor
                self.matrixB[i][j] = valor
                self.matrixR[i][j] = 0

    def MostrarMatrix(self , tam):
        for i in range(0,tam):
            for j in range(0,tam):
                print(self.matrixR[i][j],end=" ")
            print('\n')

    def Calcular(self, tam):
        for i in range(0,tam):
            for j in range(0,tam):
                somaprod = 0
                for k in range(0,tam):
                    somaprod +=self.matrixA[i][j] * self.matrixB[k][j]
                self.matrixR[i][j] = somaprod

print("teste")
tam = 1000
M = Main()
M.SetarMatrix(tam= tam, valor=5)
#M.SetarMatrix(tam=tam,valor=float(5))

inicio = time.time()
M.Calcular(tam = tam)
fim = time.time()

#M.MostrarMatrix(tam=tam)

print('duracao %f' % (fim - inicio))

print("fim")