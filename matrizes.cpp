/** 
*@file matrizes.cpp
*@brief Programa que compara os algoritmos de multiplicacao de matrizes recursivo e iterativo
*@author Luís Eduardo Rique (luiseduardorique@gmail.com)
*@author Rodolpho Erick (rodolphoerick90@gmail.com)
*@since 26/04/2017
*@date  26/04/2017
*/

#include <iostream>
#include <fstream>
#include "matrizes.h"

using namespace std;

/**
*@brief Funcao principal
*/
int main(int argc, char* argv[]){

    ifstream entrada1(argv[1]);
	if(!entrada1) {
		cerr << "O arquivo de entrada nao foi encontrado!" << endl;
		return 0;
	}
    string aux1;
    string string1;
    
    int contador1 = 0; /**< variavel que conta quantas linhas possui o arquivo */

	while(getline(entrada1, string1)) {		
			contador1++;
	}

    entrada1.clear();
	entrada1.seekg(entrada1.beg);

    ifstream entrada2(argv[2]);
	if(!entrada2) {
		cerr << "O arquivo de entrada nao foi encontrado!" << endl;
		return 0;
	}
    string aux2;
    string string2;

    int contador2 = 0; /**< variavel que conta quantas linhas possui o arquivo */

	while(getline(entrada2, string2)) {		
			contador2++;
	}

    entrada2.clear();
	entrada2.seekg(entrada2.beg);

    if(contador1 != contador2){
        cout << "Tamanhos incompatíveis" << endl;
        return 0;
    }

    int d1; /**< Dimensão da matriz1 */
    getline(entrada1, aux1);
    d1 = stoi(aux1);

    int **matriz1 = new int*[d1]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < d1; i++){
        matriz1[i] = new int[d1];
    }

    for(int ii=0; ii<d1; ii++){
        for(int jj=0; jj<d1; jj++){
            if(jj == d1-1){
                getline(entrada1, aux1);    
                matriz1[ii][jj] = stoi(aux1);
            }
            else{
                getline(entrada1, aux1, ' ');    
                matriz1[ii][jj] = stoi(aux1);
            }
        }
    }

    int d2; /**< Dimensão da matriz2 */
    getline(entrada2, aux2);
    d2 = stoi(aux2);

    int **matriz2 = new int*[d2]; /**<Alocando a matriz dinamicamente*/
    for(int i = 0;i < d2; i++){
        matriz2[i] = new int[d2];
    }

    for(int ii=0; ii<d2; ii++){
        for(int jj=0; jj<d2; jj++){
            if(jj == d2-1){
                getline(entrada2, aux2);    
                matriz2[ii][jj] = stoi(aux2);
            }
            else{
                getline(entrada2, aux2, ' ');    
                matriz2[ii][jj] = stoi(aux2);
            }
        }
    }


    int **Mres = new int*[d1]; /**<Alocando a matriz resultante dinamicamente*/
    for(int i = 0;i < d1; i++){
        Mres[i] = new int[d1];
    }
    //multiplicaI(matriz1, matriz2, Mres, d1);
    multiplicaR(matriz1, matriz2, Mres, d1);
    print(Mres, d1);

    for(int i = 0;i < d1; ++i){
        delete[] matriz1[i];
    }
    delete[] matriz1;  

    for(int i = 0;i < d2; ++i){
        delete[] matriz2[i];
    }
    delete[] matriz2;  

    for(int i = 0;i < d1; ++i){
        delete[] Mres[i];
    }
    delete[] Mres;  
    return 0;
}