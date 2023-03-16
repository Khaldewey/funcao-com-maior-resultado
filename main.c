#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int r(int x, int y){
    int pro;
    pro = 9*x*x + y*y;
    return pro;

}
int b(int x, int y){
int pro1;
pro1 = 2*x*x+25*y*y;
return pro1;

}
int c(int x, int y){
int pro2;
pro2 = -100*x+pow(y,3);
return pro2;


}

int main()
{
int N,i,j,v;
int cont=0;
int x,y,z;
scanf("%d",&N);
    for(v=0;v<N;v++){
    scanf("%d %d",&i , &j);
    if(i>=1 && i<=100){
            if(j>=1 && j<=100){
    x= r(i,j);
    y= b(i,j);
    z=c(i,j);
    if(x>y && x>z){
        printf("Rafael ganhou\n");
    }
    if(y>z && y>x){
        printf("Beto ganhou\n");
    }
    if(z>x && z>y){
        printf("Carlos ganhou\n");
    }
            }
            }}


    return 0;
}
