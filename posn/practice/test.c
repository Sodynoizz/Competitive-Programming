#include <stdio.h>
#include<string.h>
int main()
{
	int n,a=0;
	char arr[100],arrn[100];
	gets(arr);
	n=strlen(arr);
	//printf("%s\n",arr);
	for(int i=0;i <n;i++)
	{
		if(arr[i+1] == 112 && arr[i] != ' ')
		{
			//printf(" skip ");
		if(arr[i]==97||arr[i]==101||arr[i]==105||arr[i]==111||arr[i]==117)
		{
			i+=2;
		}
		}
		//printf("%d ",i);
		arrn[a]=arr[i];
		a++;
	}
		printf("%s",arrn);
}