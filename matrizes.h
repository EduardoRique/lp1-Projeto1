/** 
*@file matrizes.h
*@brief Arquivo cabecalho contendo a definicao das funcoes que realizam 
*		a multiplicacao de matrizes de forma recursiva e iterativa
*@author Luís Eduardo Rique (luiseduardorique@gmail.com)
*@author Rodolpho Erick (rodolphoerick90@gmail.com)
*@since 26/04/2017
*@date  26/04/2017
*/

#ifndef MATRIZES_H
#define MATRIZES_H

#include <iostream>

using namespace std;

/**
* @brief Funcao que multiplica duas matrizes quadradas de dimensao n x n de forma iterativa
* @param A Matriz de entrada
* @param B Matriz de entrada
* @param n Dimensao das matrizes de entrada
* @return Matriz produto resultante da multiplicacao
*/
T** multiplicaI(T** A, T** B, int n);

/**
* @brief Funcao que multiplica duas matrizes quadradas de dimensao n x n de forma recursiva
* @param A Matriz de entrada
* @param B Matriz de entrada
* @param n Dimensao das matrizes de entrada
* @return Matriz produto resultante da multiplicacao
*/
T** multiplicaR(T** A, T** B, int n);

#endif