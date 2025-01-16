#include <iostream>
#define LIMITE 100

void diagonalDeCadaElemento(int n, int m, int x, int y, int A[LIMITE][LIMITE]){
	if(x == y){
		for(int i = 0; i < n; i++){
			std::cout << A[i][i] << " " << std::endl;
		}
	}
	if(x > y){		
		for(int i = x - y;i < y; i++){
			for(int j = 0; j <= y; j++){
				std::cout << A[i][j] << " " << std::endl;	
			}	
		}
	}
	
	if(x < y){		
		for(int i = 0;i < m; i++){
			for(int j = 0; j < n; j++){
				std::cout << A[j][i] << " " << std::endl;	
			}	
		}
	}
}

int main(){
	int n = 5;
	int m = 5;
	int x = 2;
	int y = 3;
	int A[LIMITE][LIMITE] = {{0, 4, 2, 4, 2}, 
							 {1, 4, 2, 4, 2},
							 {0, 4, 2, 4, 2},
							 {0, 4, 2, 4, 2},
							 {0, 4, 2, 4, 2}};
	diagonalDeCadaElemento(n, m, x, y, A);
	return 0;
};