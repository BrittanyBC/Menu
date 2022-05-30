#include <iostream>
#include <cstdlib>
 
using namespace std;
 
void pausa();
 
int main()
{
    bool bandera=false;
    char tecla;
 
    do
    {
        system("cls");
        cin.clear();
        cout << "MENU" << endl;
        cout << "-----------" << endl << endl;
        cout << "1 .- Comparar" << endl;
        cout << "2 .- Sumar" << endl;
        cout << "3 .- Edad" << endl;
        cout << "4 .- Punto de Venta" << endl;
        cout << "5 .- Moneda" << endl << endl;
        cout << "6 .- Salir" << endl << endl;
        cout << "Elije una opcion: ";
 
        cin >> tecla;
 
		switch(tecla)
		{
			case '1':
				system("cls");
				cout << "Has elejido Comparar.\n";
                    //declaracion de variables
	                int bb_n1,bb_n2;
	                //insercion de datos
	                cin>>bb_n1,bb_n2;
	                //comparacion para saber cual es el menor
	                //si n1 es igual a n1 monstrara que son iguales  
	                if (bb_n1=bb_n2){
	                cout<<"n1 es igual a n2";
	                }
	                //caso contrario si no son iguales mostrara no son iguales
	                else 
	                	{cout<<"n2 no es igual a n1";
	                }
				pausa();
				break;
 
			case '2':
				system("cls");
				cout << "Has elejido Suma.\n";
                	//declaracion de variables
	                int bb_n1,bb_n2,bb_s;
	                //insercion de datos
	                cin>>bb_n1,bb_n2;
	                //operacion de sema
	                bb_s=bb_n1+bb_n2;
	                cout<<"La suma es:"bb_s;
				pausa();
				break;
 
			case '3':
				system("cls");
				cout << "Has elejido Edad.\n";
                	//declaracion de variables
	                int bb_t1,bb_t2,bb_ed;
	                //insercion de datos
	                cout<<"Ingrese el año actual";
	                cin>>bb_t1;
	                cout<<"Ingrese su año de nacimiento";
	                cin>>bb_t2;
	                //calculo de edad
	                bb_ed=bb_t1-bb_t2;
	                //resultado
	                cout<<"Su edad es:"bb_ed;
				pausa();
				break;
 
			case '4':
				system("cls");
				cout << "Has elejido Punto de venta.\n";
                	//declaracion de vriables
	                float bb_n1,bb_n2,bb_n3,bb_iva,bb_st;
	                //insercion de datos o productos
	                cout<<"Ingrese el primer producto:";	
	                cin>>bb_n1;
	                cout<<"Ingrese el segundo producto:";
	                cin>>bb_n2;
	                cout<<"Ingrese el tercer producto:";
	                cin>>bb_n3;
	                //suma de la compra
	                bb_s=bb_n1+bb_n2+bb_n3;
	                //calculo de impuesto al valor agregado
	                bb_iva=bb_s*0.12;
	                //precio final
	                bb_st=bb_s+bb_iva;
	                cout<<"El total de su compra es:"bb_st;
				pausa();
				break;
 
			case '5':
				system("cls");
				cout << "Has elejido Moneda.\n";
                	//declaracion de variables
	                int bb_i,bb_e;
	                cout<<"Ingrese el saldo total de su dinero";
	                //insercion de datos
	                cin bb_e;
	                //estructura repetitiva for para contar
	                for (int bb_i = 0; bb_i < bb_e; ++bb_i)
	                {
	                	cout<<"Si las monedas son de dolar, la cantidad de monedas que tiene son:"bb_i;
	                }
				pausa();
				break;

            case '6':
				bandera=true;
				//exit(1);
				break;

			default:
				system("cls");
				cout << "Opcion no valida.\a\n";
				pausa();
				break;
		}
    }while(bandera!=true);
 
    return 0;
}
 
void pausa()
{
    cout << "Pulsa una tecla para continuar...";
    getwchar();
    getwchar();
}