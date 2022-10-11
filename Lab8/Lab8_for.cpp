#include<stdio.h>

int main(){

    int i;
    int num[50],count = 0;

	printf(" Input Array size : ");
    scanf("%d",&count);
    
    for ( i = 0; i < count; i++)
    {
     printf("Array [%d] : ",i);
		scanf("%d",&num[i]);
}
	for(int i = i-1; i>=0 ; i--){
		count = 0;
		for(int j = i-1; j>=0 ; j--)
		{ 
			if(num[i]==num[j]&&i!=j)
			{ 
    }
			count++;
			if(count==i){ 
				printf("%d ",num[i]);
				break;
			}
		}
	}

	return 0;
}
