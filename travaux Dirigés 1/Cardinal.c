#include <stdio.h> 
void main(){ 
    int a,b,c,d,n,x=1; 

    printf("Saisir quatre entiers:"); 
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a!=b){ 
        x+=1; 
    } 

    if((a!=c) && (b!=c)){    
        x+=1; 
    }
    
    if((a!=d) && (b!=d) && (c!=d)){   
        x+=1; 
    }

    printf("Le cardinal est %d",x); 
} 
