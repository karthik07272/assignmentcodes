#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
int stk[max],e=-1,f,flag=0;
 

void pushing()
{if(e>=max-1)
 {printf("\n STACK OVERFLOW ");}
 else
 {if(flag==0)
  { printf("\n please create a stack ");}
 else{
 printf("\n enter the element : ");
  scanf("%d",&f);
   e++;
   stk[e]=f;}
 }
}


void create()
{//char ch='n';
 int n,i;
 if(e==-1&&flag==0)
 {
  printf("\n ENTER NO OF STACK ELEMENT : ");
   scanf("%d",&n);
 
   if(n>max)
   {printf("\n enter a valid input ");}
   else
   {flag=1;
    for(i=0;i<n;i++)
    {pushing();}
     printf("\n STACK CREATED ");
   }
 
 
 }
else
{printf("\n STACK ALDREADY EXISTS !");
 //printf("\n DO YOU WANT TO CREATE NEW STACK Y/N : ");
 //getch(ch);
  //if(ch=='Y'||ch=='y')
     //{e=-1;
      //create(); }



}
}



 

void pop()
{if(flag==0)
  { printf("\n please create a stack ");}

else
{if(e<0)
 {printf("\n STACK UNDERFLOW ");}
 else
 {printf("\n element poped is : %d ",stk[e]);
  e--;
 // if(e==-1)
  //{printf("\n STACK EMPTY ");}
  }}
   
}

void dis()
{if(flag==0)
  { printf("\n please create a stack ");}
else
{if(e==-1)
 {printf("\n STACK EMPTY ");}
 else
 {int i=e;

      for(i;i>=0;i--)
       {printf("%d-->%d\n",i,stk[i]);
        }//
 }}//
}


void main()
{int s;
while(1)
{printf("\n......menue......\n1.create\n2.push\n3.pop\n4.display\n5.exit\n\n enter a option ");
 scanf("%d",&s);
 switch(s)
{case 1:create();break;
 case 2:pushing();break;
 case 3:pop();break;
 case 4:dis();break;
 case 5:exit(0);
 default:printf("\n ENTER VALID OPTION ");
}//swich
} //while
}//main




