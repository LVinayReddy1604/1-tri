#include<stdio.h>

#include<string.h>


int main(){
	char para[1000];
	int i, j, count_char=0, count_word=0, count_sentence=0;
	
	printf("Enter a para: ");
	fgets(para, 1000, stdin);
	
	// remove the newline character from the end of the para
	para[strcspn(para, "\n")] = '\0';
	
	// count the number of characters in the para
	for(i=0; para[i]!='\0'; i++)
	{
	count_char++;
	}
	
	// count the number of words in the para
	for(i=0; para[i]!='\0'; i++){
		if(para[i]!=' '& para[i]!='\n' && para[i]!='\t'){
			count_word++;
			while(para[i]!=' '& para[i]!='\n' && para[i]!='\t' && para[i]!='\0')
			{
				i++;
			}
		}
	}
	
	// count the number of sentences in the para
	for(i=0; para[i]!='\0'; i++){
		if(para[i]=='.' || para[i]==';' || para[i]=='?'){
			count_sentence++;
		}
	}
	
	// print the report
	printf("Number of characters: %d\n", count_char);
	printf("Number of words: %d\n", count_word);
	printf("Number of sentences: %d\n", count_sentence);
	return 0;
}
