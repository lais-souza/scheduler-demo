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
  int imprimiu;
  
  zero = N[0];
  um = N[1];
  dois = N[2];
  tres = N[3];
  quatro = N[4];
  
  for (i=0; i<n; i++) {
  	imprimiu = 0;
  	if (i+1 == N[0]){
  		printf("0");
  		N[0] = N[0] + zero;
  		imprimiu = 1;
	}
	if (i+1 == N[1]){
  		printf("1");
  		N[1] = N[1] + um;
  		imprimiu = 1;
	}
	if (i+1 == N[2]){
  		printf("2");
  		N[2] = N[2] + dois;
  		imprimiu = 1;
	}
	if (i+1 == N[3]){
  		printf("3");
  		N[3] = N[3] + tres;
  		imprimiu = 1;
	}
	if (i+1 == N[4]){
  		printf("4");
  		N[4] = N[4] + quatro;
  		imprimiu = 1;
	}
	if(imprimiu == 0){
		printf("-");
	}
	  printf("\n");
  }

  return 0;
}
