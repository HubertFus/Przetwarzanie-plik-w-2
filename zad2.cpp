#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string x;
char l;
fstream plik;
fstream plik2;
void otwie(string x){
	plik2.open("passwords.txt",ios::app);
	plik2<<x<<endl;
	plik2.close();
}
int main(){
	plik.open("hasla.txt", ios::in);
	while(!plik.eof()){
		plik>>x;
		for(int i=0;i<x.length();i++){
		
		l=x[i];
		if(l==' '){
			break;
		}
		else{
		if(x.length()>=8){
			if(l=='$'){
			otwie(x);
			break;
		}else if(l=='#'){
			otwie(x);
			break;
		}else if(l=='*'){
			otwie(x);
			break;
		}
		}	
		}
		
		}
	}
	plik.close();
}
