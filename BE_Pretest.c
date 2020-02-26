#include<stdio.h>
#include<windows.h>

int main()
{
	menu:
	system("CLS");
	int menu,lebar,tinggi,i=0,j=0,k=0,l=0;
	printf("----------------------------------------\n");
	printf("| 1. bintang bentuk segitiga siku-siku |\n");
	printf("| 2. bintang bentuk jam pasir ganjil   |\n");
	printf("| 3. keluar                            |\n");
	printf("----------------------------------------\n");
	printf("pilih : ");
	scanf("%d",&menu);
	switch(menu)
	{
		case 1:
			{
				printf("tinggi : ");
				scanf("%d",&tinggi);
				for(i=tinggi;i>0;i--)
					{	
						for(j=tinggi;j>=i;j--)
							printf("*");
						printf("\n");
					}
				system("pause");
				goto menu;
			}
		case 2:
			{	
			printf("lebar : ");
			scanf("%d",&lebar);
				if(lebar%2!=0)
				{
					for(i=lebar;i>0;i=i-2)
					{
						for(k=l;k>0;k--)
							printf(" ");	
						for(j=i;j>0;j--)
							printf("*");
						printf("\n");
						l++;
					}
					l-=2;
					for(i=lebar-2;i>0;i=i-2)
					{
						for(k=l;k>0;k--)
							printf(" ");	
						for(j=lebar;j>=i;j--)
							printf("*");
						printf("\n");
						l--;
					}
				system("pause");
				goto menu;
				}
				else
				{
					printf("Inputan harus ganjil\n");
					system("pause");
					goto menu;
				}
			}
		case 3:
			return 0;
	}
}
