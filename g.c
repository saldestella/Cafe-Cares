#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
char a[300];
int i;
gets(a);
strcat(a,"!!!!!!!!!!");
for(i=0;a[i]!='\0';i++)
{

a[i]=toupper(a[i]);
if(tolower(a[i])=='a')a[i]='4';
else if(tolower(a[i])=='b')a[i]='8';
else if(tolower(a[i])=='e')a[i]='3';
else if(tolower(a[i])=='i')a[i]='1';
else if(tolower(a[i])=='o')a[i]='0';
else if(tolower(a[i])=='S')a[i]='5';
}
printf("%s",a);

}