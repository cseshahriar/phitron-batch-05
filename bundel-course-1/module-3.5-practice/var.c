#include  <stdio.h>
/*
ype	Size (bytes)	Format Specifier
int	at least 2, usually 4	%d, %i
char	1	%c
float	4	%f
double	8	%lf
short int	2 usually	%hd
unsigned int	at least 2, usually 4	%u
long int	at least 4, usually 8	%ld, %li
long long int	at least 8	%lld, %lli
unsigned long int	at least 4	%lu
unsigned long long int	at least 8	%llu
signed char	1	%c
unsigned char	1	%c
long double	at least 10, usually 12 or 16	%Lf
*/

int main() {
    int A;
    long long int B;
    float C;
    char D;

    scanf("%d", &A);
    scanf("%lld", &B);
    scanf("%f", &C);
    scanf(" %c", &D);  // space must

    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%0.2f\n", C);
    printf("%c\n", D);


    return 0;
}