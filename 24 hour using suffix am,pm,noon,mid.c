/*24 hour of day with suitable suffix like am,pm,noon,mid */
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=24;i++)
	{
		if(i>4)
		 {
		 printf("hour=day=%d\n",i);
		 continue;
	}
		else if(i>11)
		  printf("hour=noon=%d\n",i);
		else if(i>16)
		  printf("hour=evening=%d\n",i);
		else if(i>19 )
		  printf("hour=night=%d\n",i);
	}
}
