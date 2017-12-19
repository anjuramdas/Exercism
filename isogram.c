#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include "isogram.h"
bool is_isogram(char word[])
{
    long int i,j;
    char word1[100];
    if(strcmp(word," "))
    {
    	for(i=0;word[i]!='\0';i++)
    	{
    		word1[i]=tolower(word[i]);

    	}
    }	
    
	for(i=0;word1[i]!='\0';i++)
		for(j=i+1;word1[j]!='\0';j++)
			if((word1[i]==word1[j]) && isspace(word1[i])==false && word1[i]!='-')
				return false;

	return true;		

}
