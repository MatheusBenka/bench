using System;
using System.Diagnostics;

namespace Bench
{
    class Program
    {
    static void Main(string[] args)
    {
        short tam = 10;

        short [,] matrixIA = new short[tam,tam];
        short [,] matrixIB = new short[tam, tam];
        short [,] matrixIR = new short[tam, tam];


        //float [,] matrixFA;
        //float [,] matrixFB;
        //float [,] matrixFR;



        //double[,]matrixDA;
        //double[,]matrixDB;
        //double[,]matrixDR;

        SetarMatrix(tam, 5, ref matrixIA, ref matrixIB);

        Stopwatch stopwatch = Stopwatch.StartNew();
        CalcularI(tam, ref matrixIA, ref matrixIB,ref matrixIR);
        stopwatch.Stop();
        Console.WriteLine("SetarMatrix() took {0} seconds to execute \n",stopwatch.Elapsed.TotalSeconds);

        MostrarMatrixI(tam, matrixIA);
        MostrarMatrixI(tam, matrixIB);
        MostrarMatrixI(tam, matrixIR);
    }

    public static void SetarMatrix(short tam, short valor, ref short[,] matrixA, ref short[,] matrixB)
    {
        matrixA = new short[tam, tam];
        matrixB = new short[tam, tam];
        for (int l = 0; l < tam; l++)
        {                
            for (int c = 0; c < tam; c++)
            {
                matrixA[l,c] = valor;
                matrixB[l,c] = valor;
            }
        }
    }


    public static void SetarMatrix(short tam, float valor,ref float[,] matrixA, ref float[,] matrixB)
    {
        matrixA = new float[tam, tam];
        matrixB = new float[tam, tam];
        for (int l = 0; l < tam; l++)
        {
            for (int c = 0; c < tam; c++)
            {
                matrixA[l, c] = valor;
                matrixB[l, c] = valor;
            }
        }
    }


    public static void SetarMatrix(short tam, double valor, ref double[,] matrixA,ref double[,] matrixB)
    {
        matrixA = new double[tam, tam];
        matrixB = new double[tam, tam];
        for (int l = 0; l < tam; l++)
        {
            for (int c = 0; c < tam; c++)
            {
                matrixA[l, c] = valor;
                matrixB[l, c] = valor;
            }
        }
    }

    public static void CalcularI(short tam, ref short[,] matrixA, ref short [,] matrixB, ref short [,] matrixIR)
    {
        int L, C, K;
        int somaprod = 0;

        for (L = 0; L < tam; L++)
        {
            for (C = 0; C < tam; C++)
            {
                somaprod = 0;
                for (K = 0; K < tam; K++)
                {
                    somaprod += (short)matrixA[L,K] * matrixB[K,C];
                }
                matrixIR[L,C] = (short)somaprod;
            }
        }
    }

    public static void MostrarMatrixI(short tam, short [,] matrix)
    {
        int l = 0;
        int c = 0;
        for (l = 0; l < tam; l++)
        {
            for (c = 0; c < tam; c++)
            {
                Console.Write(" {0}", matrix[l,c]);
            }
                Console.WriteLine("");
        }

        Console.WriteLine("\n");
    }
    }
}
