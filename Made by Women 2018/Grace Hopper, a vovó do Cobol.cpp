#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int hifen, letras;
	string grace;
	
	while(getline(cin, grace)) {
		
		letras = 0;
		for(int i=0;i<5;i++) {
		
    		int hifen = grace.find("-");
    		if((toupper(grace[0]) == 'C' || toupper(grace[hifen - 1]) == 'C') && (i == 0)) { 
				grace = grace.substr(hifen + 1);
				letras++;
			}
    		else if((toupper(grace[0]) == 'O' || toupper(grace[hifen - 1]) == 'O') && (i == 1 || i == 3)) { 
				grace = grace.substr(hifen + 1);
				letras++;
			}
    		else if((toupper(grace[0]) == 'B' || toupper(grace[hifen - 1]) == 'B') && (i == 2)) { 
				grace = grace.substr(hifen + 1);
				letras++;
 			}	
 			
    		else if((toupper(grace[0]) == 'L' || toupper(grace[grace.length() - 1]) == 'L') && (i == 4)) { 
				grace = grace.substr(hifen + 1);
				letras++;
	  	    }	
		}
		
		if(letras == 5) cout<<"GRACE HOPPER\n";
		else cout<<"BUG\n";
	}
	
	return 0;
}