#include "includes/lst.h"

struct test {
	int a;
	float b;
	unsigned c;
};

void printtab(t_lsttab tab)
{
	size_t i;
	struct test a;

	i = 0;
	while (i < tab.e_size)
	{
		a = *(struct test*)(tab.tab + i);
		printf(tab.tab[i])
	}
}

void printtest(t_list test)
{
	struct test a;
	while (test){
		a = *LSTE(test, struct test);
		printf("%d, %f, %u\n", a.a, a.b, a.c);
		test = LSTN(test);
	}  
}

int main(void)
{
	struct test	a;
	t_list		test;

	a = (struct test){-12, 12.5f, 78};
	test = NULL;
	lst_push(&test, LSTP(a));
	lst_push(&test, LSTP(((struct test){-65, 45.5f, 46})));
	a = (struct test){-70, 4556.5f, 85};
	lst_apnd(&test, LSTP(a));
	printtest(test);

	printf("\nsubstitute test[1]\n");
	a = (struct test){-895, 25.265, 41};
	lst_setn(test, 1, LSTP(a));
	printtest(test);

	printf("\ndeletion test[1]\n");
	lst_deli(&test, 0);
	printtest(test);

	printf("\ndeletion test[1]\n");
	t_lsttab tab = lst_totab(test, sizeof(struct test));
	
	while ();
	printtest(test);
	
	return 0;
}
