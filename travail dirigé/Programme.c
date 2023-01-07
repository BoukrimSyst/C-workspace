#include <stdio.h>
#include <math.h>

    int main(){

        int num;
        int A, B, Q, d, c, rep;
        int X, Y, MA, MB, a, b;
        int N,S,O,K,R;
        int n,bin,dec,r,i;



        printf("|------------MENU DES PROGRAMMES------------|\n");
        printf("|PGCD -------------------------------------1|\n");
        printf("|PPCM -------------------------------------2|\n");
        printf("|DECIMAL TO BINARY ------------------------3|\n");
        printf("|BINARY TO DECIMAL ------------------------4|\n");
        printf("|CLOSE ------------------------------------0|\n");
        printf("|-------------------------------------------|\n");

        scanf("%d", &num);
    

        if(num == 1){
                do
                {
                    printf("donner deux entiers : ");
                    scanf("%d %d", &A, &B);
                    Q = A%B;
                    d = A;
                    c = B;
                    while (Q != 0)
                    {
                        A = B;
                        B = Q;
                        Q = A%B;
                    }
                    printf("PGCD(%d,%d)=%d \n",d,c,B);
                    
                    printf("voulez-vous continuez ? 0 // 1\n");
                    scanf("%d", &rep);

                } while (rep != 0);{
                    printf("program stopper");
                } 

                return 0; 
        }
            
        if(num == 2){
            do{

                printf("donner deux entiers :");
                scanf("%d %d", &X, &Y);

                MA = X;
                MB = Y;

                a=X;
                b=Y;

                while(MA != MB){
                    if(MA>MB){
                        MB += Y;
                    }
                    else{
                        MA += X;
                    }
                }

                printf("PPCM(%d,%d)=%d", a, b, MB);

                printf("voulez-vous continuez ? 0 // 1\n");
                scanf("%d", &rep);
            }while (rep != 0);
            {
                printf("program stopper");
            }
            return 0;
        }
        
        if(num == 3){
            do{
            printf("saisir un nombre decimal: ");
            scanf("%d",&N);
            S=0;
            K=0;
            O=N;
            while(N!=0){

                    R=N%2;
                    S+=R*pow(10,K);
                    N=N/2;
                    K= K+1;
            }
            printf("binaire (%d)= %d",O,S);
            printf("voulez-vous continuez ? 0 // 1\n");
            scanf("%d", &rep);
            }while (rep != 0);
            {
                printf("program stopper");
            }
            return 0;
        }
        
        if(num == 4){
            do{
            printf("Saisir un nombre binaire:");
            scanf("%d",&n);
            bin=n;
            dec=0;
            i=0;
            while(n!=0){

                    r=n%10;
                    dec+=r*pow(2,i);
                    n/=10;
                    i+=1;
            }
            printf("Decimal(%d)=%d\n",bin,dec);
            printf("voulez-vous continuez ? 0 // 1\n");
            scanf("%d", &rep);
            }while (rep != 0);
            {
                printf("program stopper");
            }
            return 0;
        }    

        else if (num == 0)
        {
            printf("program shut down succefully");
            return 0;
        }
        
        return 0;

}

        
    