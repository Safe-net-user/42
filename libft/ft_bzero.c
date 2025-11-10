#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*p;

	p = (char *) s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return;
}

int main(void)
{
    char str1[20] = "Bonjour le C !";
    char str2[20] = "Bonjour le C !";

    printf("Avant bzero :\n");
    printf("str1 = \"%s\"\n", str1);

    // Test 1 : mise à zéro d'une partie du buffer
    ft_bzero(str1 + 8, 3); // on met à zéro 3 octets à partir du 8e
    printf("\nAprès bzero partiel (8,3):\n");
    for (int i = 0; i < 20; i++)
        printf("%02X ", (unsigned char)str1[i]);
    printf("\n");

    // Test 2 : tout mettre à zéro
    ft_bzero(str2, sizeof(str2));
    printf("\nAprès bzero total :\n");
    for (int i = 0; i < 20; i++)
        printf("%02X ", (unsigned char)str2[i]);
    printf("\n");

    // Vérif rapide : tous les octets sont à 0 ?
    int all_zero = 1;
    for (int i = 0; i < 20; i++)
        if (str2[i] != 0)
            all_zero = 0;

    if (all_zero)
        printf("\n✅ Test réussi : toute la mémoire est bien mise à zéro.\n");
    else
        printf("\n❌ Test échoué : des octets non nuls trouvés.\n");

    return 0;
}
