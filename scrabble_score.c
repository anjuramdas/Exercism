#include<stdio.h>
#include<string.h>
#include "scrabble_score.h"
#include<ctype.h>
 int score(char word[])
 {  int count=0,i;
 	for(i=0;word[i]!='\0';i++)
 	{
 		if(word[i]=='A' || word[i]=='a' || word[i]=='E'
 			|| word[i]=='e'||word[i]=='I'||word[i]=='i'
 			|| word[i]=='O'||word[i]=='o'||word[i]=='U'||word[i]=='u'
 		    || word[i]=='L'||word[i]=='l'||word[i]=='N'||word[i]=='n'||
 		    word[i]=='R'||word[i]=='r'||word[i]=='S'||word[i]=='s'||word[i]=='T'||word[i]=='t')
 			
        	count=count+1;
        else if(word[i]=='D'||word[i]=='d'||word[i]=='G'||word[i]=='g')
        	count=count+2;
        else if(word[i]=='B'||word[i]=='b'||word[i]=='C'||word[i]=='c'||word[i]=='M'||word[i]=='P'||word[i]=='m'||word[i]=='p')
        	count=count+3;
        else if(word[i]=='F'||word[i]=='f'||word[i]=='H'||word[i]=='h'||word[i]=='V'||word[i]=='v'||word[i]=='W'||word[i]=='w'||word[i]=='Y'||word[i]=='y')
        	count=count+4;
        else if(word[i]=='K'||word[i]=='k')
        	count=count+5;
        else if(word[i]=='J'||word[i]=='j'||word[i]=='X'||word[i]=='x')
        	count=count+8;
        else if(word[i]=='Q'||word[i]=='q'||word[i]=='Z'||word[i]=='z')
        	count=count+10;
    }    
    return(count);



            	
 	
 }
