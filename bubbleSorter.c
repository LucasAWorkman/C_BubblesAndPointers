#include <stdio.h>
#define MAX 9

void printValues(int* values) {
    for (int i = 0; i < 9; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}
void swap(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}
void sort(int* values) {
  int i, j;
    for (i = 0; i < MAX - 1; i++) {
        for (j = 0; j < MAX - 1 - i; j++) {
            if (values[j] > values[j + 1]) {
                swap(&values[j], &values[j + 1]);
                printValues(values); 
            }
        }
    }
}
int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);


  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);
  return(0);
}
