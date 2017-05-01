/** 
*@file  funcoes.h
*@brief Arquivo de corpo contendo a implentacao das funcoes que realizam
*		a multiplicacao de matrizes de forma recursiva e iterativa
*@author Luís Eduardo Rique (luiseduardorique@gmail.com)
*@author Rodolpho Erick (rodolphoerick90@gmail.com)
*@since 26/04/2017
*@date  01/05/2017
*/

#ifndef FUNCOES_H
#define FUNCOES_H

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;

/**
* @brief Funcao que escreve a matriz resultante em arquivo
* @param Mres Matriz resultante
* @param n Dimensao das matrizes de entrada
*/
template <typename T>
bool print(T** Mres, int n) {
	string arquivo, aux;
	stringstream ss;

	ss << n;
	ss >> aux;

	arquivo = "../lp1-Projeto1/input/C" + aux + "x" + aux + ".txt";

	ofstream outfile(arquivo);

	if (!outfile) {
		cerr << "Arquivo nao gerado." << endl;	
		return false;	
	}

	outfile << n << " " << n << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			outfile << Mres[i][j] << " ";
		}
		outfile << endl;
	}

	outfile.close();

	return true;
}

/**
* @brief Funcao que multiplica duas matrizes quadradas de dimensao n x n de forma iterativa
* @param A Matriz de entrada
* @param B Matriz de entrada
* @param n Dimensao das matrizes de entrada
* @return Matriz produto resultante da multiplicacao
*/
template <typename T>
void multiplicaI(T** A, T** B, T** C, int n) {
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
template <typename T>
void multiplicaR(T** A, T** B, T** C, int n) {
	static int i = 0, j = 0, k = 0;

    if(i >= n) {
        return;
    } else if(i < n) {
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


#endif