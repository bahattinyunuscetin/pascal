#include <stdio.h>
#include <stdlib.h>

int main()
{
    int space, i, rows, j, number = 1; // Deðiþkenleri tanýmla

    printf("Enter the number of rows: "); // Kullanýcýdan satýr sayýsýný al
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // Boþluklarý yazdýr (piramit þekli için)
        for (space = 1; space <= rows - i; space++)
            printf("  ");

        // Pascal üçgeni sayýlarý yazdýr
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                number = 1; // Ýlk eleman her zaman 1
            else
                number = number * (i - j + 1) / j; // Pascal üçgeni formülü

            printf("%4d", number); // Sayýyý yazdýr
        }
        printf("\n"); // Satýr sonu
    }

    return 0;
}
