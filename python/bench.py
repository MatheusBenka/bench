import time
import datetime
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

#{500, 1000, 1500, 2000, 2500, 3000}
tam = 3000
tipo = "float"
M = Main()
#M.SetarMatrix(tam= tam, valor=5)
M.SetarMatrix(tam=tam,valor=float(5))

inicioDT = datetime.datetime.now();
M.Calcular(tam = tam)
fimDT = datetime.datetime.now()
deltaDT = fimDT - inicioDT
#M.MostrarMatrix(tam=tam)

print('duracao %f milissegundos para %2d com %s ' %(deltaDT.total_seconds() *1000,tam,tipo) )
