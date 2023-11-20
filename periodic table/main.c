#include<stdio.h>

int main(){

    int a;
    int c;
    int b[10];

    printf("Welcome to Top 5 periodic Elements\n\n");

    printf("Press 1 to Continue\n");
    printf("Press 0 to Exit\n");

    scanf("%d",&a);
    if(a==1){
        printf(" 1> Hydrogen\n 2> Helium\n 3> lithium\n 4> Beryllium\n 5> Boron\n\n\n ");
        printf("Enter any Element number\n");


    scanf("%d",&b[0]);
    if(b[0]==1){
        printf(" Name:Hydrogen\n Atomic Number:1\n Atomic Mass:1.008 u \n Category:Non-metal\n\n");
    }


    scanf("%d",&b[1]);
    if(b[1]==2){
        printf(" Name: Helium \n Atomic Number:2\n Atomic Mass:4.0026 u \n Category:Noble Gas\n\n");
    }


    scanf("%d",&b[2]);
    if(b[2]==3){
        printf(" Name: Lithium \n Atomic Number:3\n Atomic Mass:6.94 u \n Category:Alkali Metal\n\n");

    }
    scanf("%d",&b[3]);
    if(b[3]==4){
        printf(" Name: Beryllium \n Atomic Number:4\n Atomic Mass:9.0122 u\n Category:Alkaline Earth Metal\n\n");

    }
    scanf("%d",&b[4]);
    if(b[4]==5){
        printf(" Name: Boron \n Atomic Number:5\n Atomic Mass:10.81 u\n Category:Metalloid\n\n");

    }
        printf("Thank you for using\n\n\n");


    }

     else if(a==0){
        printf("You have exited\n");
    }



return 0;
}
