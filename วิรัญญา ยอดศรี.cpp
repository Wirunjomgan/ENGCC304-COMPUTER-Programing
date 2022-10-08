#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
	char name[100];
	int day;
	int month;
	int year;
}data[100];


int readfile(char *filename){
	char no[5];
	char name[30];
	char bird[20];

	int len = 0;

	FILE *fp;
	fp = fopen(filename, "r");
	if(fp == NULL){
		printf("File not found!");
		return (1);
	}else{
		while(fscanf(fp, "%s %s %s", no, data[len].name, bird) != EOF){
			//printf("%s %s %s\n", no, data[len].name, bird);
			if (len > 0){
				char * token = strtok(bird, "-");
				data[len].year = atoi(token);
				token = strtok(NULL, "-");
				data[len].month = atoi(token);
				token = strtok(NULL, "-");
				data[len].day = atoi(token);
				token = strtok(NULL, "-");
				//printf("%d %d %d\n", data[len].day, data[len].month, data[len].year);
			}
			len++;
		}
		return len;
	}
	return 0;
}

void cal_age(int day,int month, int year, int size){
	int max;
	char name_max[20];
	int min;
	char name_min[20];
	int i;
	int to_months = year * 12 + month;
	int real_year;
	int real_month;
	for(i = 1; i < size; i++){
		int months = data[i].year * 12 + data[i].month;
		int age_months = to_months - months;
		if (age_months > max){
			max = age_months;
			strcpy(name_max, data[i].name);
		}
		if (age_months < min){
			min = age_months;
			strcpy(name_min, data[i].name);
		}
		real_year = age_months / 12;
		real_month = age_months % 12;
		printf("%s %d Years, %d Months\n", data[i].name, real_year, real_month);
	}
	printf("Max : %s [%d Years, %d Months]\n", name_max, max / 12, max % 12);
	printf("Min : %s [%d Years, %d Months]\n", name_min, min / 12, min % 12);
}

int main(){
	int size = readfile("a.txt");
	cal_age(21, 6, 2561-543, size);
	return 0;
}

