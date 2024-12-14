#include <stdio.h>
#include <math.h>

// Function Declarations
int numtest();
void Exponent(int a ,int b);
void divide();
float squareroot(float x);

int main() {
    int number = 5000;
    int exponant = pow(2,5);
    printf("Number: %d\n", number - numtest());
    Exponent(2,10);
    printf("%f",squareroot(59));
    return 0;
}

int numtest() {
    return 500; 
}

void Exponent(int a ,int b){
    int num = 1;
    printf("------Exponent %d------\n",a);
    for (int i=1;i<=b;i++){
        int exponant = pow(a,i);
        printf("%d ^ %d = %d\n",a,i,exponant);
    }
}

void divide(int divide){
    for (int i = 2; i <= divide; i++)
    {
        printf("%d\n",i);
        for (int j = 1; j <= 12; j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
        
    }
    
}

float squareroot(float x){
    float res = sqrt(x);
    return res;
}
