/*Precisa funcionar*/

#include <stdio.h>

int main() {
  int N[5];
  int n;

  scanf("%d %d %d %d %d %d", &(N[0]), &(N[1]), &(N[2]), &(N[3]), &(N[4]), &n);

  for (int i=0; i<n; i++) {
  	if ((i+1) == N[0]){
  		printf("0");
  		N[0] = N[0] + N[0];
	  }
	  if ((i+1) == N[1]){
  		printf("1");
  		N[1] = N[1] + N[1];
	  }
	  if ((i+1) == N[2]){
  		printf("2");
  		N[2] = N[2] + N[2];
	  }
	  if ((i+1) == N[3]){
  		printf("3");
  		N[3] = N[3] + N[3];
	  }
	  if ((i+1) == N[4]){
  		printf("4");
  		N[4] = N[4] + N[4];
	  }
	  printf("'\n'\n");
  }

  return 0;
}
