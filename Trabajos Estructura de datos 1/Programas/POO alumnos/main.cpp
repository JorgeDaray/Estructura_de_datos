#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

// void modificar();
void Ingresar();

class Alumno{
    private:
        string nombre;
        int Matematicas,Fisica,Quimica,Promedio;
    public:
        Alumno();
        ~Alumno();
        Alumno(int,int,int);
        void setnombre(string);
        string getnombre();
        void setMatematicas(int);
        int getMatematicas();
        void setFisica(int);
        int getFisica();
        void setQuimica(int);
        int getQuimica();
        void CalcularPromedio();
        int getPromedio();

};

Alumno::Alumno(){
}

Alumno::Alumno(int,int,int){
}

//Clase nombre
void Alumno::setnombre(string nombre){
    this->nombre=nombre;
}
string Alumno::getnombre(){
    return this->nombre;
}

//Clase mate

void Alumno::setMatematicas(int Matematicas){
    this->Matematicas=Matematicas;
}
int Alumno::getMatematicas(){
    return this->Matematicas;
}

//Clase Fisica

void Alumno::setFisica(int Fisica){
    this->Fisica=Fisica;
}
int Alumno::getFisica(){
    return this->Fisica;
}

// Clase Quimica

void Alumno::setQuimica(int Quimica){
    this->Quimica=Quimica;
}
int Alumno::getQuimica(){
    return this->Quimica;
}

//Clase promedio

void Alumno::CalcularPromedio(){
    this->Promedio=(this->Matematicas+this->Fisica+this->Quimica)/3;
}
int Alumno::getPromedio(){
    return this->Promedio;
}

//Variables globales
    string nombre;
    int Matematicas=0,Fisica=0, Quimica=0;
    int opc=0;
    Alumno Alumnos[2];

int main()
{

    do{
        cout<<"Menu"<<endl;
        cout<<"1)Ingresar estudiantes "<<endl;
        cout<<"2)Listar estudiantes "<<endl;
        cout<<"3)Modificar"<<endl;
        cout<<"5)Salir"<<endl;
        cout<<"seleccione una opcion:"<<endl;
        cin>>opc;
        switch(opc){
            case 1:{
                Ingresar();
            }break;
            case 2:{
            for(int i = 0; i < 2 ; i++){
            cout<<"Nombre:"<<Alumnos[i].getnombre()<<endl;
            cout<<"Calificacion Matematicas:"<<Alumnos[i].getMatematicas()<<endl;
            cout<<"Calificacion Matematicas:"<<Alumnos[i].getFisica()<<endl;
            cout<<"Calificacion Matematicas:"<<Alumnos[i].getQuimica()<<endl;
            cout<<"Promedio: "<<Alumnos[i].getPromedio()<<endl;
            }
            case 3:{
                // modificar();
            }
            }
            }

    }while(opc!=5);
        system("pause>>cls");
    return 0;
}

void Ingresar(){
            int Contador = 0;
            while(Contador < 2){
            cout<<"ingrese nombre:"<<endl;cin>>nombre;
            Alumnos[Contador].setnombre(nombre);
            cout<<"ingrese calificacion Matematicas:"<<endl;cin>>Matematicas;
            if ( Matematicas >= 50 && Matematicas <= 100 ) {
            cout<< "esta en rango "<<endl;
            Alumnos[Contador].setMatematicas(Matematicas);
            }
            else{
                cout<<"numero no valido ingrese una calificacion entre 50 y 100"<<endl;
                return;
            }
            cout<<"ingrese Calificacion Fisica:"<<endl;cin>>Fisica;
            if ( Fisica >= 50 && Fisica <= 100 ) {
            cout<< "esta en rango "<<endl;
            Alumnos[Contador].setFisica(Fisica);
            }
            else{
                cout<<"numero no valido ingrese una calificacion entre 50 y 100"<<endl;
                return;
            }
            cout<<"ingrese calificacion Quimica:"<<endl;cin>>Quimica;
            if ( Quimica >= 50 && Quimica <= 100 ) {
            cout<< "esta en rango "<<endl;
            Alumnos[Contador].setQuimica(Quimica);
            }
            else{
                cout<<"numero no valido ingrese una calificacion entre 50 y 100"<<endl;
                return;
            }
            Alumnos[Contador].CalcularPromedio();
            Contador++;
            };
}

/*
modificar(Alumnos)
{
	int indice_modificado,modifica;
	cout<<("Cual indice deseas modificar: ")<<endl;cin>>indice_modificado;
	cout<<"Deseas modificar el (1) nombre, la (2) Matematicas, (3) Fisica o la (4) Quimica :"<<endl;cin>>modifica;
	switch(modifica)
		{
			case 1:cout<<"Introduce el nuevo nombre : "<<endl;
			       cin>>Alumnos[indice_modificado-1].nombre;
			       break;
			case 2:cout<<"Introduce la nueva cantidad : "<<endl;
				   cin>>Alumnos[indice_modificado-1].Matematicas;
			       break;
            case 3:cout<<"Introduce la nueva cantidad :"<<endl;
                    cin>>Alumnos[indice_modificado-1].Fisica;
                    break;
            case 4:cout<<"Introduce la nueva cantidad :"<<endl;
                    cin>>Alumnos[indice_modificado-1].Quimica;
                    break;
			default:cout<<"Opcion equivocada \n"<<endl;
		}

}
*/
// destructor
Alumno::~Alumno(){
}

