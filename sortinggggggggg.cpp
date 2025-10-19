#include<stdio.h>
#include<string.h>
#define SIZE 5
int main()
{
	char names[SIZE][10];
	int i,j;
	printf("enter %d word\n",SIZE);
	for(i=0;i<SIZE;i++)
	scanf("%s",&names[i]);
	char temp[20];
	for(i=1;i<SIZE;i++)
	{
		for(j=0;j<SIZE-i;j++)
		{
			
			if(strcmp(names[j],names[j+1])>0)
			{
				strcpy(temp,names[j]);
				strcpy(names[j],names[j+1]);
				strcpy(names[j+1],temp);
			}
		}
	}


printf("the sorted array is:\n");
for(i=0;i<SIZE;i++)
printf("%s\n",names[i]);
}
