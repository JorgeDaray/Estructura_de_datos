#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

struct libro{
  char codigo[20];
  char autor[20];
  char titulo[30];
  char editorial[30];
  char anio[30];
};

struct revista{
  char codigo[20];
  char nombre[30];
  char mes[15];
  char anio[30];
};

struct pelicula{
  char codigo[20];
  char titulo[30];
  char director[30];
  char productora[30];
  char anio[30];
};

union conjunto{
  struct libro libros;
  struct revista revistas;
  struct pelicula peliculas;
} tabla[100];

void menu();
void mostrar();
void revistamostrar();
void peliculamostrar();


int main()
{
    int opc=0;
    strcpy(tabla[0].libros.codigo, "1000");
    strcpy(tabla[1].libros.autor, "Daray Padilla");
    strcpy(tabla[2].libros.titulo,"Profe no me repruebe");
    strcpy(tabla[3].libros.editorial, "Codeblocks");
    strcpy(tabla[4].libros.anio, "2021");

    strcpy(tabla[5].revistas.codigo, "1100");
    strcpy(tabla[6].revistas.nombre, "El Informador");
    strcpy(tabla[7].revistas.mes,"8");
    strcpy(tabla[8].revistas.anio, "2021");

    strcpy(tabla[9].peliculas.codigo, "1200");
    strcpy(tabla[10].peliculas.titulo, "El profe que aprovaba a todos");
    strcpy(tabla[11].peliculas.director,"Daray Padilla");
    strcpy(tabla[12].peliculas.productora, "Codeblocks");
    strcpy(tabla[13].peliculas.anio, "2021");

  do{
   	system("cls");
   	 menu();
    cout<<"Continuar 1 salir 2:"<<endl;
    cin>>opc;
   }while(opc!=2);
   system("pause>>cls");
	return 0;
}

void menu(){
	int opc=0;
	cout<<"Estructuras y uniones"<<endl;
	cout<<"1) Libro"<<endl;
	cout<<"2) Revista"<<endl;
	cout<<"3) Pelicula"<<endl;
	cout<<"4) salir"<<endl;
    cout<<"Seleccione opcion:"<<endl;
    cin>>opc;
	switch(opc){

		case 1: {

			     mostrar();


		        }break;
        case 2: {
                revistamostrar();

        }break;
        case 3: {
                peliculamostrar();
        }break;
	}
}


void mostrar()
{
	cout<<"Codigo: "<< tabla[0].libros.codigo<<endl;
	cout<<"autor: "<<tabla[1].libros.autor<<endl;
	cout<<"titulo: "<<tabla[2].libros.titulo<<endl;
	cout<<"editorial: "<<tabla[3].libros.editorial<<endl;
	cout<<"año: "<<tabla[4].libros.anio<<endl;
}

void revistamostrar(){
	cout<<"Codigo: "<<tabla[5].revistas.codigo<<endl;
	cout<<"autor: "<<tabla[6].revistas.nombre<<endl;
	cout<<"titulo: "<<tabla[7].revistas.mes<<endl;
	cout<<"editorial: "<<tabla[8].revistas.anio<<endl;

}
void peliculamostrar(){
	cout<<"Codigo: "<<tabla[9].peliculas.codigo<<endl;
	cout<<"autor: "<<tabla[10].peliculas.titulo<<endl;
	cout<<"titulo: "<<tabla[11].peliculas.director<<endl;
	cout<<"editorial: "<<tabla[12].peliculas.productora<<endl;
	cout<<"año: "<<tabla[13].peliculas.anio<<endl;

}
