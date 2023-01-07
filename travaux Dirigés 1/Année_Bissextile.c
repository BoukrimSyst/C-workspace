#include <stdio.h>

	int main(int argc, char const *argv[]){
		int annee;
		
		printf("entrez une annee");
		scanf("%d", &annee);
		
		if(annee%4==0){
			if(annee%100==0){
				if(annee%400==0){
					printf("%d est une annee bisextille", annee);
				}else 
					printf("%d n'est pas une annee bisextille", annee);
			}else
				printf("%d est une annee bisextille", annee);
				
		}else
			printf("%d n'est pas une annee bisextille", annee);
		
		return 0;
	}
