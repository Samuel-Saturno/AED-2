# Exercício

considere os seguintes tempos para o algoritmo abaixo:

+ Chamada Recursiva: 2n => n * 2
+ Retorno de chamada recursiva: 1n => n * 1
+ Atribuição e Soma: 0.5 =>
+ Subtração: 0.3 =>

Algoritmo:

'''cpp
    int fib3() {
      if(n < 3){
      return 1;
      } else{
        return fib3(n - 1) + fib3(n-2) + fib3(n-3;
      }
    }
