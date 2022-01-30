#include < stdio.h >

	int main()
{
 
 
    float a, b, c, d, e;
    float total, average, new_avrg;

	scanf("%f %f %f %f", & a, & b, & c, & d);

	total = 2 + 3 + 4 + 1;
	average = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / total;
	printf("Media: %.1f\n", average);
	if (average >= 7.0) {
		printf("Aluno aprovado.\n");
	} else if (average < 5.0) {
		printf("Aluno reprovado.\n");
	} else if (average >= 5.0 && average <= 6.9) {
		printf("Aluno em exame.\n");
		scanf("%f",& e);
		printf("Nota do exame: %.1f\n", e);
		new_avrg = (average + e) / 2;
		if (new_avrg >= 5.0) {
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", new_avrg);
		} else if (new_avrg <= 4.9) {
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", new_avrg);
		}
	}


	return 0;
}