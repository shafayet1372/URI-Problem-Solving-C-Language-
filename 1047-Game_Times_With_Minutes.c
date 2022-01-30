#include < stdio.h >

	int main()
{
    
    int sh, sm, eh, em;
    int total_hour, total_minute, duration_h, duration_m;
	scanf("%d %d %d %d", & sh, & sm, & eh, & em);

	duration_h = eh - sh;

	if (duration_h < 0) {
		duration_h = 24 + (eh - sh);
	}
	duration_m = em - sm;
	if (duration_m < 0) {

		duration_m = 60 + (em - sm);
		duration_h--;
	}
	if (duration_h < 0) {
		duration_h = 24 + duration_h;
	}
	if (sh == eh && sm == em) {
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	} else {

		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_h, duration_m);
	}
	return 0;

}
