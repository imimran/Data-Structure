#include <stdio.h>

int main()
{
	int X, Y, Z, lar;

	scanf("%d %d %d", &X, &Y, &Z); // user input

	lar = X;
	if(X < Y || X < Z){ //condition
		if(Y < Z){
			lar = Z;
		}else{
			lar = Y;
		}
	}

	printf("%d eh o maior\n", lar); //print here to output

	return 0;
}
