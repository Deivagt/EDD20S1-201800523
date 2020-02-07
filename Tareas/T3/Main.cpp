#include <iostream>

using namespace std;

struct nodo{
	int id;
	int carnet;
	string nombre;
	nodo* siguiente;
	}*cabeza, *fin;
	
void insertar();
	void buscar();
	void eliminar();
	void imprimir();
	
	int i = 0;
	
int main()
{
 	int a;
	insertar();
	insertar();
	insertar();
   
   imprimir();
   eliminar();
   imprimir();
  
    return 0;
}

void insertar(){
	nodo* nuevo = new nodo();
	cout<<"Ingrese el estudiante: \n";
	cout<<"Carnet: ";
	cin >> nuevo->carnet;
	cout<<"Nombre: ";
	cin>>nuevo->nombre;
	
	nuevo->id = i;
	i++;
	
	if(cabeza == NULL){
			cabeza = nuevo;
			cabeza->siguiente= NULL;
			fin = nuevo;
		}else
		{
			fin->siguiente = nuevo;
			nuevo->siguiente = NULL;
			fin = nuevo;
		}
	}
	

	
	void imprimir(){
		nodo* actual = new nodo();
		actual = cabeza;
		
		
		if(cabeza != NULL){
			
			while(actual != NULL){
				cout<<" "<< actual -> carnet<<" "<< actual->nombre << "\n";
				actual = actual->siguiente;
			}
		}
		else
		{
		cout<<"La lista esta Vacia ";		
		}
	}

	void buscar(){
		nodo* actual = new nodo();
		actual = cabeza;
		bool control = false;
		int id;
		cout<<"Ingrese el nodo buscado: ";
		cin>> id;
		if(cabeza != NULL){
		while(actual != NULL && control == false){
			if(actual->id == id){
				cout<<"Nombre :" << actual-> nombre <<"\nCarnet: "<< actual->carnet<<"\n";
				control = true;
			}
			actual = actual->siguiente;
		}
		if(!control){
			cout<<"Nodo no encontrado";
		}
	}else{
		cout<<"Lista Vacia\n";
		}
}

	void eliminar(){
		nodo* actual = new nodo();
		nodo* anterior = new nodo();
		actual = cabeza;
		bool control = false;
		int id;
		cout<<"Ingrese el nodo a eliminar: ";
		cin>> id;
		if(cabeza != NULL){
		while(actual != NULL && control == false){
			if(actual->id == id){
				if(actual == cabeza){
					cabeza = actual-> siguiente;
					actual -> siguiente = NULL;
				}else if(actual == fin){
					
				}else{
					actual-> siguiente = NULL;
					fin = actual;
				}
				control = true;
			}
			actual = actual->siguiente;
		}
		if(!control){
			cout<<"Nodo no encontrado";
		}
	}else{
		cout<<"Lista Vacia\n";
		}
	}