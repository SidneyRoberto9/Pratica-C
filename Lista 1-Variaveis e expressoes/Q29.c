#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, m;

    printf("Digite 4 notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    m = (n1 + n2 + n3 + n4)/4;

    printf("Sua media aritmetica e' %.2f", m);

    return 0;
}
