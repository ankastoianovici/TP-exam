/*Se citește un număr natural N<=109. Să se transforme N din baza 10 în baza 2 reținând cifrele
într-un vector, apoi să se afișeze vectorul.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, k = 0, i, v[8] = { 0 };
	FILE *f,*g;
	f = fopen("in.txt", "r"/*, stdin*/);
	g = fopen("out.txt", "w"/*, stdout*/);
	fscanf(f,"%d", &n);
	//transform in binar si salvez intr-un vector
	while (n != 0)
	{
		v[k++] = n % 2;
		n = n / 2;
	}
	for (i = 7; i >= 0; i--)// afisez vectorul invers
		fprintf(g,"%d ", v[i]);
	fprintf(g,"\n");
	fclose(f);
	fclose(g);
	system("pause");
	return 0;
}
