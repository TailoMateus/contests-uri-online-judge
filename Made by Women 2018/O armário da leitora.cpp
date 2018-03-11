#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
	int N, L, countLivrosArmario, livrosArmario[10000], execute;
	
	while(cin >> N){
		countLivrosArmario = execute = 0;
		for(int i=0;i<N;i++) {
			cin >> L;
			
			if(i == 0) {
				countLivrosArmario++;
				livrosArmario[3] = L;
			}
			else {
				execute = 0;
				for(int j=0;j<5;j++) {
					if(livrosArmario[j] == L) {
						execute = 1;
						break;
					}
				}
				
				for(int j=1;j<4;j++) { 
					if(execute == 0){
						livrosArmario[j-1] = livrosArmario[j];
					}	
				}
				
				if(execute == 0){
					livrosArmario[3] = L;
					countLivrosArmario++;
				}
			}	
		}
		cout<<countLivrosArmario<<endl;
	}
	
	return 0;
}