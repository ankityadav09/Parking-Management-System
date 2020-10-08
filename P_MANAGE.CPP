
		       //Parking Management System//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

   int  MENU();
   void BUS();
   void BYKE();
   void CAR();
   void CYCLE();

   void SHOWDETAILS();

   int nor=0,nob=0,noc=0,noa=0,AMOUNT=0,count=0;

void main()
{
 while(1)
 {
  clrscr();
  switch(MENU())
  {
   case 1:
   BUS();
   break;

   case 2:
   BYKE();
   break;

   case 3:
   CAR();
   break;

   case 5:
   SHOWDETAILS();
   break;

   case 4:
   CYCLE();
   break;

   case 6:
   exit(0);

   default :
   exit(0);
   printf(" \n invalid choice");
  }
  getch();
 }
}

int MENU()
{
 int ch;
 printf("\n--------------------------------------------------------------------------------\n");
 printf(" W E L C O M E TO D I G I T A L  P A R K I N G  S Y S T E M  M A N E G E M E N T ");
 printf("\n--------------------------------------------------------------------------------\n");


 printf("\                  S E L E C T  T Y P E OF V E H I C L E");
 printf("\n                =======================================");
 printf("\n");
 printf(" \n         [1] BUS  @ Rs.100");
 printf(" \n         [2] BYKE @ Rs.20");
 printf(" \n         [3] CAR  @ Rs.50");
 printf(" \n         [4] CYCLE @ Rs.0");
 printf(" \n         [5] SHOW STATUS");
 printf(" \n         [6] EXIT \n");
 printf("\n YOU HAVE SELECTED = ");

 scanf(" %d",&ch);
 return(ch);
}


void SHOWDETAILS()
{
 printf(" \n Number of BUS             %d ", nob);
 printf(" \n Number of BYKE            %d ",noc);
 printf(" \n Number of CARS            %d ",nor);
 printf(" \n Number of CYCLE           %d ",noa);
 printf(" \n Total number of vehicle   %d ",count);
 printf(" \n Total collection          %d Rupees ",AMOUNT);
}

void CAR()
{
 printf(" \n Space is sucessfully alloted");
 nor++;
 AMOUNT=AMOUNT+50;
 count++;
}

void BUS()
{
 printf(" \n Space is sucessfully alloted");
 nob++;
 AMOUNT=AMOUNT+100;
 count++;
}

void BYKE()
{
 printf(" \n Space is sucessfully alloted");
 noc++;
 AMOUNT=AMOUNT+20;
 count++;
}

void CYCLE()
{
 printf("\n Space sucessfully alloted");
 noa++;
 AMOUNT=AMOUNT+0;
 count++;
}

