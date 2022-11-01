#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int pass,f1=1,f2=1,f3=1,f4=1,t1,t2,t3,t4,tn=500,t,q,r,s,cancel1,cancel2,cancel3,cancel4;
char l;
struct people{
	int  passnum; int count, destination, sf1, sf2, sf3, sf4,seat, age, insur,ticketnum;
	char name[50],place[50],gender[50]; char emailid[55];
};
FILE*fp;
FILE*sp;
FILE*ap;

void reservation(struct people [],int i);
void cancel(struct people []);
void display(struct people []);
void specific(struct people []);
void particular(struct people []);
void instruction(struct people []);
void insurance(struct people []);
void time(struct people []);
int main()
{
	struct people p[50];
	int i=1,j,choice;
	fp=fopen("Display all passengers.dat","w");
	sp=fopen("Specific passengers.dat","w");
	ap=fopen("Flight.dat","w");
	p[i].count=0;
	home:
		system("cls");
	 
	   printf("\n\n\n\t\t\t********** Welcome To Marvel Airlines Service **********");
	   printf("\n\n\n\t\t\tPlease Enter your choice:");
	   printf("\n\n\t\t\t1.Reservation\n\n\t\t\t2.Cancellation\n\n\t\t\t3.Insurance applied passengers details\n\n\t\t\t4.Display all passengers details\n\n\t\t\t5.Specific passengers details\n\n\t\t\t6.Particular flight details\n\n\t\t\t7.Instruction guide for Marvel airline service\n\n\t\t\t8.Flight timings\n\n\t\t\t9.Exit\n\n\t\t\t");
	   scanf("%d",&choice);
	   system("cls");
	   
	
		if(choice==1)
		{
			reservation(p,i);
			i++;
			
			printf("\n\n\n\t\t\t Press 'H' to go home");
			l=toupper(getch());
			if(l=='H')
			{
			  goto home;
			  	
			}
			
		}
		else if(choice==2)
		{
		   cancel(p);
		   
		   printf("\n\n\n\t\t\t Press 'H' to go home");
			l=toupper(getch());
			if(l=='H')
			{
			  goto home;
			  	
			}
			
		}
			else if(choice==3)
	{
	  insurance(p);	
	  printf("\n\n\n\t\t\t Press 'H' to go home");
	  l=toupper(getch());
			if(l=='H')
			{
			  goto home;
			  	
			}	
	}
		else if(choice==4)
		{
			display(p);
			printf("\n\n\n\t\t\t Press 'H' to go home");
			l=toupper(getch());
			if(l=='H')
			{
			  goto home;
			  	
			}
			
			
		}
		else if(choice==5)
		{
			specific(p);
			printf("\n\n\n\t\t\t Press 'H' to go home");
			l=toupper(getch());
			if(l=='H')
			{
			  goto home;
			  	
			}
	}
	    else if(choice==6)
	    {
		   particular(p);
		   printf("\n\n\n\t\t\t Press 'H' to go home");
			l=toupper(getch());
			if(l=='H')
			{
			  goto home;
			  	
			}
	}
	else if(choice==7)
	{
	  instruction(p);
	  printf("\n\n\n\t\t\t Press 'H' to go home");
			l=toupper(getch());
			if(l=='H')
			{
			  goto home;
			  	
			}	
	}
	else if(choice==8)
	{
	  time(p);
	  printf("\n\n\n\t\t\t Press 'H' to go home");
			l=toupper(getch());
			if(l=='H')
			{
			  goto home;
			  	
			}		
	}

	else if(choice==9)
	{
	
	printf("\n\n\t********* Thank you for choosing this airline service *********");
			exit(0);
   }
		
		return 0;
	}
	void reservation(struct people p[],int i)
	{
		
		int k=1, n;
		
		printf("\n\n\t\t\t********Fill the required details inorder to book your tickets********");
		printf("\n\n\t\t\tName           :");
		scanf("%s",p[i].name);
		printf("\n\n\t\t\tPassport number:");
		scanf("%d",&p[i].passnum);
		printf("\n\n\t\t\tEmail id       :");
		scanf("%s",p[i].emailid);
		printf("\n\n\t\t\tGender         :");
		scanf("%s",p[i].gender);
		printf("\n\n\t\t\tAge            :");
	    scanf("%d",&p[i].age);
	    p[i].ticketnum=tn;
	    tn+=5;
	    printf("\n\n\t\t\tInsurance need(Need to pay rupees 1000)\n\n\t\t\t1.Yes\n\n\t\t\t2.No");
	    printf("\n\n\t\t\tEnter your choice:");
	    scanf("%d",&p[i].insur);
	    if(p[i].insur==1)
	    {
	    	printf("\n\t\t\t****Insurance applied****");
		}
		printf("\n\n\t\t\tEnter Destination:");
		printf("\n\n\t\t\t1.Chennai\n\n\t\t\t2.Madurai\n\n\t\t\t3.Bangalore\n\n\t\t\t4.Mumbai\n\n\t\t\t");
		scanf("%d",&p[i].destination);
		if(p[i].destination==1)
		{
			if(cancel1==1)
			{
			printf("\n\n\n\t\t\tYour Flight No:F%d00%d",p[i].destination,p[i].destination);
		 printf("\n\n\n\t\t\tSeat booking is successful!!!!!!!!!");

		 printf("F1 is %d ",f1);
		 f1++;
		 p[i].sf1=q;
		 printf("\n\n\n\t\t\tYour Flight Departure time is %d AM ",t1);
		 printf("\n\n\n\t\t\tTicket number:%d",p[i].ticketnum);
		 printf("\n\n\n\t\t\tYour seat no: A-%d\n\n\n\t\t\t**** HAPPY JOURNEY ****",p[i].sf1);
		 cancel1=0;
	
			}
			else if(f1<=50){
			
		 printf("\n\n\n\t\t\tYour Flight No:F%d00%d",p[i].destination,p[i].destination);
		 printf("\n\n\n\t\t\tSeat booking is successful!!!!!!!!!");
		 t1=6;
		  printf("F1 is %d ",f1);
		 p[i].sf1=f1;
		
		 f1++;
		 
		 printf("\n\n\n\t\t\tYour Flight Departure time is %d AM ",t1);
		 printf("\n\n\n\t\t\tTicket number:%d",p[i].ticketnum);
		 printf("\n\n\n\t\t\tYour seat no: A-%d\n\n\n\t\t\t**** HAPPY JOURNEY ****",p[i].sf1);
		 
	}
	    else{
		 system("cls");
		printf("\n\t\t\t Flight is FULL");
	    }
		}
		else if(p[i].destination==2) 
		{
				if(cancel2==1)
			{
			printf("\n\n\n\t\t\tYour Flight No:F%d00%d",p[i].destination,p[i].destination);
		 printf("\n\n\n\t\t\tSeat booking is successful!!!!!!!!!");

		 p[i].sf2=r;
		 f2++;
		 
		 printf("\n\n\n\t\t\tYour Flight Departure time is %d AM ",t1);
		 printf("\n\n\n\t\t\tTicket number:%d",p[i].ticketnum);
		 printf("\n\n\n\t\t\tYour seat no: A-%d\n\n\n\t\t\t**** HAPPY JOURNEY ****",p[i].sf2);
		 cancel2=0;
	
			}
			else if(f2<=50)
			{
			
		printf("\n\n\n\t\t\tYour Flight No: F%d00%d",p[i].destination,p[i].destination);
		p[i].sf2=f2;
		 f2++;
		 t2=9;
		 printf("\n\n\n\t\t\tYour Flight Departure time is %d AM ",t2);
		  printf("\n\n\n\t\t\tTicket number:%d",p[i].ticketnum);
	    printf("\n\n\n\t\t\tYour seat no: A-%d\n\n\n\t\t\t**** HAPPY JOURNEY ****",p[i].sf2);
		printf("\n\n\n\t\t\tSeat booking is successful!!!!!!!!!");
	
	      }
	      else{
		 system("cls");
		printf("\n\t\t\t Flight is FULL");
	}
}
		else if(p[i].destination==3) 
		{
				if(cancel3==1)
			{
			printf("\n\n\n\t\t\tYour Flight No:F%d00%d",p[i].destination,p[i].destination);
		 printf("\n\n\n\t\t\tSeat booking is successful!!!!!!!!!");

		 p[i].sf3=s;
		 f3++;
		 
		 printf("\n\n\n\t\t\tYour Flight Departure time is %d AM ",t1);
		 printf("\n\n\n\t\t\tTicket number:%d",p[i].ticketnum);
		 printf("\n\n\n\t\t\tYour seat no: A-%d\n\n\n\t\t\t**** HAPPY JOURNEY ****",p[i].sf3);
		 cancel3=0;
	
			}
			else if(f3<=50)
			
			{
			
		printf("\n\n\n\t\t\tYour Flight No: F%d00%d",p[i].destination,p[i].destination);
		p[i].sf3=f3;
		 f3++;
		 t3=12;
		 printf("\n\n\n\t\t\tYour Flight Departure time is %d PM ",t3);
		  printf("\n\n\n\t\t\tTicket number:%d",p[i].ticketnum);
	    printf("\n\n\n\t\t\tYour seat no: A-%d\n\n\n\t\t\t**** HAPPY JOURNEY ****",p[i].sf3);
		printf("\n\n\n\t\t\tSeat booking is successful!!!!!!!!!");
		
	}
	else{
		 system("cls");
		printf("\n\t\t\t Flight is FULL");
	}
	   }
	   else if(p[i].destination==4) 
		{
				if(cancel4==1)
			{
			printf("\n\n\n\t\t\tYour Flight No:F%d00%d",p[i].destination,p[i].destination);
		 printf("\n\n\n\t\t\tSeat booking is successful!!!!!!!!!");

		 p[i].sf4=t;
		 f4++;
		 
		 printf("\n\n\n\t\t\tYour Flight Departure time is %d AM ",t1);
		 printf("\n\n\n\t\t\tTicket number:%d",p[i].ticketnum);
		 printf("\n\n\n\t\t\tYour seat no: A-%d\n\n\n\t\t\t**** HAPPY JOURNEY ****",p[i].sf4);
		 cancel4=0;
	
			}
			else if(f4<=50)
			{
			 printf("\n\n\n\t\t\tYour Flight No: F%d00%d",p[i].destination,p[i].destination);
		     p[i].sf4=f4;
		     f4++;
		     t4=3;
		     printf("\n\n\n\t\t\tYour Flight Departure time is %d PM ",t4);
		     printf("\n\n\n\t\t\tTicket number:%d",p[i].ticketnum);
	         printf("\n\n\n\t\t\tYour seat no: A-%d\n\n\n\t\t\t**** HAPPY JOURNEY ****",p[i].sf4);
		     printf("\n\n\n\t\t\tSeat booking is successful!!!!!!!!!");
		     p[i].sf1++;
	}
	else{
		 system("cls");
		printf("\n\t\t\t Flight is FULL");
	}
		
	}
	p[k].count++;
	
		
	}
	void display(struct people p[])
	{  
	 
	   int k=1,j,i=1,time;
	   char m[10];
	    system("cls");
	    
	    
	    fprintf(fp,"\n\tDISPLAYING ALL THE PASSENGERS DETAILS:\n");
	     for(i=1;i<=p[k].count;i++)
	     {
	     	if(p[i].ticketnum==pass)
			 {
	     		continue;
			 }
			 else
			 {
			 	
			 	if(p[i].destination==1)
		        {
		        	strcpy(p[i].place,"Chennai");
		        	p[i].seat=p[i].sf1;
		        	time=t1;
					strcpy(m,"AM");
				}
				else if(p[i].destination==2)
		        {
		        	strcpy(p[i].place,"Madurai");
		        	p[i].seat=p[i].sf2;
		        	time=t2;
		        	strcpy(m,"AM");
				}
				else if(p[i].destination==3)
		        {
		        	strcpy(p[i].place,"Bangalore");
		        	p[i].seat=p[i].sf3;
		        	time=t3;
		        	strcpy(m,"PM");
				}
				else if(p[i].destination==4)
		        {
		        	strcpy(p[i].place,"Mumbai");
		        	p[i].seat=p[i].sf4;
		        	time=t4;
		        	strcpy(m,"PM");
				}
			 	
			 	fprintf(fp,"\n\t\t\t\t***PASSENGER %d DETAILS***",i);
		        fprintf(fp,"\n\n\t\t\t\tName           :%s",p[i].name);
	  	        fprintf(fp,"\n\t\t\t\tPassport number:%d",p[i].passnum);
		        fprintf(fp,"\n\t\t\t\tEmail id       :%s",p[i].emailid);
		        fprintf(fp,"\n\t\t\t\tGender         :%s",p[i].gender);
		        if(p[i].insur==1)
		        {
				
		        fprintf(fp,"\n\t\t\t\tInsurance      :Applied");
		    }
		        else
		        {
		           fprintf(fp,"\n\t\t\t\tInsurance      :Nil");	
				}
		        fprintf(fp,"\n\t\t\t\tAge            :%d",p[i].age);
		        fprintf(fp,"\n\t\t\t\tDestination    :%s",p[i].place);
		        fprintf(fp,"\n\t\t\t\tFlight no      :F%d00%d",p[i].destination,p[i].destination);
		        fprintf(fp,"\n\t\t\t\tDeparture time :%d %s",time,m);
		        fprintf(fp,"\n\t\t\t\tSeat no        :A-%d",p[i].seat);
		        fprintf(fp,"\n\t\t\t\tticket number   :A-%d",p[i].ticketnum);
		        
		        fprintf(fp,"\n\t\t\t\t************\n");
			 }
		 }
		     printf("\n\n\t\t\tOpen Display all passengers.dat file");

}
	void cancel(struct people p[])
	{
	 int k=1, i=1;
	  system("cls");
	 printf("\nEnter the ticket number to cancel the ticket: ");
	 scanf("%d",&pass);
	 while(1)
	 {
	  if(pass==p[k].ticketnum)
	  {
	  	printf("\n\nYour booking is cancelled");
	  	
	  	if(p[k].destination==1)
	  	{
	  		f1--;
	  		
	  		q=p[k].sf1;
	  		cancel1=1;
	  		break;
		  }
		  else if(p[k].destination==2)
		  {
		  	f2--;
		  	
		  	r=p[k].sf2;
		  	cancel2=1;
		  	break;
		  }
		   else if(p[k].destination==3)
		  {
		  	f3--;
		  	
		  	s=p[k].sf3;
		  	cancel3=1;
		  	break;
		  }
		   else if(p[k].destination==4)
		  {
		  	f4--;
		  	t=p[k].sf4;
		  	cancel4=1;
		  	break;
		  }
	  }
	   k++;
     }

   }
	void specific(struct people p[])
	{
	  
		int num,k=1,i, time;
		char m[10];
	 
		 system("cls");
		specific:
	    
		printf("\nEnter ticket number to see the details:");
		scanf("%d",&num);
		for(i=1;i<=51;i++)
		{
		
		  if(num==pass)
		{
			printf("\n\n\t\t\tOpen specific passengers.dat file");
		   fprintf(sp,"\nYour booking ticket  is cancelled");
		   break;	
		}
		else if(num==p[i].ticketnum)
		{
		 printf("\n\n\t\t\tOpen specific passengers.dat file");
		 fprintf(sp,"\n\t\t\t\t***PASSENGER %d DETAILS***",i);	
		 fprintf(sp,"\n\n\t\t\t\tName           :%s",p[i].name);
	  	 fprintf(sp,"\n\t\t\t\tPassport number:%d",p[i].passnum);
		 fprintf(sp,"\n\t\t\t\tEmail id       :%s",p[i].emailid);
		 fprintf(sp,"\n\t\t\t\tGender         :%s",p[i].gender);
		 fprintf(sp,"\n\t\t\t\tAge            :%d",p[i].age);
		 fprintf(sp,"\n\t\t\t\tFlight no      :F%d00%d",p[i].destination,p[i].destination);
		     if(p[i].destination==1)
		        {
		        	strcpy(p[i].place,"Chennai");
		        	p[i].seat=p[i].sf1;
		        	time=t1;
					strcpy(m,"AM");
				}
				else if(p[i].destination==2)
		        {
		        	strcpy(p[i].place,"Madurai");
		        	p[i].seat=p[i].sf2;
		        	time=t2;
					strcpy(m,"AM");
				}
				else if(p[i].destination==3)
		        {
		        	strcpy(p[i].place,"Bangalore");
		        	p[i].seat=p[i].sf3;
		        	time=t3;
					strcpy(m,"PM");
				}
				else if(p[i].destination==4)
		        {
		        	strcpy(p[i].place,"Mumbai");
		        	p[i].seat=p[i].sf4;
		        	time=t4;
					strcpy(m,"PM");
				}
		if(p[i].insur==1)
		        {
				
		        fprintf(sp,"\n\t\t\t\tInsurance      :Applied");
		    }
		        else
		        {
		           fprintf(sp,"\n\t\t\t\tInsurance      :Nil");	
				}
		 fprintf(sp,"\n\t\t\t\tDeparture time :%d %s",time,m);		
		 fprintf(sp,"\n\t\t\t\tDestination    :%s",p[i].place);
		 fprintf(sp,"\n\t\t\t\tSeat no        :A-%d",i);
		 fprintf(sp,"\n\t\t\t\ticket number   :A-%d",p[i].ticketnum);
		 fprintf(sp,"\n\t\t\t\t************\n");
		 break;	
		}
		else if(i==16)
		{
			printf("\nPlease enter valid passport number");
			goto specific;
		}
		
		
      	}
}
void particular(struct people p[])
{
	int i,choice;
	system("cls");
	printf("\n\n\t\tWhich place you need to see passengers list?");
	printf("\n\n\t\t1.Chennai\n\n\t\t2.Madurai\n\n\t\t3.Bangalore\n\n\t\t4.Mumbai\n\n\t\t");
	scanf("%d",&choice);
	printf("\n\n\tOpen flight.dat file");
	if(choice==1)
	{
		fprintf(ap,"\nCHENNAI PASSENGERS LIST\nDEPARTURE TIME 6 AM\n");
	  for(i=1;i<=50;i++)
	  {
	  	if(p[i].destination==1)
	  	{
	  	  if(p[i].ticketnum==pass)
	  	  {
	  	  	continue;
			}
			else{
			
	  	  fprintf(ap,"\n\t\t\t\t***PASSENGER %d DETAILS***",i);	
		 fprintf(ap,"\n\n\t\t\t\tName           :%s",p[i].name);
	  	 fprintf(ap,"\n\t\t\t\tPassport number:%d",p[i].passnum);
		 fprintf(ap,"\n\t\t\t\tEmail id       :%s",p[i].emailid);
		 fprintf(ap,"\n\t\t\t\tGender         :%s",p[i].gender);
		 fprintf(ap,"\n\t\t\t\tAge            :%d",p[i].age);
		 fprintf(ap,"\n\t\t\t\tFlight no      :F%d00%d",p[i].destination,p[i].destination); 
		 fprintf(ap,"\n\t\t\t\tTicket number   :A-%d",p[i].ticketnum);
		 p[i].seat=p[i].sf1;
    	 fprintf(ap,"\n\t\t\t\tSeat no        :A-%d",p[i].seat);
	}
		}
	 } 
   }
   else if(choice==2)
    {
	   fprintf(ap,"\nMADURAI PASSENGERS LIST DEPARTURE TIME 9 AM\n");
	   for(i=1;i<=50;i++)
	   {
	   
		  if(p[i].destination==2)
	  	{
	  		  if(p[i].ticketnum==pass)
	  	  {
	  	  	continue;
			}
			else{
		
	  	  fprintf(ap,"\n\t\t\t\t***PASSENGER %d DETAILS***",i);	
		 fprintf(ap,"\n\n\t\t\t\tName           :%s",p[i].name);
	  	 fprintf(ap,"\n\t\t\t\tPassport number:%d",p[i].passnum);
		 fprintf(ap,"\n\t\t\t\tEmail id       :%s",p[i].emailid);
		 fprintf(ap,"\n\t\t\t\tGender         :%s",p[i].gender);
		 fprintf(ap,"\n\t\t\t\tAge            :%d",p[i].age);
		 fprintf(ap,"\n\t\t\t\tFlight no      :F%d00%d",p[i].destination,p[i].destination);
		 fprintf(ap,"\n\t\t\t\tTicket number   :A-%d",p[i].ticketnum);
		p[i].seat=p[i].sf2;
    	 fprintf(ap,"\n\t\t\t\tSeat no        :A-%d",p[i].seat);
	}
		  }
	}
  }
       else if(choice==3)
       {
       	fprintf(ap,"\nBANGALORE PASSENGERS LIST DEPARTURE TIME 12 PM\n");
	    for(i=1;i<=50;i++)
		 {
		   if(p[i].destination==3)
	  	{
	  		  if(p[i].ticketnum==pass)
	  	  {
	  	  	continue;
			}
		else{
		
	  	  fprintf(ap,"\n\t\t\t\t***PASSENGER %d DETAILS***",i);	
		 fprintf(ap,"\n\n\t\t\t\tName           :%s",p[i].name);
	  	 fprintf(ap,"\n\t\t\t\tPassport number:%d",p[i].passnum);
		 fprintf(ap,"\n\t\t\t\tEmail id       :%s",p[i].emailid);
		 fprintf(ap,"\n\t\t\t\tGender         :%s",p[i].gender);
		 fprintf(ap,"\n\t\t\t\tAge            :%d",p[i].age);
		 fprintf(ap,"\n\t\t\t\tFlight no      :F%d00%d",p[i].destination,p[i].destination);
		 fprintf(ap,"\n\t\t\t\ticket number   :A-%d",p[i].ticketnum);
		 p[i].seat=p[i].sf3;
    	 fprintf(ap,"\n\t\t\t\tSeat no        :A-%d",p[i].seat);
	}
		  }
	}
}
       else if(choice==4)
       {
	     fprintf(ap,"\nMUMBAI PASSENGERS LIST DEPARTURE TIME 3 PM\n");
		 for(i=1;i<=50;i++)
		 {
		    if(p[i].destination==4)
	  	{
	  		  if(p[i].ticketnum==pass)
	  	  {
	  	  	continue;
			}
			else{
				
			
	  	  fprintf(ap,"\n\t\t\t\t***PASSENGER %d DETAILS***",i);	
		 fprintf(ap,"\n\n\t\t\t\tName           :%s",p[i].name);
	  	 fprintf(ap,"\n\t\t\t\tPassport number:%d",p[i].passnum);
		 fprintf(ap,"\n\t\t\t\t Email id        :%s",p[i].emailid);
		 fprintf(ap,"\n\t\t\t\t Gender          :%s",p[i].gender);
		 fprintf(ap,"\n\t\t\t\t Age             :%d",p[i].age);
		 fprintf(ap,"\n\t\t\t\t Flight no       :F%d00%d",p[i].destination,p[i].destination);
		 fprintf(ap,"\n\t\t\t\ticket number   :A-%d",p[i].ticketnum);
		 p[i].seat=p[i].sf4;
    	 fprintf(ap,"\n\t\t\t\tSeat no          :A-%d",p[i].seat);
	}
		  }
		  }	
	}
}
void instruction(struct people p[])
{
 int choice; char c;
  ins:
  system("cls");
  printf("\n\n\t*******INSTRUCTION  GUIDE FOR MARVEL AIRLINE SERVICE*******");
  printf("\n\n\t\tPlease enter the choice:");
  printf("\n\n\t\t1.Reservation guide\n\n\t\t2.Cancelling tickets guide\n\n\t\t3.Specific details guide\n\n\t\t4.Displaying details guide\n\n\t\t5.Particular flight details guide\n\n\t\t6.Exit\n\n\t\t");
  scanf("%d",&choice);
  if(choice==1)
  {
  	system("cls");
  	printf("\n\tRESERVATION GUIDE:");
  	printf("\n\n\t1.Enter your name\n\t2.Enter your passport number\n\t3.Enter your emailid\n\t4.Specify your gender\n\t5.Mention your age\n\t6.Choose the destination((1)Chennai, (2)Madurai, (3)Bangalore, (4)Mumbai)\n\t7.Then your seat is booked after that it gives your seat number and flight number\n\t");
  	printf("\n\n\n\tIf you want to go back enter 'Y' or press any key");
  	c=toupper(getch());
  	if(c=='Y')
  	{
  		goto ins;
	  }
  	
  }
  else if(choice==2)
  {
  	system("cls");
  	printf("\n\tCANCELLING TICKETS GUIDE:");
  	printf("\n\n\t*To cancel your tickets you just need to type your passport number and then your tickets is automatically cancelled*");
  	printf("\n\n\n\tIf you want to go back enter 'Y' or press any key");
  		c=toupper(getch());
  	if(c=='Y')
  	{
  		goto ins;
	  }
  
  }
  else if(choice==3)
  {
  	system("cls");
  	printf("\n\tSPECIFIC DETAILS GUIDE:");
  	printf("\n\n\t*To know the particular person details, first you need to enter that person/'s passport number and then it displays the particular person/'s booking details*");
  	printf("\n\n\n\tIf you want to go back enter 'Y' or press any key");
  		c=toupper(getch());
  	if(c=='Y')
  	{
  		goto ins;
	  }
  	
  }
  else if(choice==4)
  {
  	system("cls");
  	printf("\n\tDISPLAYING ALL PASSENGERS DETAILS:");
  	printf("\n\n\t*If you want to know all the passengers booking details, you just choose option 3 in the main menu* ");
  	printf("\n\n\n\tIf you want to go back enter 'Y' or press any key");
  		c=toupper(getch());
  	if(c=='Y')
  	{
  		goto ins;
	  }
  	
  }
  else if(choice==5)
  {
  	system("cls");
  	printf("\n\tPARTICULAR FLIGHT DETAILS:");
  	printf("\n\n\t*To know the particular flight passengers details,  you need to select the place and then it displays the passengers details who are all booking tickets to that place* ");
  	printf("\n\n\n\tIf you want to go back enter 'Y' or press any key");
  		c=toupper(getch());
  	if(c=='Y')
  	{
  		goto ins;
	  }
  	
  }
  else if(choice==6) 
  {
      main();
  }
  	
}
void time(struct people p[])
{
	printf("\n\n\t\tFLIGHT TIMINGS:");
	printf("\n\n\n\t\tDEPARTURE  TIME  FOR  THE  FLIGHT  NUMBER  F1001  FROM  COIMBATORE  TO  CHENNAI  IS 6AM");
	printf("\n\n\n\t\tDEPARTURE  TIME  FOR  THE  FLIGHT  NUMBER  F2002  FROM  COIMBATORE  TO  MADURAI  IS 9AM");
	printf("\n\n\n\t\tDEPARTURE  TIME  FOR  THE  FLIGHT  NUMBER  F3003  FROM  COIMBATORE  TO  BANGALORE  IS 12PM");
	printf("\n\n\n\t\tDEPARTURE  TIME  FOR  THE  FLIGHT  NUMBER  F4004  FROM  COIMBATORE  TO  MUMBAI  IS 3PM");
}
void insurance(struct people p[])
{
	int k=1,j,i=1,time;
	   char m[10];
	    
	    printf("\n\tINSURANCE APPLIED PASSENGERS DETAILS:\n");
	     for(i=1;i<=50;i++)
	     {
	     	if(p[i].ticketnum==pass)
			 {
	     		continue;
			 }
			 else if(p[i].insur==1)
			 {
			 	if(p[i].destination==1)
		        {
		        	strcpy(p[i].place,"Chennai");
		        	p[i].seat=p[i].sf1;
		        	time=t1;
					strcpy(m,"AM");
				}
				else if(p[i].destination==2)
		        {
		        	strcpy(p[i].place,"Madurai");
		        	p[i].seat=p[i].sf2;
		        	time=t2;
		        	strcpy(m,"AM");
				}
				else if(p[i].destination==3)
		        {
		        	strcpy(p[i].place,"Bangalore");
		        	p[i].seat=p[i].sf3;
		        	time=t3;
		        	strcpy(m,"PM");
				}
				else if(p[i].destination==4)
		        {
		        	strcpy(p[i].place,"Mumbai");
		        	p[i].seat=p[i].sf4;
		        	time=t4;
		        	strcpy(m,"PM");
				}
			
			 	printf("\n\t\t\t\t***PASSENGER %d DETAILS***",i);
		        printf("\n\n\t\t\t\tName           :%s",p[i].name);
	  	        printf("\n\t\t\t\tPassport number:%d",p[i].passnum);
		        printf("\n\t\t\t\tEmail id       :%s",p[i].emailid);
		        printf("\n\t\t\t\tGender         :%s",p[i].gender);
		        printf("\n\t\t\t\tAge            :%d",p[i].age);
		        printf("\n\t\t\t\tDestination      :%s",p[i].place);
		        printf("\n\t\t\t\tFlight no        :F%d00%d",p[i].destination,p[i].destination);
		        printf("\n\t\t\t\tDeparture time   :%d %s",time,m);
		        printf("\n\t\t\t\tSeat no          :A-%d",p[i].seat);
		        printf("\n\t\t\t\t************\n");
			 }
		 }
		 
}
