#include <bits/stdc++.h>
using namespace std;
 
 int ContarValores(string f);
 int main(){
 	string frase;
 	
 	cout<<"ingrese una frase/palabra:   ";
 	getline(cin,frase);
 	cout<<ContarValores(frase);
 	return 0;
 }
  int ContarValores(string f){
  	int i;
    int c=0;
  	for(i=0;i<f.size();i++){
  	   if(f[i]=='a'||f[i]=='e'){
  	   	c+=1;
		 }	
		if(f[i]=='o'||f[i]=='s'){
  	   	c+=2;
		 }
		if(f[i]=='d'||f[i]=='i'||f[i]=='n'||f[i]=='r'){
  	   	c+=3;
		 }
		if(f[i]=='c'||f[i]=='l'||f[i]=='n'||f[i]=='r'){
  	   	c+=4;
		 }
		if(f[i]=='m'||f[i]=='p'){
  	   	c+=5;
		 }
		if(f[i]=='b'||f[i]=='f'||f[i]=='g'||f[i]=='h'||f[i]=='j'|f[i]=='q'||f[i]=='v'||f[i]=='x'||f[i]=='y'||f[i]=='z'){
  	   	c+=6;
		 }
		if(f[i]=='k'||f[i]=='w'){
  	   	c+=7;
		 
		
	  }
	  }
	  return c;
	  }