#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void SetarMatrixI(short int tam, short int valor,  short int matrixA[tam][tam], short int matrixB[tam][tam]);
void SetarMatrixF(short int tam, float valor, float matrixA[tam][tam],float matrixB[tam][tam]);
void SetarMatrixD(short int tam, double valor, double matrixA[tam][tam],double matrixB[tam][tam]);

void MostrarMatrixI(short int tam, short int matrix[tam][tam]);


void CalcularI(short int tam, short int matrixA[tam][tam] ,short int matrixB[tam][tam],short int matrixIR[tam][tam]);
void CalcularF(short int tam, float matrixA[tam][tam] ,float matrixB[tam][tam],float matrixIR[tam][tam]);
void CalcularD(short int tam, double matrixA[tam][tam] ,double matrixB[tam][tam],double matrixIR[tam][tam]);



void MostrarMatrixI(short int tam, short int matrix[tam][tam])
{
    int l = 0;
    int c = 0;
    for(l = 0;l<tam;l++)
    {
        for(c=0;c<tam;c++)
        {
            printf(" %d",matrix[l][c]);
        }
        printf("\n");
    }
}

void SetarMatrixI(short int tam, short int valor,  short int matrixA[tam][tam], short int matrixB[tam][tam]){
    int l = 0;
    int c = 0;
    for(l = 0;l<tam;l++)
    {
        for(c=0;c<tam;c++){
            matrixA[l][c] = valor;
            matrixB[l][c] = valor;
        }
    }

}


void SetarMatrixF(short int tam, float valor, float matrixA[tam][tam],float matrixB[tam][tam]){
    short int l = 0;
    short int c = 0;
    for(l = 0;l<tam;l++)
    {
        for(c=0;c<tam;c++){
            matrixA[l][c] = valor;
            matrixB[l][c] = valor;
        }
    }
}


void SetarMatrixD(short int tam, double valor, double matrixA[tam][tam],double matrixB[tam][tam]){
    short int l = 0;
    short int c = 0;
    for(l = 0;l<tam;l++)
    {
        for(c=0;c<tam;c++){
            matrixA[l][c] = valor;
            matrixB[l][c] = valor;
        }
    }
}


void CalcularI(short int tam, short int matrixA[tam][tam] ,short int matrixB[tam][tam],short int matrixIR[tam][tam])
{
    int L,C,K;
    short int somaprod = 0;

    for(L=0; L<tam; L++)
    {
        for(C=0; C<tam; C++)
        {
            somaprod=0;
            for(K=0; K<tam; K++)
            {
                somaprod+=matrixA[L][C]*matrixB[K][C];
            }
            matrixIR[L][C]=somaprod;
        }
    }
}

void CalcularF(short int tam, float matrixA[tam][tam] ,float matrixB[tam][tam],float matrixIR[tam][tam])
{
    int L,C,K;
    float somaprod = 0;

    for(L=0; L<tam; L++)
    {
        for(C=0; C<tam; C++)
        {
            somaprod=0;
            for(K=0; K<tam; K++)
            {
                somaprod+=matrixA[L][C]*matrixB[K][C];
            }
            matrixIR[L][C]=somaprod;
        }
    }
}
void CalcularD(short int tam, double matrixA[tam][tam] ,double matrixB[tam][tam],double matrixIR[tam][tam])
{
    int L,C,K;
    double somaprod = 0;

    for(L=0; L<tam; L++)
    {
        for(C=0; C<tam; C++)
        {
            somaprod=0;
            for(K=0; K<tam; K++)
            {
                somaprod+=matrixA[L][C]*matrixB[K][C];
            }
            matrixIR[L][C]=somaprod;
        }
    }
}


int main() {

    //{500, 1000, 1500, 2000, 2500, 3000}
    int tam = 1500;

    short int matrixIA [tam][tam];
    short int matrixIB [tam][tam];
    short int matrixIR [tam][tam];

    /*float matrixFA [tam][tam];
    float matrixFB [tam][tam];
    float matrixFR [tam][tam];
    double matrixDA [tam][tam];
    double matrixDB [tam][tam];
    double matrixDR [tam][tam];
*/
    SetarMatrixI(tam,5,matrixIA,matrixIB);
    //SetarMatrixF(tam,5,matrixFA,matrixFB);



    clock_t t;
    t = clock(); // short int
    CalcularI(tam,matrixIA, matrixIB,matrixIR);
    t =clock() - t;
    double time_taken = (double)(((double)t / CLOCKS_PER_SEC) * 1000); // in seconds
    //time_taken = time_taken ;
    printf("duracao %lf milissegundos para 3000 com inteiro \n", &time_taken);

  /*
    t = clock(); // float

    t =clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("SetarMatrixF() took %f seconds to execute \n", time_taken);

    */
    //MostrarMatrix(tam,matrixIA);
}




