#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void leitura(string *nomeArquivosA, string *nomeArquivosB, int numMatrizes) {
	//double *matrizesA = new double[numMatrizes];
	//double *matrizesB = new double[numMatrizes];
	/** @brief Definicao da dimensao de todas as matrizes. */
	//int *dimensaoA = new int[numMatrizes];
	//int *dimensaoB = new int[numMatrizes];

	string objetoA, objetoB;	
	for (int i = 0; i < numMatrizes; i++) {		
		ifstream entradaA(nomeArquivosA[i]);		
		ifstream entradaB(nomeArquivosB[i]);

		stringstream ss;
		int dimensao;
		
		getline(entradaA, objetoA, ' ');
		ss << objetoA;
		ss >> dimensao;			
							
		
						
		entradaA.close();
		entradaB.close();	
	}	
}

int main(int argc, char* argv[]) {	

	/** @brief Leitura do nome do arquivo e checagem se ele existe ou nao. */
	string *nomeMatrizesA = new string[argc - 1];
	string *nomeMatrizesB = new string[argc - 1];	
	for (int i = 1; i <= argc - 1; i++) {
		stringstream ss;
		string argumento;		

		ss << argv[i];
		ss >> argumento;		

		nomeMatrizesA[i - 1] = "../teste/input/A" + argumento + "x" + argumento + ".txt";			
		nomeMatrizesB[i - 1] = "../teste/input/B" + argumento + "x" + argumento + ".txt";				

		ss.clear();	

		ifstream entradaA(nomeMatrizesA[i - 1]);
		ifstream entradaB(nomeMatrizesB[i - 1]);
	
		if (!entradaA) {
			cout << "O arquivo da matriz A de dimensao " << argumento << "x" << argumento << " nao foi encontrado." << endl;
			return 0;
		}
		if (!entradaB) {
			cout << "O arquivo da matriz B de dimensao " << argumento << "x" << argumento << " nao foi encontrado." << endl;
			return 0;
		}

		entradaA.close();
		entradaB.close();
	}	

	leitura(nomeMatrizesA, nomeMatrizesB, argc - 1);

	delete [] nomeMatrizesA;
	delete [] nomeMatrizesB;

	return 0;
}