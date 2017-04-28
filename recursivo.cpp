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
* @brief Funcao que multiplica duas matrizes quadradas de dimensao n x n de forma iterativa
* @param A Matriz de entrada
* @param B Matriz de entrada
* @param n Dimensao das matrizes de entrada
* @return Matriz produto resultante da multiplicacao
*/
T** multiplicaI(T** A, T** B, int n){
    
    for(int ii; ii<n; ii++){
        for(int jj; jj<n; jj++){
            int soma = 0;
            for(int kk; kk<n; kk++){
                soma += A[i][k] * B[k][j]
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
T** multiplicaR(T** A, T** B, int n){

}


