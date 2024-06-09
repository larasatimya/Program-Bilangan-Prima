#include <stdio.h>

void BilanganPrima() {
    printf("\n---------------------------------------------------\n");
    printf("Saya baru saja mengeksekusi program bilangan prima!\n");
    printf("---------------------------------------------------\n\n\n");
}
void checkBilanganPrima(int parameter) {
    int n, i, flag=0;
    n=parameter;
      for (i = 2; i <= n / 2; ++i) {
        // Jika bukan prima
        if (n%i == 0) {
            flag = 1;
            break;
        }
    }
     if (n == 1) {
        printf("1 bukan bilangan prima maupun komposit.");
    }
    else {
        if (flag == 0) {
            printf("%d adalah bilangan prima.",n);
        }
        else {
            printf("%d bukan bilangan prima.",n);
        }
    }
}


int main() {
    int angka;
    char repetition = 'y';
    int counter;

    printf("PERTAMA: ");
    BilanganPrima();

    printf("KEDUA: ");
    while(repetition == 'y'){
    printf("\nMasukkan suatu angka: ");
    scanf("%d",&angka);
    checkBilanganPrima(angka);


    printf("\ndo you want to repeat?\n");
    printf("answer (y/n): ");
    scanf(" %c",&repetition);
    counter++;
}

    return 0;
}
