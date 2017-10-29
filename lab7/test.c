#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "menu.h"
void quit(int argc, char *argv[]);
void ver(int argc, char *argv[]);
void mode(int argc, char *argv[]);
void directory(int argc, char *argv[]);
void date(int argc, char *argv[]);
void attrib(int argc, char *argv[]);
void quit(int argc, char *argv[])
{
exit(0);
}
void ver(int argc, char *argv[])
{
 printf("Microsoft Windows 10.0.14393\n");
}
void mode(int argc, char *argv[])
{
printf("This is the mode\n");
}
void directory(int argc, char *argv[])
{
char buf[80];
getcwd(buf,sizeof(buf));
printf("current working directory: %s\n",buf);    
}
void date(int argc, char *argv[])
{
time_t timep;
struct tm *p;
time(&timep);
p=gmtime(&timep);
printf("%d\\",1900+p->tm_year);
printf("%d\\",1+p->tm_mon);
printf("%d\n",p->tm_mday);
}
void attrib(int argc, char *argv[])
{
printf("This is the attrib!\n");
}
int main(int argc,char* argv[])
{
MenuConfig("ver","XXX1.0(Menu program v7.0 inside)",NULL);
MenuConfig("quit","Quit the program",quit);
MenuConfig("mode","Show the mode",mode);
MenuConfig("directory","Show the work path",directory);
MenuConfig("date","Show the date",date);
MenuConfig("attrib","Show the attrib",attrib);

ExecuteMenu();
return 0;
}
