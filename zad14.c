#include <stdio.h>

void step(float *n){
    if(*n<65536) *n=*n*2;
    else *n=*n/2;
    printf("n=%f", *n);
}

int main(){
    float n=70000;
    step(&n);
}