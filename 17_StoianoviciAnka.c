/*Se dă o listă de poziții ale unor pioni de aceeași culoare pe o tabla de șah de 8x8 numerotată
pe axa x de la “a” la “h “ si pe axa y de la 1 la 8. Să se afle câți dintre acești pioni sunt “protejați”.
Conform regulilor de șah, un pion ‘d4’ este considerat protejat dacă există alt pion ‘c3’ sau ‘e3’ .
Exemplu
Input
b4 d4 f4 c3 e3 g5 d2
Output
6
{"b4", "d4", "f4", "c3", "e3", "g5", "d2"} -> 6 pioni protejati
{"b4", "c4", "d4", "e4", "f4", "g4", "e5"}-> 1 pion protejat*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *g, *f;
	f = fopen("pion.in", "r"/*, stdin*/);
	g = fopen("pion.txt", "w"/*, stdout*/);
	int i, j, M[10][10], k = 0;
	char P[10];
	//initializez matricea cu 0
	for ( i = 1; i <= 8; i++)
	{
		for (j = 1; j <= 8; j++)
			M[i][j] = 0;
	}
	while (strlen(P) != 1)
	{
		do
		{
			//citesc pionii 
			//ca sa pot sa opresc din citit pionii ,am zis ca se opreste in momentul in care 
			//nu se citeste ceva de lungime 3 
			fscanf(f,"%s", P);
		} while( (strlen(P) == 3 || P[0]<'a' || P[0]>'h' || P[1]<'1' || P[1]>'8') && strlen(P)!=1);
		if (strlen(P) != 1) 
			//pun 1 in matrice pe "pozitiile  citite"
			M[P[1] -'0'][P[0] - 'a' + 1]= 1;
	} 
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			//conditia ca pionul sa fie prim
			if (M[i][j] == 1 && (M[i - 1][j - 1] == 1 || M[i - 1][j + 1] == 1))
				k++;
		}
	}
	fprintf(g,"%d", k);
	fclose(f);
	fclose(g);
	system("pause");
	return 0;
}