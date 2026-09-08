#include<stdio.h>
#include"stud.h"
#include<string.h>
void stud_sort(sll *ptr)
{
        if(ptr==0)
        {
                printf("no records found\n");
                return;
        }
        int c=0,i,j;
        char ch1;
        sll *temp=ptr;
        while(temp)
        {
                c++;
                temp=temp->next;
        }
        sll *p1=ptr,*p2,t;
        printf("p:sort with percentage\nn:sort with name\n");
        printf("select the option\n");
        scanf(" %c",&ch1);
        if(ch1=='p')
                for(i=0;i<c-1;i++)
                {
                        p2=p1->next;
                        for(j=0;j<c-1-i;j++)
                        {
                                if(p1->percentage<p2->percentage)
                                {
                                        t.rollno=p1->rollno;
                                        strcpy(t.name,p1->name);
                                        t.percentage=p1->percentage;
                                        p1->rollno=p2->rollno;
                                        strcpy(p1->name,p2->name);
  p1->percentage=p2->percentage;
                                        p2->rollno=t.rollno;
                                        strcpy(p2->name,t.name);
                                        p2->percentage=t.percentage;
                                }
                                p2=p2->next;
                        }
                        p1=p1->next;
                }
        else if(ch1=='n')
                for(i=0;i<c-1;i++)
                {
                        p2=p1->next;
                        for(j=0;j<c-1-i;j++)
                        {
                                if(strcmp((p1->name),(p2->name))>0)
                                {
                                        t.rollno=p1->rollno;
                                        strcpy(t.name,p1->name);
                                        t.percentage=p1->percentage;
                                        p1->rollno=p2->rollno;
                                        strcpy(p1->name,p2->name);
                                        p1->percentage=p2->percentage;
                                        p2->rollno=t.rollno;
                                        strcpy(p2->name,t.name);
                                        p2->percentage=t.percentage;
                                }
                                p2=p2->next;
                        }
                        p1=p1->next;
                }
}
