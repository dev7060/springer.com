//Coded by github.com/dev7060
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
	FILE *fp = fopen("src.txt", "r");
	FILE *fp2 = fopen("des.txt", "w");
	char line[300];
	char beg[400];
	char mid[40]="";
	char fin[40]=".pdf";
	int i, j;
	while(fgets (line, 400, fp)!=NULL){
		strcpy(beg, "https://link.springer.com/content/pdf/10.1007%2F");
		strcpy(fin, ".pdf");
		strcpy(mid, "");
		for(i=49, j=0; line[i]!='\n'; i++, j++){
			mid[j]=line[i];
		}
		strcat(beg, mid);
		strcat(beg, fin);
		strcat(beg, "\n");
		fputs(beg, fp2);
	}
}
