///*Fie un bancomat ce conține 8 tipuri de bancnote: 1, 5, 10, 20, 50, 100, 200 și 500. Numărul de
//bancnote de fiecare tip este dat ca fiind primele opt valori de intrare. În decursul unei zile vin N clienți
//(0 < N ≤ 1 000) să extragă bani din bancomat. Să se afișeze dacă se pot oferi exact sumele de bani
//pentru toți clienții. Sumele cerute V (V ≤ 10 000 000) de clienți vor fi date ca un vector de N numere
//naturale. Complexitate maximă O(N × V)*/
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE *f,*g;
//	f = fopen("atm.in", "r"/*,stdin*/);
//	g = fopen("atm.out", "w"/*,stdout*/);
//	int B1, B5, B10, B20, B50, B100,B200, B500, nr, i, suma, ok;
//	for(i=1;i<=1;i++)
//	{
//		fscanf(f,"%d %d %d %d %d %d %d %d", &B1,&B5,&B10,&B20,&B50,&B100,&B200,&B500);
//		fscanf(f,"%d", &nr);
//		ok = 0;
//		for (int j = 1; j <= nr; j++)
//		{
//			fscanf(f,"%d", &suma);
//			//verica daca suma se poate compune din nr de bancnote pe care le avem
//			//suma trece prin fiecare if iar daca indeplineste conditia scade din nr de bancnote,
//			//cate bancnote avem nevoie
//			if (B500 - suma / 500 >= 0)
//			{
//				B500 = B500 - suma / 500;
//				suma = suma - suma / 500 * 500;
//			}
//			else
//			{
//				suma = suma - B500 * 500;
//				B500 = 0;
//			}
//
//			if (B200 - suma / 200 >= 0)
//			{
//				B200 = B200 - suma / 200;
//				suma = suma - suma / 200 * 200;
//			}
//			else
//			{
//				suma = suma - B200 * 200;
//				B200 = 0;
//			}
//
//			if (B100 - suma / 100 >= 0)
//			{
//				B100 = B100 - suma / 100;
//				suma = suma - suma / 100 * 100;
//			}
//			else
//			{
//				suma = suma - B100 * 100;
//				B100 = 0;
//			}
//
//			if (B50 - suma / 50 >= 0)
//			{
//				B50 = B50 - suma / 50;
//				suma = suma - suma / 50 * 50;
//			}
//			else
//			{
//				suma = suma - B50 * 50;
//				B50 = 0;
//			}
//
//			if (B20 - suma / 20 >= 0)
//			{
//				B20 = B20 - suma / 20;
//				suma = suma - suma / 20 * 20;
//			}
//			else
//			{
//				suma = suma - B20 * 20;
//				B20 = 0;
//			}
//
//			if (B10 - suma / 10 >= 0)
//			{
//				B10 = B10 - suma / 10;
//				suma = suma - suma / 10 * 10;
//			}
//			else
//			{
//				suma = suma - B10 * 10;
//				B10 = 0;
//			}
//			if (B5 - suma / 5 >= 0)
//			{
//				B5 = B5 - suma / 5;
//				suma = suma - suma / 5 * 5;
//			}
//			else
//			{
//				suma = suma - B5 * 5;
//				B5 = 0;
//			}
//			B1 = B1 - suma;
//		}
//		if (B1 < 0)
//			fprintf(g,"NU\n");
//		else
//			fprintf(g,"DA\n");
//	}
//	fclose(f);
//	fclose(g);
//	system("pause");
//	return 0;
//}
