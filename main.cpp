#include <iostream>
using namespace std;
/* 
Determinar el precio de un billete de ida y vuelta en ferrocarril, conociendo la distancia a recorrer y sabiendo que si el n�mero de d�as de estancia es superior a siete y la distancia superior a 800 kil�metros el billete tiene una reducci�n del 30%.
El precio por kil�metro es de 2 D�lares con 50 Centavos.
 */

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "spanish");
	//Esquema General de Ejecuci�n de un Algoritmo
	//1. Declaraci�n de las variables
		//datos de entradas
		int distancia, dias;
		
		//datos de salida
		float tiempo,descuento,total; 
		
		//datos auxiliares
		const float diasmax = 7, 
		kilomax = 800,  
		desc = 0.3, 
		preciokm = 2.5;
		
			
		//2. Entrada de datos
		 cout << "Introducir km Distancia.\n"; 
		 cin >> distancia;
		 cout << "Introducir dias de Estancia.\n"; 
		 cin >> dias;
		 
		//3. Procesamiento de los datos
		tiempo = distancia * preciokm;
		descuento = tiempo * desc;
		total = (tiempo - descuento);
		
		if (distancia <= kilomax && dias <= diasmax)
		{ 
		tiempo = distancia * preciokm;
		//4. Salida de resultados
	    cout << "Costo del billete USD:" << tiempo << endl;
	    }
	    
	    if(distancia > kilomax && dias <= diasmax)
		{
		tiempo = distancia * preciokm;
	     //4. Salida de resultados
	    cout << " Costo del billete USD:" << tiempo << endl;
	    }
	
	    if(distancia <= kilomax && dias > diasmax)
		{ 
	    tiempo = distancia * preciokm;
	    //4. Salida de resultados
	    cout << " Costo del billete USD:" << tiempo << endl;
	    }
	    
	    
		if(distancia > kilomax && dias > diasmax)
		{ 
		tiempo = distancia * preciokm;
	    //4. Salida de resultados
	    cout << " Costo del billete USD:" << tiempo << endl; 
	    descuento = tiempo * desc;
	    cout << " Precio por Km USD " << preciokm << endl; 
	    cout << " Desct 30% :" << descuento << endl; 
	    total = (tiempo - descuento);
	    cout << " El total del billete es USD:" << total << endl;
	    }
	
	   cout<<"==========*********==========\n\n\n";
	   
	   system("pause");
	   
	   return 0;
	   }
	
	
	
	
	
	
	
	
	
