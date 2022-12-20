#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
    char *p,j;
    int i,x,count=0;
    char ip[40];
    system("cls");
    printf("\nEnter a IP address : ");
    fgets(ip,40,stdin);
    p=strtok(ip,".");
    //printf("\n%s\n",p);
    while(p!=NULL)
    {
      x=atoi(p);
      //printf("\n\n%d",x);
      if(x>=0 && x<=255)
      {
      count++;
     //printf("\n%d and %s",count,p);
      }
      p=strtok(NULL,".");
    }

    if(count==4)
    printf("\nValid IP address");
    else
    printf("\nInvalid IP address");
    return 0;

}
