/*Precisa funcionar*/

#include <stdio.h>

int main() {
  int N[5];
  int n;
  int i;

  scanf("%d %d %d %d %d %d", &(N[0]), &(N[1]), &(N[2]), &(N[3]), &(N[4]), &n);
  int zero;
  int um;
  int dois;
  int tres;
  int quatro;
  
  zero = N[0];
  um = N[1];
  dois = N[2];
  tres = N[3];
  quatro = N[4];
  
  for (i=0; i<n; i++) {
  	//printf("valor de i: %d\n",i);
  	if (i+1 == N[0]){
  		printf("0");
  		N[0] = N[0] + zero;
  		//printf("valor de 0: %d\n",N[0]);
	  }
	  if (i+1 == N[1]){
  		printf("1");
  		N[1] = N[1] + um;
  		//printf("valor de 1: %d\n",N[1]);
	  }
	  if (i+1 == N[2]){
  		printf("2");
  		N[2] = N[2] + dois;
  		//printf("valor de 2: %d\n",N[2]);
	  }
	  if (i+1 == N[3]){
  		printf("3");
  		N[3] = N[3] + tres;
  		//printf("valor de 3: %d\n",N[3]);
	  }
	  if (i+1 == N[4]){
  		printf("4");
  		N[4] = N[4] + quatro;
  		//printf("valor de 4: %d\n",N[4]);
	  }
	  printf("\n");
  }

  return 0;
}
