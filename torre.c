#include <stdio.h>
#include <stdlib.h> //atoi
#include "funz.h"

int main(int argc,char *argv[]){

    int O=1, I=2, D=3;

    if(argc!=2){  /*argc è già 1 quando chiamiamo da terminale il main perchè scriviamo il nome del .exe*/
        printf("errore\n");
        return -1;
    }
                        /*argv[0] è il nome del file.c chiamato da terminale*/
    int n=atoi(argv[1]); /*fa diventare una stringa un intero perchè tutto ciò che metti da terminale di base è una stringa*/
    printf("il caso richiesto è il caso con %d dischi\n",n);


    dischi(n,O,I,D);
}

void dischi(int n,int o,int i,int d){

    if(n==1){
    printf("\nSposto il disco da: %d a: %d\n",o,d);
    }

    else{

        dischi(n-1,o,i,d);/*mettere da o su*/

        dischi(1,o,d,i);  //mettere unico rimasto da o a D

        dischi(n-1,i,d,d); //mettere tutti gli altri da i a 


    }
}