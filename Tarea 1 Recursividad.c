#include <stdio.h>

int fibo(int pos,int a, int b);

int main(){

    int pos;

    printf("dame la posicion de la serie que desees \n");
    scanf("%d",&pos);

    int a,b,res;
    a=0;
    b=1;
    res = 0;

    res = fibo(pos,a,b);
    
    
   
   printf("el resultado es: %d",res);
    
}
           
int fibo(int pos,int a, int b){ 
    
    if(pos <= 1){ 
        return a+b; //fin
    }
    printf("%d ",a+b); 
    return fibo(pos-1,b,a+b); //recursiva/continua
}




