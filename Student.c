#include <stdio.h>
#define SIZE 5
char perevod(unsigned int a);//перевод int в char
void zaglav(char * simbol); //перевод в заглавную
void stroch(char *simbol); //перевод в сторочную
void swap(int * a, int * b); //меняет значение
int sum(int *  a , int * b);//сложение
int sub (int *  a , int * b);//вычитание
double mult (double * a , double * b);//умножение
float dev(float * a , float * b);//деление
void mass(void);//набрать и вывести массив
int main(void)
{
    char c = perevod('B');
    printf(" %c \n", c);

    char f = 'f';
    zaglav(&f);
    printf(" %c \n", f);

    char a = 'A';
    stroch(&a);
    printf(" %c \n", a);

    int d = 10;
    int b = 20;
    swap(&b, &d);
    printf("%d %d\n", b, d);

    int h = 5;
    int l = 6;
    sum(&h, &l);
    int rezul = h + l;
    printf("%d\n", rezul);

    int hh = 10;
    int ll = 5;
    sub(&hh, &ll);
    int rezuul = hh - ll;
    printf("%d\n", rezuul);

    double hhh = 10.6;
    double lll = 5.6;
    mult(&hhh, &lll);
    double rezuuul = hhh * lll;
    printf("%lf\n", rezuuul);

    float hhhh = 34.0;
    float llll = 2.0;
    dev(&hhhh, &llll);
    float rez = hhhh / llll;
    printf("%f", rez);


    mass();




    
}

char perevod(unsigned int a)
{
    char c = 0;
    
    
     if('a' <= a && a <= 'z')
    {
        c = a - 32;
    }
    else if('A' <= a && a <= 'Z')
    {
        c = a + 32;
    }

    return c;
}
void zaglav(char * simbol)
{
    if('a' <= * simbol && * simbol <= 'z')
    {
        *simbol -= 32;
        
    }
}
void stroch(char *simbol)
{
    if('A' <= * simbol && * simbol <= 'Z')
    {
        *simbol += 32;
        
    }
}
void swap(int * a, int * b)
{
    int g = 0;
    g = *a;
    *a = *b;
    *b = g;
}
int sum(int *  a , int * b)
{
    int rezul = *a + *b;
}
int sub (int *  a , int * b)
{
    int rezuul = *a - *b;
}
double mult (double * a , double * b)
{
    double rezuuul = *a * *b;
}
float dev(float * a , float * b)
{
    float rez = *a / *b;
}
void mass(void)
{
    int ar[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d \n", &ar[i]);
    }
        for(int i = 0; i < SIZE; i++)
        {
            printf("%d\n", ar[i]);
        }

}

