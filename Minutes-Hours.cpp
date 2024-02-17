#include<stdio.h>

int main(){
	int minutes,hours,h_2;
	printf("Enter Minutes : ");
	scanf("%d",&minutes);
	hours=minutes/60;
	h_2=minutes%60;
	printf("%d minutes = %d hour %d minutes ",minutes,hours,h_2);
    printf("\n Enter hours & minutes: ");
    scanf("%d %d",&hours,&minutes);
    h_2=hours*60+minutes;
    printf("%d hours %d minutes= %d minutes",hours,minutes,h_2);
	return 0;
}
