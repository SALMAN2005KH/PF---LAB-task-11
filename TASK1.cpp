#include<stdio.h>
#include<string.h>
int main(){
//	pointer
	FILE *fp;
	
//	file creation (file Opening)
	fp = fopen("demo.txt","r");
//	printf("File create Successfully\n");
	
//	writing operation in  a file
	if (fp == NULL ) printf("Error 404"); 
	else printf("File create Successfully\n");
	
	int vowelcount=0, consonantcount=0;
	char c;
	
		
	while ((c = fgetc(fp))!=EOF){
		if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c =='I' || c=='O' || c=='U'){
			vowelcount++;
			
		} else {
			consonantcount++;
			
		}
	}
	printf("vowel : %d\n", vowelcount);
	printf("consonant : %d\n", consonantcount);


	fclose(fp);
	return 0;
}
