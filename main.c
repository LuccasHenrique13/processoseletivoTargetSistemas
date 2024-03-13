// 1)
// #include <stdio.h>

// int main(){
//     int INDICE = 13, SOMA = 0, K = 0;
    
//     while(K < INDICE){
//         K++;
        
//         SOMA = SOMA + K;
//     }
    
//     printf("%d", SOMA);
    
    
//     return 0;
// }


// 2)
// #include <stdio.h>

// int main() {
//     int a = 0, b = 1, auxiliar, i, n;

//     printf("Digite um número: ");
//     scanf("%d", &n);

//     printf("\nSérie de Fibonacci:\n\n");
//     printf("%d\n", b); 

//     for (i = 0; i < n; i++) {
//         auxiliar = a + b;
//         a = b;
//         b = auxiliar;
//         printf("%d\n", auxiliar);
//     }

   
//     if (auxiliar == n) {
//         printf("\n%d pertence à sequência de Fibonacci!\n", n);
//     } else {
//         printf("\n%d não pertence à sequência de Fibonacci.\n", n);
//     }

//     return 0;
// }


// 3)

// a) 1, 3, 5, 7, 9

// b) 2, 4, 8, 16, 32, 64, 128

// c) 0, 1, 4, 9, 16, 25, 36, 49

// d) 4, 16, 36, 64, 100

// e) 1, 1, 2, 3, 5, 8, 13

// f) 2,10, 12, 16, 17, 18, 19, 200


// 4)

// Ligue o primeiro interruptor e aguarde alguns minutos. Em seguida, desligue o primeiro interruptor.

// Agora, ligue o segundo interruptor e vá para a sala. Observe qual lâmpada está acesa. A lâmpada acesa corresponde ao segundo interruptor.

// Para identificar os outros interruptores:

//     A lâmpada que estiver quente corresponde ao primeiro interruptor.
//     A lâmpada que estiver fria corresponde ao terceiro interruptor.
    
// utilizando apenas uma ida ate a sala.


// 5)
// #include <stdio.h>
// #include <string.h>

// void inverter_string(char *s) {
//     int tamanho = strlen(s);
//     char *inicio = s;
//     char *fim = s + tamanho - 1;
    
//     while (inicio < fim) {
//         char tmp = *inicio;
//         *inicio = *fim;
//         *fim = tmp;
//         inicio++;
//         fim--;
//     }
// }

// int main(void) {
//         char minha_string[100];
    
//     printf("Informe a string para inverte-la:\n");
//     scanf("%s", minha_string);
    

//     inverter_string(minha_string);
//     printf("A string invertida fica: %s\n", minha_string);
//     return 0;
// }

