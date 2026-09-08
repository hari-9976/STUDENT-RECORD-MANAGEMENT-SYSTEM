#include<stdio.h>
#include"stud.h"
sll *headptr=0;
int main()
{
stud_read(&headptr);
char op,ch;
    while(1)
    {
        printf("******** STUDENT RECORD MENU *********\n");
        printf("a:add new record \nd:delete a record\ns:show the list\nm:modify a records\nv:save records\ne:exit\nt:sort the list\nl:delete all the records\nr:reverse the list\n");
       printf("enter your choice:");

       scanf(" %c",&op);
       switch(op)
       {
           case 'a':stud_add(&headptr);break;
           case 's':stud_show(headptr);break;
           case 'd':stud_del(&headptr);break;
           case 'v':stud_save(headptr);break;
           case 'l':delete_all(&headptr);break;
           case 'r':stud_rev(&headptr);break;
           case 'm':stud_mod(headptr);break;
           case 't':stud_sort(headptr);break;
           case 'e':printf("s:save and exit\np:exit without saving\n");printf("enter the choice\n");scanf(" %c",&ch);
           if(ch=='s')
           {
               stud_save(headptr);
               return 1;
           }
           else if(ch=='p')
           exit(0);

}
}
}
