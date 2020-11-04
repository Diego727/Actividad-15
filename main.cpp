#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    vector<string> datos;
    int op = 1;
    int temp;
    string aux;

    while(op != 0){
        cout<<endl;
        cout<<"1.- Agregar al final"<<endl;
        cout<<"2.- Mostrar"<< endl;
        cout<<"3.- Inicialziar arreglo"<<endl;
        cout<<"4.- Mostrar primer elemento"<<endl;
        cout<<"5.- Mostrar ultimo elemento"<<endl;
        cout<<"6.- Ordenar"<<endl;
        cout<<"7.- Insertar en una posicion valida"<<endl;
        cout<<"8.- Eliminar en una posicion valida"<<endl;
        cout<<"9.- Eliminar ultimo"<<endl;
        cout<<"0.- Salir"<<endl;
        cout<<"Elija una opcion: ";
        cin>>op; 
        cin.ignore();
        cout<<endl;

        switch(op){
            case 1:
                cout<<"Cadena:";
                getline(cin, aux);
                datos.push_back(aux);
                break;
            case 2:
                for(int i = 0; i<datos.size();i++)
                    cout<<datos[i]<< " ,";


                cout<<"\b ";
                cout<<endl;
                break;
            case 3:
                cout<<"Ingrese el tamanio del arreglo:";
                cin>>temp;
                cin.ignore();
                cout<<"Ingrese el valor con el que desea inicializar el arreglo:";
                getline(cin,aux);
                datos = vector<string>(temp, aux);
                break;
            case 4:
                if(datos.empty())
                    cout<<"El arreglo se encuentra vacio";
                else
                    cout<< "Primer elemento del arreglo: " <<datos.front()<<endl;
                  
                break;
            case 5:
                if(datos.empty())
                    cout<<"El arreglo se encuentra vacio";
                else
                    cout<<"Ultimo elemento del arreglo: " <<datos.back()<<endl;
                
               
                break;
            case 6:
                //sort(datos.begin(),datos.end(),greater<string>);
                sort(datos.begin(),datos.end());
                cout<<"Arreglo ordenado..."<<endl;
                break;
            case 7:
                cout<<"Posicion: ";
                cin>>temp;
                cin.ignore();
                cout<<"Cadena: ";
                getline(cin,aux);

                if(temp < 0 and temp>=datos.size())
                    cout<<"Posicion no valida"<<endl;
                else{
                    datos.insert(datos.begin()+temp,aux);
                    cout<<"Se ha insertado el dato..."<<endl;
                }
                
                break;
            case 8:
                cout<<"Posicion: ";
                cin>>temp;
                cin.ignore();

                if(temp < 0 and temp>=datos.size())
                    cout<<"Posicion no valida"<<endl;
                else{
                    datos.erase(datos.begin()+temp);
                    cout<<"Se ha eliminado el elemento..."<<endl;
                }
                break;
            case 9:
                if(temp < 0 and temp>=datos.size())
                    cout<<"Lista vacia"<<endl;
                else{
                    datos.pop_back();
                     cout<<"Se ha eliminado el ultimo elemento..."<<endl;
                }
                    
                break;
            case 0:
                cout<<"Hasta luego <3";
                break;
            default:
                cout<<"Opcion no valida"<<endl;
        }
    }
    
    return 0;
}