// write a program in c language to read a para and print the following report
// 1. Number of characters.
// 2. number of words.
// 3. number of sentences.

#include<stdio.h>
#include<conio.h>
#include<string.h>
//#include<string.h>
int main(){
	int i,char_count=0,word_count=0,sentence_count=0;
	char para[1000];
	printf("Enter the para:");
	fgets(para, 1000, stdin);
	para[strcspn(para, "\n")] = '\0';
	for(i=0;para[i]!='\0' && para[i]==' ';i++){
		if(para[i]!=' '& para[i]!='\n' && para[i]!='\t'){
			char_count++;
		}
		if(para[i]==' ' || para[i]=='.' || para[i]=='?' || para[i]=='\t' || para[i]=='\n'){
			word_count++;
		}
		if(para[i]=='.' || para[i]=='?' || para[i]=='!'){
			sentence_count++;
		}
		
	}
	printf("\n The Number of characters in the para are: %d",char_count);
	printf("\n The Number of words in the para are: %d",word_count);
	printf("\n The Number of sentences in the para are: %d",sentence_count);
	getch();
	return 0;
}
