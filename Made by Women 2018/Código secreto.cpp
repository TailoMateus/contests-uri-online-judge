#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int N, controlaEspacos, countAsteriscos;
	char S[10];
	string codigo;
	
	while(cin >> N) {
		
		gets(S);
		
		for(int j=0; j<N; j++) {
			
			controlaEspacos = countAsteriscos = 0;
			getline(cin, codigo);
			
			if(codigo[1] == ' ') controlaEspacos = 2;
			else if(codigo[2] == ' ') controlaEspacos = 1;
			
			for(int i=0;i < codigo.length(); i++) {

				if(codigo[i] == ' ') countAsteriscos += controlaEspacos;
				else countAsteriscos++;
			}
			
			printf("%c\n", countAsteriscos+96);
		}
	}
	
	return 0;
}