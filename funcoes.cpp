/** 
*@file metodos.cpp
*@brief Arquivo de corpo contendo a implentacao das funcoes que realizam
*		a multiplicacao de matrizes de forma recursiva e iterativa
*@author Luís Eduardo Rique (luiseduardorique@gmail.com)
*@author Rodolpho Erick (rodolphoerick90@gmail.com)
*@since 26/04/2017
*@date  26/04/2017
*/

#include "matrizes.h"


/**
* @brief Funcao que imprime a matriz resultante
* @param Mres Matriz resultante
* @param n Dimensao das matrizes de entrada
*/
void print(int** Mres, int n){
    for(int ii=0; ii<n; ii++){
        for(int jj=0; jj<n; jj++){
            cout << Mres[ii][jj] << " ";
        }
        cout << endl;
    }
}

/**
* @brief Funcao que multiplica duas matrizes quadradas de dimensao n x n de forma iterativa
* @param A Matriz de entrada
* @param B Matriz de entrada
* @param n Dimensao das matrizes de entrada
* @return Matriz produto resultante da multiplicacao
*/
void multiplicaI(int** A, int** B, int** C, int n){
    
    for(int ii=0; ii<n; ii++){
        for(int jj=0; jj<n; jj++){
            int soma = 0;
            for(int kk=0; kk<n; kk++){
                soma += A[ii][kk] * B[kk][jj];
            }
            C[ii][jj] = soma;
        }
    }
}

/**
* @brief Funcao que multiplica duas matrizes quadradas de dimensao n x n de forma recursiva
* @param A Matriz de entrada
* @param B Matriz de entrada
* @param n Dimensao das matrizes de entrada
* @return Matriz produto resultante da multiplicacao
*/
void multiplicaR(int** A, int** B, int** C, int n){
    
    static int i = 0, j = 0, k = 0;

    if(i >= n){
        return;
    }
    else if(i < n){
        if(j < n){
            if(k < n){
                C[i][j] += A[i][k] * B[k][j];
                k++;
                multiplicaR(A, B, C, n);
            }
            k = 0;
            j++;
            multiplicaR(A, B, C, n);
        }
        j = 0;
        i++;
        multiplicaR(A, B, C, n);
    }
}

