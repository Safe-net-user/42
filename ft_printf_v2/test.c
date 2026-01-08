/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:41:27 by gd-hallu          #+#    #+#             */
/*   Updated: 2026/01/07 12:19:18 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

/* ================= TEST %i ================= */
#define TEST_I(fmt, val) \
do { \
    int r1; \
    int r2; \
    printf("FORMAT : \"%s\" | VALUE : %d\n", fmt, val); \
    printf("printf    : \""); \
    r1 = printf(fmt, val); \
    printf("\" (ret = %d)\n", r1); \
    printf("ft_printf : \""); \
    r2 = ft_printf(fmt, val); \
    printf("\" (ret = %d)\n", r2); \
    printf("--------------------------------------------------\n"); \
} while (0)

/* ================= TEST %% ================= */
#define TEST_P(fmt) \
do { \
    int r1; \
    int r2; \
    printf("FORMAT : \"%s\"\n", fmt); \
    printf("printf    : \""); \
    r1 = printf(fmt); \
    printf("\" (ret = %d)\n", r1); \
    printf("ft_printf : \""); \
    r2 = ft_printf(fmt); \
    printf("\" (ret = %d)\n", r2); \
    printf("--------------------------------------------------\n"); \
} while (0)

int main(void)
{
    /* ================= %i ================= */
    TEST_I("%i", 42);
    TEST_I("%i", -42);
    TEST_I("%i", 0);
    TEST_I("%8.3i", -8473);

    TEST_I("%+8.5i", 42);
    TEST_I("%-8.5i", 42);
    TEST_I("% .0i", 0);
    TEST_I("%.0i", 0);
    TEST_I("%05i", 42);
    TEST_I("%-05i", 42);

    /* ================= %% ================= */
    TEST_P("%%");
    TEST_P("%%%");
    TEST_P("%%%%");

    TEST_P("%5%");
    TEST_P("%-5%");
    TEST_P("%05%");
    TEST_P("%010%");

    TEST_P("%+%");
    TEST_P("% %");
    TEST_P("%#%");

    TEST_P("%.0%");
    TEST_P("%.5%");
    TEST_P("%5.5%");
    TEST_P("%-0005%");
	//ft_printf("%020.5u", 0x1234abcdu);

		ft_printf("111%s333%s555%saaa%sccc", "222", "444", "666", "bbb");

return 0;

}

