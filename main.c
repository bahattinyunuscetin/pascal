#include <stdio.h>
#include <stdlib.h>

int main()
{
    int space, i, rows, j, number = 1; // De�i�kenleri tan�mla

    printf("Enter the number of rows: "); // Kullan�c�dan sat�r say�s�n� al
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // Bo�luklar� yazd�r (piramit �ekli i�in)
        for (space = 1; space <= rows - i; space++)
            printf("  ");

        // Pascal ��geni say�lar� yazd�r
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                number = 1; // �lk eleman her zaman 1
            else
                number = number * (i - j + 1) / j; // Pascal ��geni form�l�

            printf("%4d", number); // Say�y� yazd�r
        }
        printf("\n"); // Sat�r sonu
    }

    return 0;
}
