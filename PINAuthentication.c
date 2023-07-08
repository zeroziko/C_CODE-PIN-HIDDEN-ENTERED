#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char pin[4],p[]="1234",key;  //for example this is the correct code pin [1234].
    int i=0,j=4,k=30;
    printf("Please enter PIN:\t");
    p[4]='\0';
    while(1)
    {
        key=getch();

        if(i==0 && key==8)
        {
            continue;
        }
        if(key<48 || key>57 )  //this code accept only digits 0->9 NO LETTERS OR special characters
        {
             if(key==8)
              {
                printf("\b \b");
                i--;
              }
              else{continue;}
        }
        else
           {
              pin[i]=key;
              printf("+");
              if(i==3)
               {
                   pin[i+1]='\0';
                   while(strcmp(pin,p)!=0)  // IF PIN !=1234
                   {
                       i=0;
                       printf("\nIncorrect PIN entered!\nPlease enter PIN again YOU HAVE JUST %d ATTEMPTS :",j);
                       if(j==0)
                       {
                           while(k>0)
                           {
                               printf("Try again in %d seconds",k);
                               sleep(1);
                               system("cls");
                               k--;
                           }
                        break;
                       }
                while(1)
                       {
                         key=getch();

                        if(i==0 && key==8)
                           {
                             continue;
                           }
                        if(key<48 || key>57 )
                           {
                             if(key==8)
                               {
                                 printf("\b \b");
                                 i--;
                               }
                        else{continue;}
                           }
                        else
                          {
                            pin[i]=key;
                            printf("+");
                        if(i==3)
                          {
                            pin[i+1]='\0';
                            break;
                           }
                       i++;
                          }
                        }
                        j--;
                   }
                   break;
               }
              i++;
            }

    }
    printf("\n\tLOGIN.....");
    return 0;
}
