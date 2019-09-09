#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include <stdlib.h>


int n=0;
struct record

	{
	char name[35];
	int age;
	char phone[15];
	char email[50];
  }

  employee[50];


  void add(){
  		int i = 0;
  		char count[1000];
  		int j=0;

		char c[1000];
  		 FILE *fptr;
  		 fptr=fopen("C:\\add.txt","a");

  		 if(fptr==NULL){
      		printf("Error!");
      		exit(1);
  		 }


	  printf("\n\n\nEnter the Nick name of %d th employee: ",n+1);
	  //fprintf(fptr,"\n\n\nEnter the Nick name of %d th employee: ",n+1);

	 //getch();
	  scanf("%s",employee[n].name);
	  fprintf(fptr,"\nNumber%d Person\n___________________\n___________________\nName:----->%s \n", n+1,employee[n].name);


	  printf("Enter the age of %d th employee: ",n+1);
	  //fprintf(fptr,"Enter the age of %d th employee: ",n+1);
	  scanf("%d",&employee[n].age);
	  fprintf(fptr,"\nAge:-----> %d \n",employee[n].age);

	  printf("Enter the phone number of %d th employee: ",n+1);
	  //fprintf(fptr,"Enter the phone number of %d th employee: ",n+1);
	  scanf("%s",employee[n].phone);
	  fprintf(fptr,"\nPhone:-----> %d \n",employee[n].phone);

	 printf("Enter the e-mail of %d th employee: ",n+1);
	 //fprintf(fptr,"Enter the Email of %d th employee: ",n+1);
	  scanf("%s",employee[n].email);
	  fprintf(fptr,"\nE-mail:-----> %s \n___________________\n___________________\n",employee[n].phone);



	  n++;

	   fclose(fptr);



	   getch();
	  }





	void number(){
	char ph[35];
	char name[35];
	char mail[100];
	int age;
	int found=0;
	int i = 0;
	if (n==0) printf("no data");


    //seach by phn nmbr

	else{
		printf("Enter the phone number of the person you want to search:");
		scanf("%s",ph);
	//gets(ph);
		for (i=0; i<n; i++){
			if (strcmp(ph,employee[i].phone)==0){
				found=1;
				printf("\nHere is The person Name: %s \nAge: %d\nPhone Number: %s\nE-mail %s",employee[i].name,employee[i].age,employee[i].phone,employee[i].email);
				break;
			}
		}
		if (found==0)
			printf("not found");
	}
        getch();
}






 void name(){

	char ph[35];
	char name[35];
	char mail[100];
	int age;
	int found=0;
	int i = 0;
	if (n==0) printf("no data");

    //search by name

	else{
	    printf("\n\nHy buddy,Enter the name of the person you want to search:");
	    scanf("%s",name);
    //gets (name);
        for (i=0; i<n; i++){
			if (strcmp(name,employee[i].name)==0){
				found=1;
				printf("\nHere is The person Name: %s \nAge: %d\nPhone Number: %s\nE-mail %s",employee[i].name,employee[i].age,employee[i].phone,employee[i].email);
				break;
			}
		}
		if (found==0)
			printf("not found");
	}

		getch();
    }


	 void email(){

	char ph[35];
	char name[35];
	char mail[100];
	int age;
	int found=0;
	int i = 0;
	if (n==0) printf("no data");

    //search by e mail

   else{
        printf("enter the mail of the person you want to search:");
	    scanf("%s",mail);

    //gets (mail);
        for (i=0; i<n; i++){
			if (strcmp(mail,employee[i].email)==0){
				found=1;
				printf("\n_________________\nHere is The person Name: %s \n_________________\nAge: %d\n_________________\nPhone Number: %s\nE-mail %s\n",employee[i].name,employee[i].age,employee[i].phone,employee[i].email);
				break;
			}
		}
		if (found==0)
			printf("not found");
	}

        getch();
    }




int fulllist()
{
   char ch, file_name[25];
   FILE *fulllist;

   fulllist=fopen("C://add.txt","r");

   //fp = fopen(file_name,"r"); // read mode

   if( fulllist == NULL )
   {
      printf("Error\n");
      exit(EXIT_FAILURE);
   }

   printf("\n\n______________________________________\nThe contents of %s file are :\n\n\n\n", file_name);

   while( ( ch = fgetc(fulllist) ) != EOF )
      printf("%c",ch);

   fclose(fulllist);
   return 0;
}





void del(){
	 char ph[23];
	 int i,j;
	 int found=0;
	 if (n==0){ printf("no data");   getch();}
	 else{
	printf("Enter the phone number of the person you want to delete:");
	scanf("%s",ph);
	for (i=0; i<n; i++){
		if (strcmp(ph,employee[i].phone)==0){
			found=1;
			printf("\n\nThe Number is Delete successfully\n\n");

			break;
		}
	}
	if (found==0)
		printf("The person you want to delete is not found");
	else{
		for(j=i; j<n; j++){
			strcpy(employee[j].name,employee[j+1].name);
			employee[j].age=employee[j+1].age;
			strcpy(employee[j].phone,employee[j+1].phone);
			strcpy(employee[j].email,employee[j+1].email);
		}
		n--;
	}
	 }
}


int about(){

printf("\n___________________________________________________________\nABOUT THE SOFTWARE.\n\n");
printf("this is phonebook management system\n that is made by Procedure Oriented Programing  Language.");
printf("\n This is a software,where you can add your important contacts with some valuable informations.");
printf("\nWe are providing total security, so that you can make secure your \nphonebook by using our security feature in our system.                 ");


printf("\n\nOur Features\n____________________________\n");
printf("\n\n----->Easily Add your Contacts.");
printf("\n\n----->Search By Name.");
printf("\n\n----->Search By Cell Number");
printf("\n\n----->Search By E-mail");
printf("\n\n----->Total List Of Your Contacts.");
printf("\n\n----->Delete A Contact From List");
printf("\n\n----->Real Time And Date.\n\n");
printf("\n\nYou can run our software in Turbo c, Codeblocks, Microsoft Visual Basic, Dev C   and any type of C compailers\n\n");




printf("\n\n Hope you wil like our software.\n\n\n\n\n\n\n");

return 0;

}

int contact(){


	printf("Empty");

}




int welcome(){

    	printf("______________________________________________________________________________\n");


    	printf("                         \n\n|| SDP PROJECT ||\n");
    	printf("______________________________________________________________________________\n\n");
    	printf("Project Name- PhoneBook \n");

    	printf("Team ID- 06  \n");
    //	printf("Team Members: Mehdi, Zulhas, Razz, Shuvo, Aminul, Tanvir\n");
    	printf("Submission Date- 23 Aug 2016\n");
    printf("______________________________________________________________________________\n");








	int choice;
	do{

		printf("\n                Add Contacts------------[Press- 1]  \n\n                Search by name----------[Press- 2]  \n \n                Search by E-mail--------[Press- 3]  \n\n                Search by number--------[Press- 4]  \n \n                List of Contacts--------[Press- 5]  \n \n                Delete a contact--------[Press- 6]  \n \n                About-----------------[Press- 7]  \n \n                 Contact Us---------------[Press- 8]  \n \n                 Exit---------------[Press- 9]  \n \n               Enter your choice:");
		scanf("%d",&choice);
		if (choice==1)  add();
		if (choice==2) name();
		if (choice==3) email();
		if (choice==4) number();
		if (choice==5) fulllist();
		if (choice==6) del();
		if (choice==7) about();
		if (choice==8) contact();
		if (choice==9) welcome();
	}while(choice!=0);
	getch();
	return 0;
}






int main()



	{
		//clrscr();
		system("COLOR 71");




		char username[5];
	    char pass[10];
	    char username1[22] = "shawon";
		char pass1[10] = "74";


	        time_t currentTime = time(0);

	    	printf("The Current Date and Time is %s", ctime(&currentTime));


    			printf("\n\n               ****************LOGIN PAGE*******************\n");
   				 printf("              *********************************************\n\n\n\n");
	    printf("\n                       Enter Your_Username   ");
		scanf("%s", &username); // to read username argument


    {
		if
		(strcmp(username,username1) == 0)
	       printf("\n                       Correct username\n");

	    else
	       printf("\n                       Wrong username\n ");




   }


	 	printf("\n                       Enter Your_Password   ");
	    scanf("%s", &pass); // to read password argument

	       {

	   		if
			(strcmp(pass,pass1) == 0)
		       printf("                       Correct password\n");

		    else
		       printf("                       Wrong password\n ");
       }

       int enter;
	do{

		printf("\n           For Extra Security, Press ZERO to enter-----> ");
		scanf("%d",&enter);
		if (strcmp(pass,pass1) == 0 )  welcome();
		if (strcmp(pass,pass1) != 0 )  printf("Wrong password");
		if (strcmp(username,username1) == 0) welcome();
		if (strcmp(username,username1) != 0) printf("Invalid Username");

		else printf("Wrong Button");

	}while(enter!=1);
	//getch();
	return 0;


   }


