/*
OBS: n são as chamadas recursivas
+ Chamada Recursiva: 2ns => 979 * 2 =
+ Retorno de chamada recursiva: 1ns => 326 * 1 = 
+ Atribuição e Soma: 0,5 => 0ns e 326
+ Subtração: 0,3 => 
*/

#include <stdio.h>

int count = 0;

int fib3(int n) {
    
    if(n < 3){
        //count++;
        return 1;
    } else{
        //count++;
        return fib3(n - 1) + fib3(n-2) + fib3(n-3);
    }
}

int main(){
    fib3(12);
    printf("%d", count);
    return 0;
}
