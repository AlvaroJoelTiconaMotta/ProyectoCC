#include<iostream>

using namespace std;


class Dispositivo
{
	public:
		char tipo;
		float precio;
		int unidades_disponibles;
};



class Tienda
{
	string nombre;	
	public:
		
		Dispositivo *lista_de_dispositivos[100];
	
		Tienda();
    void modificar_stock();
    void modificar_dispositivo();
	void agregar_dispositivo() {}
	void vender_dispositivo() {}
	void mostrar_dispositivos();
    void buscar_dispositivo_marca();
		void buscar_dispositivo_precio();
    void buscar_dispositivo_modelo();
    void colocar_oferta();
    void mostrar_stock();
};


Tienda::Tienda()
{
	nombre = "TeslaMarket";
}



void Tienda::mostrar_dispositivos()
{
	cout<< "-------------------------------------------"<<endl;
	cout<< "--------------  " << nombre<<"  --------------"<<endl;
	cout<< "-------------------------------------------"<<endl;
}
 void Tienda::vender_dispositivo(){
   
 }


int main()
{
	Tienda t;
	bool check = true;
	int checker = -1;
	while (check)
	{
		cout<<" 1- Agregar dispositivo "<< endl;
		cout<<" 2- Vender dispositivo "<< endl;
		cout<<" 3- Mostrar dispositivos "<< endl;
		cout<<" 4- Salir "<< endl;
		cin>> checker;
		
		if(checker == 1)
		{ 
			t.agregar_dispositivo();
		}
		
		else if (checker == 2) 
		{
			
		}
		
		else if (checker == 3) 
		{
			t.mostrar_dispositivos();
		}
		
		else if (checker == 4) 
		{
			check = false;
		}
		
		else 
		{
			cout<<" Ingrese un numero valido";
		}
		
		system("pause");
		system("cls");
		
		
	}
	
	
	return 0;
}
