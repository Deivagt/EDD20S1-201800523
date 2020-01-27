#include <iostream>

using namespace std;

int main()
{
	
    
    cout<<"Introduce el tamaño del rectangulo: ";
    
    string tamaño;
    cin >> tamaño;
    
    cout<< "Generando Rectangulo..."<<"\n";
    int tam = stoi(tamaño);
    for(int i = 1; i <= tam; i++){ 
    	for(int j = 1; j <= tam; j++){
    			if(i == 1 && j != tam){
    				cout<<" 1";
    			}else if(i == 1 && j == tam){
    				cout<<" 1" << "\n";
    			}else if(j == 1){
    				cout<<" 1";
    			}else if(j == tam){
    				cout<<" 1"<< "\n";	
    			}else if(i == tam){
    				cout<<" 1";	
    			}else{
    				cout<<"  ";	
    			}
    		}
    	}
 
    return 0;
}
