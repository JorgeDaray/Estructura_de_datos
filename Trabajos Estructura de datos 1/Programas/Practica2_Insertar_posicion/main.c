#include <stdio.h>
#include <string.h>

const int MaxData=10;

struct Address{
    char name[50];
    char street[100];
    char city[50];
    char state[20];
    int pin;
    int bandera;
}data[10];

int head=0;
int actual=0;
int ultimo=0;

void inserta(int pos){
    if (pos < 0 || pos > MaxData){
    printf("Ingresa un elemento valido \n");
    system("pause");
    return;
}
for(actual = MaxData ; actual > pos ; actual-- ){

data[actual] = data[actual - 1];
}
        printf("Inserta los datos \n");
        fflush(stdin);
        printf("Give the name ");
        gets(data[pos].name);
        printf("Give the street ");
        gets(data[pos].street);
        printf("Give the city ");
        gets(data[pos].city);
        printf("Estado: ");
        gets(data[pos].state);
        printf("pin: ");
        scanf("%i",&data[pos].pin);
        data[pos].bandera= 1;
}

void siguiente(){
        if(data[actual].bandera == 1){
        printf("Numero posicion %i \n",actual);
        printf("\n Name: %s\n", data[actual].name);
        printf("street: %s\n", data[actual].street);
        printf("City: %s\n", data[actual].city);
        printf("State: %s\n", data[actual].state);
        printf("pin: %i\n\n", data[actual].pin);
        actual++;
        }
}

void imprimeLista(){
    int i;
    actual=head;

    for(i=head; i<= MaxData; i ++){
        if(data[i].bandera == 1){
        printf("Numero posicion %i \n",i);
        printf("\n Name: %s\n", data[i].name);
        printf("street: %s\n", data[i].street);
        printf("City: %s\n", data[i].city);
        printf("State: %s\n", data[i].state);
        printf("pin: %i\n\n", data[i].pin);
        }
            if (actual >MaxData){
                printf ("ha llegado al ultimo nodo");
                actual--;
            }

    }
}

void remover(){
int indice;
printf("Que nodo quieres remover?\n");
scanf("%i", &indice);
    if (indice > MaxData || indice <head || data[indice].bandera == 0){
    printf("indice fuera de rango \n");
    return;
    }
int i;
    for(i=indice; i<=MaxData; i++){
    strcpy(data[indice].name,"");
    strcpy(data[indice].city,"");
    strcpy(data[indice].street,"");
    strcpy(data[indice].state,"");
    data[indice].pin=0;
    data[indice].bandera=0;
    }
    actual=head;
}

void buscar(){
    int i;
    char cadena[50];
    printf("Dame el nombre a buscar :\n");
    scanf("%s",cadena);
    for (i=head;i<=MaxData;i++){
        if ( strcmp(data[i].name, cadena)==0 ){
            printf("\n Name: %s\n", data[i].name);
            printf("street: %s\n", data[i].street);
            printf("City: %s\n", data[i].city);
            printf("State: %s\n", data[i].state);
            printf("pin: %i\n\n", data[i].pin);
            printf(" Bandera: %i\n\n"), data[i].bandera;
            actual++;
        }
    }

}

int main(){
    int opcion,pos;
    strcpy(data[0].name, "Jhon Brown");
    strcpy(data[0].street, "5th");
    strcpy(data[0].city, "NY");
    strcpy(data[0].state, "NY");
    data[0].bandera = 1;
    strcpy(data[1].name, "Ana");
    strcpy(data[1].street, "alcalde");
    strcpy(data[1].city, "Gdl");
    strcpy(data[1].state, "Jal");
    data[1].bandera = 1;
    fflush(stdin);
    ultimo=MaxData;

    while(opcion!=6){
        printf("Que opcion deseas, \n1-inserta por posicion \n2-imprime lista \n3-siguiente nodo \n4-remover por nodo \n5-buscar por nombre \n6-salir \nOpcion: ");
        scanf("%i", &opcion);

        switch(opcion){
            case 1: system("cls");
                printf("En que posicion quieres insertar?\n");
                scanf("%i", &pos);
                inserta(pos);
                break;
            case 2: system("cls");
                imprimeLista();
                break;
            case 3: system("cls");
                siguiente();
                break;
            case 4: system("cls");
                remover();
                system("pause");
                break;
            case 5: system("cls");
                buscar();
                break;
            case 6:
                break;
            default: printf("Esa opcion no existe...\n");
        }
    }

    return 0;
}
