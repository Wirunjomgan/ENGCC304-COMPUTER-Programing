#include<stdio.h>
#include<string.h>

int main(){

    char name[50];
    printf("Input : ");
    scanf("%[^\n]%*c", &name);
    int l = strlen(name);
	printf("%s", name);
	for(int i = l; i >= 0 ; i--){
		printf("%c", name[i]);
	}

	return 0;
}

