/*Se dă un string de cifre S (1<=S<=100), să se insereze un număr minim de paranteze rotunde
deschise și închise astfel încât stringul să fie corect parantezat și fiecare cifră C să fie în exact C
perechi de paranteze.
cor.in cor.out
021 0((2)1)
312 (((3))1(2))
4 ((((4))))*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *f,*g;
	f = fopen("cor.in", "r" /*,stdin*/);
	g = fopen("cor.out", "w"/* ,stdout*/);
	char *S, *S2;
	int i, C, k = 0, nr = 0;  //nr e contorul pentru noul sir
							  //k contor pentru numarul parantezelor
			S = (char*)malloc(sizeof(char));   //alocare de memorie siruri
			S2 = (char*)malloc(sizeof(char));
			//citesc sirul de numere
			fscanf(f, "%s", S);
			for (i = 0; i < strlen(S); i++)
			{
				C = *(S + i) - '0';   //obtin cifra din sir
				//in momentul in care nr de paranteze este mai mic decat cifra si cat timp 
				//valorile lor sunt diferite crestem nr de paranteze si adaugam in noul sir
				//paranteza deschisa urmand sa crestem pozitia sirului si sa punem NULL pe 
				//pozitia respectiva
				if (k < C)
				{
					while (C != k)
					{              
						k++;          
						*(S2 + nr) = '(';
						nr++;           
						*(S2 + nr) = NULL;
					}
				}
				// in cazul in care k este mai mare decat nr.meu trebuie sa inchid paranteza
				if (k > C)
				{
					while (k != C)
					{
						k--;
						*(S2 + nr) = ')';
						nr++;
						*(S2 + nr) = NULL;
					}
				}
				if (C == k) {
					*(S2 + nr) = *(S + i);
					nr++;
					*(S2 + nr) = NULL;
				}
				//se repeta pana se ajunge la NULL-ul sirului initial
			}
			//partea care pune restul de paranteze
			if (k != 0)
			{
				while (k>0)
				{
					k--;
					*(S2 + nr) = ')';
					nr++;
					*(S2 + nr) = NULL;
				}
			}
	//am pus mereu pe urmatoarea pozitie un NULL ca sa nu ma trezesc ce caractere "ciudate"
	fprintf(g,"%s\n", S2);
	fclose(f);
	fclose(g);
	system("pause");
	return 0;
}

