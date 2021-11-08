#include<stdio.h>

int main(){
  int n, m, x, count=0;

  printf("Enter the number of Row and Column: \n");
  scanf("%d %d", &n, &m);

  int array[n][m];

  printf("Enter %d elements: \n", (n*m));
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d", &array[i][j]);
    }
  }
  printf("Two Dimensional array elements:\n");
   for(int k=0; k<n; k++) {
      for(int l=0;l<m;l++) {
         printf("%d ", array[k][l]);
         if(l==(m-1)){
            printf("\n");
         }
      }
   }

  printf("Enter the element to get the position: \n");
  scanf("%d", &x);

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(array[i][j] == x){

        printf("Found in (%d, %d) \n", i, j);
        count++;
      }
    }
  }

  if(count==0){
    printf("Not found \n");
  }

  return 0;
}
