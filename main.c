#include "ft_printf.h"
#include <locale.h>
#include <limits.h>
#include <signal.h>

#include <stdio.h>
int main()
{
    int i;

//    printf("\n%d\n", MB_CUR_MAX);
    setlocale(LC_ALL, "en_US.UTF-8");
//    printf("\n%d\n", MB_CUR_MAX);
//    ft_printf("1%.4s", "42");
//    printf("\n");
//    printf("1%.4s", "42");
//    printf("\n");
//    printf("\n");
//
//    ft_printf("2%.4s", "42 is the answer");
//    printf("\n");
//    printf("2%.4s", "42 is the answer");
//    printf("\n");
//    printf("\n");
//
//    ft_printf("3%15.4s", "42");
//    printf("\n");
//    printf("3%15.4s", "42");
//    printf("\n");
//    printf("\n");
//
//    ft_printf("4%15.4s", "I am 42");
//    printf("\n");
//    printf("4%15.4s", "I am 42");
//    printf("\n");
//    printf("\n");
//
//    ft_printf("5%15.4s", "42 is the answer");
//    printf("\n");
//    printf("5%15.4s", "42 is the answer");
//    printf("\n");
//    printf("\n");
//
//    ft_printf("6%4.15s", "42");
//    printf("\n");
//    printf("6%4.15s", "42");
//    printf("\n");
//    printf("\n");
//
//    ft_printf("7%4.15s", "I am 42");
//    printf("\n");
//    printf("7%4.15s", "I am 42");
//    printf("\n");
//    printf("\n");
//
//    ft_printf("8%4.15s", "42 is the answer");
//    printf("\n");
//    printf("8%4.15s", "42 is the answer");
//    printf("\n");
//    printf("\n");
//
//    ft_printf("9%4.s", "42");
//    printf("\n");
//    printf("9%4.s", "42");
//    printf("\n");
//    printf("\n");

//    i = ft_printf("|%#.4o|", 0);
//    printf("\n");
//    ft_printf("%d\n", i);
//
//    i = printf("|%#.4o|", 0);
//    printf("\n");
//    ft_printf("%d\n", i);
//    printf("\n");
//
//    i = ft_printf("@moulitest: %#.o %#.0o", 0, 0);
//    printf("\n");
//    ft_printf("%d\n", i);
//
//    i = printf("@moulitest: %#.o %#.0o", 0, 0);
//    printf("\n");
//    ft_printf("%d\n", i);
//    printf("\n");
//
//    i = ft_printf("%#o", 0);
//    printf("\n");
//    ft_printf("%d\n", i);
//
//    i = printf("%#o", 0);
//    printf("\n");
//    ft_printf("%d\n", i);
//    printf("\n");
//
//    i = ft_printf("@moulitest: %o", 0);
//    printf("\n");
//    ft_printf("%d\n", i);
//
//    i = printf("@moulitest: %o", 0);
//    printf("\n");
//    ft_printf("%d\n", i);
//    printf("\n");
//

//    i = ft_printf("|%-13.12hhx|", -2147483648);
//    printf("\n");
//    ft_printf("%d\n", i);
//
//    i = printf("|%-13.12hhx|", -2147483648);
//    printf("\n");
//    ft_printf("%d\n", i);
//    printf("\n");
//    printf("\n");

    i = ft_printf("|%#2.C|", 129);
    printf("!%d\n", i);
    i = printf("|%#2.C|", 129);
    printf("!%d\n", i);
    printf("\n");



    i = ft_printf("|%#5.3o|", 25);
    printf("!%d\n", i);
    printf("|%#5.3o|", 25);
    i = printf("!%d\n", i);
}