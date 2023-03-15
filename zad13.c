#include <stdio.h>

void introduction_variables(int* v, int* w, int* x, int* y, int* z){
    char c, check_cykle;
    int check_getchar=0;

    do
    {
        printf("wpisz nazwe wprowadzanej zmiennej (v, w, x, y, z)\n");
        if(check_getchar!=0) getchar();
        check_getchar=1;
        scanf("%c", &c);
        if (c=='v'){
            printf("wprowadz wartosc zmiennej v=");
            scanf("%d", v);
        }
        if (c=='w'){
            printf("wprowadz wartosc zmiennej w=");
            scanf("%d", w);
        }
        if (c=='x'){
            printf("wprowadz wartosc zmiennej x=");
            scanf("%d", x);
        }
        if (c=='y'){
            printf("wprowadz wartosc zmiennej y=");
            scanf("%d", y);
        }
        if (c=='z'){
            printf("wprowadz wartosc zmiennej z=");
            scanf("%d", z);
        }
        printf("chcesz wprowadzić jeszcze jedna zmienn? (Y/N)");
        getchar();
        scanf("%c", &check_cykle);
    } while (check_cykle != 'N');
}

int main(){
    int v, w, x, y, z;
    introduction_variables(&v, &w, &x, &y, &z);
    printf("\nv= %d\tw= %d\tx= %d\ty= %d\tz= %d\t\n", v, w, x, y, z);
    return 0;
}