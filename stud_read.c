#include<stdio.h>
#include<stdlib.h>
#include"stud.h"
void stud_read(sll **ptr)
{

        char ch;
        FILE *fp=fopen("student_dat","r");
        if(fp==0)
{
                printf("no file present\n");
return;
}
        else
                ch=fgetc(fp);
        if(ch==-1)
        {
                printf("no data found\n");
              return;
        }
        else
        {
                sll *new,*last;
                FILE *fp;
                fp=fopen("student_dat","r");
                while(1)
                {
                        new=malloc(sizeof(sll));
                        if(fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->percentage)!=3)
                        {
                                free(new);
                                break;
                        }
                        new->next=0;
                        if(*ptr==0)
 *ptr=new;
                        else
                        {
                                last=*ptr;
                                while(last->next)
                                        last=last->next;
                                last->next=new;
                        }
                }
        }
  }
