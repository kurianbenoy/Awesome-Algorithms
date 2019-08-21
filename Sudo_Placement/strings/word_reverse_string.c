#include<stdio.h>

void reverseWords(char *text)
{
	int length = strlen(text);
	reverseString(text, 0, length-1, 0);
	int read=0, write=0;
	while(read<length)
	{
		if(text[read]!=' ')
		{
			int wordStart = read;
			for(;read<length && text[read]!=' ';read++);
			reverseString(text, wordStart, read-1, write);
			write+= read-wordStart;
			text[write++]=' ';
			}
		read++;
	}
	text[write-1]='\0';
}

void reverseString(char *text, int start, int end, int destination)
{
    // reverse the string and copy it to destination
    int length=end-start+1;
    int i;
    memcpy(&text[destination], &text[start], length*sizeof(char));
    for (i=0; i<length/2; i++)
    {
        swap(&text[destination+i], &text[destination+length-1-i]);
    }

