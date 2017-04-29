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


DesalocandoMatrizes(int n){



}

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

    if(n == 1){
        C[0][0] = A[0][0] * B[0][0];
    }
    else{
        ///////////////////////////////////////////////////////////////////////
        int **A1 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        A1[i] = new int[n/2];
    }
    int **A2 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        A2[i] = new int[n/2];
    }
    int **A3 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        A3[i] = new int[n/2];
    }
    int **A4 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        A4[i] = new int[n/2];
    }    


    int **B1 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        B1[i] = new int[n/2];
    }
    int **B2 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        B2[i] = new int[n/2];
    }
    int **B3 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        B3[i] = new int[n/2];
    }
    int **B4 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        B4[i] = new int[n/2];
    }    

    int **C1 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        C1[i] = new int[n/2];
    }
    int **C2 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        C2[i] = new int[n/2];
    }
    int **C3 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        C3[i] = new int[n/2];
    }
    int **C4 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        C4[i] = new int[n/2];
    }    

    int **P1 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        P1[i] = new int[n/2];
    }
    int **P2 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        P2[i] = new int[n/2];
    }
    int **P3 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        P3[i] = new int[n/2];
    }
    int **P4 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        P4[i] = new int[n/2];
    }    
    int **P5 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        P5[i] = new int[n/2];
    }
    int **P6 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        P6[i] = new int[n/2];
    }
    int **P7 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        P7[i] = new int[n/2];
    }
    int **P8 = new int*[n/2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < n/2; i++){
        P8[i] = new int[n/2];
    }    
    //////////////////////////////////////////////////////////////////////
    
    for(int ii=0; ii<n/2; ii++){
        for(int jj=0; jj<n/2; jj++){
            A[ii][jj]
        }
    }
    
    
    
    ///////////////////////////////////////////////////////////////////////
    for(int i = 0;i < n/2; ++i){
        delete[] A1[i];
    }
    delete[] A1;
    for(int i = 0;i < n/2; ++i){
        delete[] A2[i];
    }
    delete[] A2;
    for(int i = 0;i < n/2; ++i){
        delete[] A3[i];
    }
    delete[] A3;
    for(int i = 0;i < n/2; ++i){
        delete[] A4[i];
    }
    delete[] A4;

    for(int i = 0;i < n/2; ++i){
        delete[] B1[i];
    }
    delete[] B1;
    for(int i = 0;i < n/2; ++i){
        delete[] B2[i];
    }
    delete[] B2;
    for(int i = 0;i < n/2; ++i){
        delete[] B3[i];
    }
    delete[] B3;
    for(int i = 0;i < n/2; ++i){
        delete[] B4[i];
    }
    delete[] B4;

    for(int i = 0;i < n/2; ++i){
        delete[] C1[i];
    }
    delete[] C1;
    for(int i = 0;i < n/2; ++i){
        delete[] C2[i];
    }
    delete[] C2;
    for(int i = 0;i < n/2; ++i){
        delete[] C3[i];
    }
    delete[] C3;
    for(int i = 0;i < n/2; ++i){
        delete[] C4[i];
    }
    delete[] C4;

    for(int i = 0;i < n/2; ++i){
        delete[] P1[i];
    }
    delete[] P1;
    for(int i = 0;i < n/2; ++i){
        delete[] P2[i];
    }
    delete[] P2;
    for(int i = 0;i < n/2; ++i){
        delete[] P3[i];
    }
    delete[] P3;
    for(int i = 0;i < n/2; ++i){
        delete[] P4[i];
    }
    delete[] P4;
    for(int i = 0;i < n/2; ++i){
        delete[] P5[i];
    }
    delete[] P5;
    for(int i = 0;i < n/2; ++i){
        delete[] P6[i];
    }
    delete[] P6;
    for(int i = 0;i < n/2; ++i){
        delete[] P7[i];
    }
    delete[] P7;
    for(int i = 0;i < n/2; ++i){
        delete[] P8[i];
    }
    delete[] P8;
    ///////////////////////////////////////////////////////////////////////////
    
    }

}


