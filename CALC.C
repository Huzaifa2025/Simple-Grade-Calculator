// Simple Grade Calculator

#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	char grade;
	clrscr();

	printf("\n Enter Your Marks :- ");
	scanf("%d",&marks);


	// 01 >>> Grade Calculation...
	grade = (marks >= 90 && marks <= 100)	// Marks :- 90 To 100
			? 'A'
			:(marks >= 80 && marks <= 90)	// Marks :- 80 To 90
			? 'B'
			:(marks >= 70 && marks <= 80)	// Marks :- 70 To 80
			? 'C'
			:(marks >= 60 && marks <= 70)	// Marks :- 60 To 70
			? 'D'
			:(marks >= 50 && marks <= 60)	// Marks :- 50 To 60
			? 'E'
			: 'F';                          // Marks :- Below 50
			printf("\n Your Grade Is %c",grade);

	// 02 >>> Additional Comments...
	switch(grade)
	{
		case 'A':
			printf("\n Excellent Work!");
			break;
		case 'B':
			printf("\n Well Done");
			break;
		case 'C':
			printf("\n Good Job");
			break;
		case 'D':
			printf("\n You passed , But you could better");
			break;
		case 'E':
			printf("\n You passed on passing marks");
			break;
		case 'F':
			printf("\n Sorry , You Failed");
			break;
		default :
			printf("\n Invalid Choice...");

	}

	// 03 >>> Eligibily Check...

	if(grade == 'F')
	{
		printf("\n Please try again next time.");
	}
	else
	{
		printf("\n Congratulation! You are eligible for next level.");
	}

	getch();
}