#include<iostream>
using namespace std;
int main() {
float x,y;
cout<<"Ingrese x:" ; cin>>x;
cout<<"Ingrese y:" ; cin>>y;
if(x==y){
cout<<"El valor de x="<<x<<":es igual a y="<<y<<endl;
	
}else{
if(x<y)	{ 
cout<<"El valor de x="<<x<<":ES MENOR A y="<<y<<endl;
}else{
cout<<"El valor de y="<<y<<":ES MENOR A x="<<x<<endl;	
} 
}	
return(0);	
}