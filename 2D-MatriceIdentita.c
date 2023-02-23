#include <stdio.h>

/* Programma che legge un valore n e crea e visualizza la matrice identita' di dimensione n. */
int main() {
      int n;            // dimensione matrice

      /* leggi dimensione e crea matrice */
      printf("Qual e' la dimensione della tua matrice?");
      scanf("%d", &n);
      int matrice[n][n];

      /* riempi i valori della matrice */
      for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                  if(i==j)
                        matrice[i][j] = 1;
                  else
                        matrice[i][j] = 0;

      /* visalizza la matrice */
      printf("\nEcco la tua matrice identita' di dimensione %d:\n\n", n);
      for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++)
                  printf("%d ", matrice[i][j]);
            printf("\n");
            system("PAUSE");
      }
}
