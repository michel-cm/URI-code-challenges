#include <stdio.h>
int main() {

int qentradas=0, qdigitos=0, i;
int entrada1, entrada2, aux;

scanf("%d", &qentradas);
int vetresult[qentradas];

for(i = 0; i < qentradas; i++){
    scanf("%d %d", &entrada1, &entrada2);

    //descobrindo a quantidade de digitos na entrada2;
    //se ele tiver somente 1 digito
    if(entrada2/10 < 1){
        qdigitos = 1;
    } else{
        //caso tenha mais de 1{
        aux = entrada2;
        while(aux >= 1){
            aux /= 10;
            qdigitos++;
        }
    }
    /*utilizando a quantidade de digitos, é possível comparar
    com os ultimos valores da entrada1;*/
    //atribuição dos resultados{
    if((int) entrada1 % (int) pow(10, qdigitos) == entrada2){
        vetresult[i] = 0;
    }   else{
            vetresult[i] = 1;
        }
}

for(i = 0 ; i < qentradas; i++){
    if(vetresult[i] == 0){
        printf("encaixa\n");
    }   else{
        printf("nao encaixa\n");
    }
}

return 0;
}
