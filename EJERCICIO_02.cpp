#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
struct pizza{
	int tipo;
	float precio;
}; 
void menu();
void ingresardatos();
void leer_archivo();
int main(){
	menu();
}
void menu(){
	int resp;
	string nombrearchivo;
	cout<<"Indique nombre de archivo: ";
	getline(cin,nombrearchivo);
	
	do {
		system("CLS");
		cout<<" MENU"<<"\n";
		cout<<" 1 - Ingresar venta "<<"\n";
		cout<<" 2 - Reporte de ventas del dia "<<"\n";		
		cout<<" 3 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Elija una opcion ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			ingresardatos();			
		}
		else if (resp==2){		
			system("CLS");
			leer_archivo();
		}					
		else if (resp==4)
			break;
		else 
			break;
		
	} while(resp!=4);	
}

void ingresardatos(string na){
	int tipo,n=1;
	
	float precio_pizza;
	pizza pizzas[n];
	cout<<"Ingrese el tipo de pizza a vender: "<<endl;
	cin>>tipo;
	if (tipo = 1){
		pizzas.precio = (80)*0.90;
	}
	else if (tipo = 2){
		pizzas.precio = (115)*0.85;
	}
	else if (tipo = 2){
		pizzas.precio = (100)*0.80
	}
	fflush(stdin);
	ofstream archivo; 
	fflush(stdin);
	archivo.open(na.c_str(),ios::app);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	archivo<<tipo<<"\t"<<pizza.precio;
	archivo.close();
}

void leer_archivo(){
	ifstream archivo;
	archivo.open(na.c_str(),ios::in);
	int lineas,i=0;
	string s,linea;
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo!!!";
		exit(1);
	}
	while (getline(archivo, s))
        lineas++;
	archivo.close();
	
	pizza recordset[lineas];
	
	archivo.open(na.c_str(),ios::in);
		if(archivo.fail()){
		cout<<"No se pudo abrir el archivo!!!";
		exit(1);
	}	

	for (int i = 0; i < lineas; i++)
    {
        if (!archivo)
        {                                               
            cerr << "No se puede abrir el archivo " << endl;
            system("PAUSE");
        }
    
        archivo>>recordset[i].tipo>>recordset[i].precio; 
    }
    archivo.close(); 
    for(int i = 0; i < lineas; i++){
    	cout<<recordset[i].tipo<<" "<<recordset[i].precio;  
	}

	system("PAUSE");
}
