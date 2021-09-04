//clock_making//code_by_arghya
#include<stdio.h>
#include<unistd.h>
int main()
{
	int h=0,m=0,s=0;
	printf("\nEnter current time: ");
	scanf("%d %d %d",&h,&m,&s);
	start:
	system("cls");
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				system("cls");
				printf("\n\n\n\n\n\t\t\t\t%d : %d : %d",h,m,s);
				if(h<12)
				{
					printf(" AM");
				}
				else
				{
					printf(" PM");
				}
				sleep(1);
			}
			s=0;
		}
		m=0;
	}
	h=0;
	return 0;
}
