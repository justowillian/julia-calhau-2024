#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
   long long int x, y;
    printf("Digite dois números inteiros:");
    scanf("%lld %lld", &x, &y);
    printf("O número %lld multiplicado por 4 bilhões é %lld\n", x, x * 8000000000);
    printf("O número %lld multiplicado por 4 bilhões é %lld\n", y, y * 8000000000);
    return 0;
}
