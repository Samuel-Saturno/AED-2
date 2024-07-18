/*
OBS: n são as chamadas recursivas
+ Chamada Recursiva: 2ns => n * 2 =
+ Retorno de chamada recursiva: 1ns => n * 1 =
+ Atribuição e Soma: 0,5 =>
+ Subtração: 0,3 =>
*/

#include <stdio.h>

//int count = 0;

int fib3(int n) {
    //count++;
    //int x1, x2;
    if(n < 3){
        return 1;
    } else{
        //x1 = fib3(n - 1);
        //x2 = fib3(n - 2);
        return fib3(n - 1) + fib3(n-2) + fib3(n-3);
    }
}

/*
int main(){
    fib3(12);
    printf("%d", count);
    return 0;
}
*/
