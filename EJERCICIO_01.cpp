#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

void ingreso();

struct jugador{
	char nacionalidad;
	int edad;
	float sueldo;
};

int main(){
	ingreso();
}

void ingreso(){
	int n = 0;
	int i=0;
	int cat1,cat2,cat3,cat4;
	float mayor=0;
	float cs1,cs2,cs3,cs4;
	float base=2500.00,tplanilla=0;
	cout<<"Cantidad de jugadores a ingresar: "<<endl;
	cin>>n;
	jugador jugadores[n];
	for(i=0;i<n;i++){
		cout<<"Ingrese 1 si el jugador es nacional\nIngrese 2 si es extranjero "<<endl;
		cin>>jugadores[i].nacionalidad;
		cout<<"Ingrese la edad del jugador"<<endl;
		cin>>jugadores[i].edad; 
	}	
	
	for(i=0;i<n;i++){
		if ((jugadores[i].edad>=15) and (jugadores[i].edad<=20)){
			jugadores[i].sueldo = base + 1400;
			if (jugadores[i].nacionalidad = 2){
				jugadores[i].sueldo +=500;
			}
			cat1+=1;
			cs1+=jugadores[i].sueldo;
		}
		else if ((jugadores[i].edad>21) and (jugadores[i].edad<=25)){
			jugadores[i].sueldo = base + 1500;
			cat2+=1;
			cs2+=jugadores[i].sueldo;
		}
		else if ((jugadores[i].edad>26) and (jugadores[i].edad <=30)){
			jugadores[i].sueldo = base + 1200;
			cat3+=1;
			cs3+=jugadores[i].sueldo;
		}
		else if (jugadores[i].edad>30){
			jugadores[i].sueldo = base + 800;
			cat4+=1;
			cs4+=jugadores[i].sueldo;
		}
		
	for(i=0;i<n;i++){
		cout<<"Edad del jugador #: "<<i+1<<" "<<jugadores[i].edad<<endl;
		cout<<"Nacionalidad del jugador # :"<<i+1<<" Extranjero"<<endl;
		cout<<"Sueldo del jugador # :"<<i+1<<" :"<<jugadores[i].sueldo<<endl;
	}
	cout<<"Total planilla: "<<tplanilla<<endl;
	cout<<"Jugadores Categoria 1: "<<cat1<<" Sueldo por categoria: "<<cs1<<endl;
	cout<<"Jugadores Categoria 2: "<<cat2<<" Sueldo por categoria: "<<cs2<<endl;
	cout<<"Jugadores Categoria 3: "<<cat3<<" Sueldo por categoria: "<<cs3<<endl;
	cout<<"Jugadores Categoria 4: "<<cat4<<" Sueldo por categoria: "<<cs4<<endl;
}
}
