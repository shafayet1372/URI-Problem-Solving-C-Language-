#include < stdio.h >
	#include < string.h >

	int main()
{
    char c1[] = "vertebrado", c11[22] = "ave", c12[] = "mamifero";
    char c111[] = "carnivoro", c112[] = "onivoro", c124[] = "herbivoro";
    char a1[] = "aguia", a2[] = "pomba", a3[] = "homem", a4[] = "vaca";
    char c2[] = "invertebrado", c21[] = "inseto", c22[] = "anelideo";
    char c211[] = "hematofago", a5[] = "pulga", a6[] = "lagarta";
    char a7[] = "sanguessuga", a8[] = "minhoca";
    char a[22], b[22], c[22];
    int re;
	scanf("%s\n", a);
	if (0 == strcmp(c1, a)) {
		scanf("%s\n", b);
		if (0 == strcmp(c11, b)) {

			scanf("%s", c);
			if (0 == strcmp(c111, c)) {
				printf("aguia\n");
			} else if (0 == strcmp(c112, c)) {
				printf("pomba\n");
			}
		} else if (0 == strcmp(c12, b)) {
			scanf("%s", c);
			if (0 == strcmp(c112, c)) {
				printf("homem\n");
			} else if (0 == strcmp(c124, c)) {
				printf("vaca\n");
			}
		}
	} else if (0 == strcmp(c2, a)) {
		scanf("%s\n", b);
		if (0 == strcmp(c21, b)) {

			scanf("%s", c);
			if (0 == strcmp(c211, c)) {
				printf("pulga\n");
			} else if (0 == strcmp(c124, c)) {
				printf("lagarta\n");
			}
		} else if (0 == strcmp(c22, b)) {
			scanf("%s", c);
			if (0 == strcmp(c211, c)) {
				printf("sanguessuga\n");
			} else if (0 == strcmp(c112, c)) {
				printf("minhoca\n");
			}
		}

	}


	return 0;
}