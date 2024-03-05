#include<stdio.h>
#include<string.h>


int swap(char str[]);

int main()
{
	int n=0;
    scanf("%d",&n);
     char str1[100]={0};
     char str2[100]={0};
     
     
     while(n>0)
     {
     	if (n>0)
     	{
     		scanf("%s %s",str1,str2);
     		int len =strlen(str1);
     		int i,j;
     		if(strlen(str1)!=strlen(str2));
     		{
     			printf("No\n");
     		
            } }else
     		{
     			swap(str1);
     			swap(str2);
			} 
		}
			 if(strcmp(str1,str2) == 0)
			 {
			 	printf("Yes\n");
			 }
			 else 
			 {
			 	printf("No\n");
			 	
			 }
			 n--;
    }
     	return 0;
 }
    
int swap(char str[])
{
	int a,b;
	for(a=0;a<strlen(str);a++)
	{
		for(b=0;b<strlen(str)-a-1;b++)
		{
			if(str[b]>str[b+1])
			{
				char c;
				c=str[b];
				str[b]=str[b+1];
				str[b+1]=c;
			} 
		}
	}
	return 0;
}
