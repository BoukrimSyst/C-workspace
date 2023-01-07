#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[]) {
	int a, b, u, d, n;
	
	printf("saisir deux nombres de deux chiffres :");
	scanf("%d %d", &a, &b);
	
	if(a>=10 && a<=99 && b>=10 && b<=99){
		//printf("good");J
		u = a%10;
		d = a/10;
		printf("%d%d%d",d,b,u);	
	}
	else{
		printf("\n les deux nombres doivent contenir deux chiffres !");
	}	
}
