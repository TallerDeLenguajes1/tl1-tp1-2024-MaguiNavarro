#include  <stdio.h>

int main(){
    printf("hola mundo\n");
     int num = 3;
     int *punt= &num;
     
     printf("contenido del puntero: %d\n ", *punt);
     printf("Direccion almacenada por el puntero %p\n", punt);
     printf("direccion de memoria del puntero %p\n", &punt);
     printf("direccion de memoria de la variable num %p\n", &num);

     printf("Tamaño de memoria utilizado por el puntero: %ld\n", sizeof(punt));
     printf("Tamaño de memoria utilizado por el num: %ld\n", sizeof(num));
      

     return 0;
}