// Project Name: Academic Portal
// Coder: Eman Khan(23P-0022) & Umama Taimoor(23P-0010)
// Purpose: The purpose of the project is to provide the service to the students,lecturer and admin to check the attendance issue
//gpa calculator,grade calculator, lecturer salary their bonus on qualification, expenditure
#include<stdio.h>

void teacher_salaries(int credit_hours,int chours_perday, int qualification, float final_salary, float basic_salary, int absentee, float deduction) //function for showing teacher salaries when teacher option is selected
{
	int teacher_password=1234;
	do
	{	
		printf("Enter the password for the access of teacher portal!\n");
		while(scanf("%d",&teacher_password) != 1)
		{
			printf("Invalid input.\nPlease enter a valid numeric input.\n");
			while (getchar() != '\n'); 
		}

		if(teacher_password==1234)
		{
			printf("Welcome to the teacher portal!\n");
			do
			{	
				printf("\nPlease enter the number of credit hours that you teach for:\n");
				while(scanf("%d",&credit_hours) != 1)
				{
					printf("Invalid input.\nPlease enter a valid numeric input.\n");
					while (getchar() != '\n'); 
				}
				
				if(credit_hours>40 || credit_hours<1)
				{
					printf("Invalid number of credit hours entered! Please re-enter\n");
				}
			}
			while(credit_hours>40 || credit_hours<1);
			
			do
			{
				printf("Please select your qualification:\n1. Bachelor's\n2. MS\n3. PhD\n");
				while(scanf("%d",&qualification) != 1)
				{
					printf("Invalid input.\nPlease enter a valid number between 1 and 3.\n");
					while (getchar() != '\n'); 
				}
				if(qualification<1 || qualification>3)
				{
					printf("Invalid option selected. Please re-enter\n");
				}
			}
			while(qualification<1 || qualification>3);
			
			do
			{
				printf("Please enter the number of credit hour worth of lessons that you have per day:\n");
				while(scanf("%d",&chours_perday) != 1)
				{
					printf("Invalid input.\nPlease enter a number between 1 and 8:\n");
					while (getchar() != '\n'); 
				}
				
				if(chours_perday<1 || chours_perday>8)
				{
					printf("Invalid number of credit hours per day entered. Please re-enter a number between 1 and 8:\n");
				}
			}
			while(chours_perday<1 || chours_perday>8);
			
			
			do
			{
				printf("PLease enter the number of absentees that you have:\n");		
				while (scanf("%d", &absentee) != 1) 
				{ 
		    		printf("Invalid input!\nPlease enter a valid number between 0 and 30:\n");
					while (getchar() != '\n'); 
				}
		            
				if(absentee>30 || absentee<0)
				{
					printf("Invaild number of absentees entered! Please enter a number between 0 and 30.\n");
				}
			}
			while(absentee>30 || absentee<0);
			
		
			if(qualification==1)
			{
				basic_salary=(2500*credit_hours)+10000;
				deduction=(absentee*chours_perday*2500);
				final_salary=basic_salary-deduction;
				if (final_salary<0) 
				{
		        	final_salary=0;
				}
				printf("Your salary for this month is: PKR %.2f\n",final_salary);
			}
			else if(qualification==2)
			{
				basic_salary=(2500*credit_hours)+20000;
				deduction=(absentee*chours_perday*2500);
				final_salary=basic_salary-deduction;
				if (final_salary<0) 
				{
		        	final_salary=0;
				}
				printf("Your salary for this month is: PKR %.2f\n",final_salary);
			}
			else if(qualification==3)
			{
				basic_salary=(2500*credit_hours)+30000;
				deduction=(absentee*chours_perday*2500);
				final_salary=basic_salary-deduction;
				if (final_salary<0) 
				{
		        	final_salary=0;
				}
				printf("Your salary for this month is: PKR %.2f\n",final_salary);
			}
			else if(qualification<1 || qualification>3)
			{
				printf("Invalid option entered\n");
			}
		}
		else
		{
			printf("Incorrect password entered. Please enter the correct password.\n");
		}
	}
	while(teacher_password!=1234);	
}

void admin_option(int val) //shows bills, other expenses and profit when admin option is selected
{
	int admin_password=4321;
	do
	{	
		printf("Enter the password for the access of admin portal!\n");
		while(scanf("%d",&admin_password) != 1)
		{
			printf("Invalid input.\nPlease enter a valid numeric input.\n");
			while (getchar() != '\n'); 
		}
		if(admin_password==4321)
		{
			printf("Welcome to the admin portal!\n");
			do
			{
				printf("\nPlease choose an option:\n1.Utility bill details\n2.Other expenses\n3.Total profit\n4.Exit\n");
				while(scanf("%d",&val) != 1)
				{
					printf("Invalid input.\nPlease enter a number between 1 and 4.\n");
					while (getchar() != '\n'); 
				}
				float electricity, gas, wifi,total, total_profit, tui_fee, printer, salaries, total_other;
			
				switch(val)
				
				{
					case 1:
					
						printf("\nEnter the electricity bill for this month in PKR: ");
						while(scanf("%f",&electricity) != 1)
						{
							printf("Invalid input.\nPlease enter a valid numeric input.\n");
							while (getchar() != '\n'); 
						}
					
						printf("\nEnter the gas bill for this month in PKR: ");
						while(scanf("%f",&gas) != 1)
						{
							printf("Invalid input.\nPlease enter a valid numeric input.\n");
							while (getchar() != '\n'); 
						}
					
						printf("\nEnter the Wi-Fi bill for this month: ");
						while(scanf("%f",&wifi) != 1)
						{
							printf("Invalid input.\nPlease enter a valid numeric input.\n");
							while (getchar() != '\n'); 
						}
					
						total=electricity+wifi+gas;
						printf("\nThe total bills of this month were: %.2f PKR\n",total);
					
						break;
						
					case 2:
					
						printf("\nEnter the printer charges for this month in PKR: ");
						while(scanf("%f",&printer) != 1)
						{
							printf("Invalid input.\nPlease enter a valid numeric input.\n");
							while (getchar() != '\n'); 
						}
					
						printf("\nEnter the total salaries disbursed this month in PKR: ");
						while(scanf("%f",&salaries) != 1)
						{
							printf("Invalid input.\nPlease enter a valid numeric input.\n");
							while (getchar() != '\n'); 
						}
					
						total_other=printer+salaries;
						printf("\nThe total other expenses of this month were %.2f PKR.\n",total_other);
						break;
				
					case 3:
					
						printf("\nEnter the amount collected via students' fee this month in PKR: ");
						while(scanf("%f",&tui_fee) != 1)
						{
							printf("Invalid input.\nPlease enter a valid numeric input.\n");
							while (getchar() != '\n'); 
						}
					
						total_profit=tui_fee;
						printf("\nThe total profit for this month is: %.2f PKR.\n",total_profit);
						break;
					
					case 4:
						printf("Thank you!");
						break;
				
					default:
						printf("Invalid choice! Please choose a valid option!");
				}
			}
			while(val<1 || val>4);
		}
		else
		{
			printf("Incorrect password. Please enter the correct password.\n");
		}
	}
	while(admin_password!=4321);
}

int student_option(int pass)
{
	do
	{
		printf("Enter the password for the access of student portal!\n");
		while(scanf("%d",&pass) != 1)
		{
			printf("Invalid input.\nPlease enter a valid numeric input.\n");
			while (getchar() != '\n'); 
		}
		if(pass==9876)
		{
			int chose;
			printf("Welcome to the student portal!\n");
			printf("What service do you want:\n");
			printf("1.GPA Calculator\n2.Attendance\n3.Grade Calculator\n4.Exit\n");
			while(scanf("%d",&chose) != 1)
			{
				printf("Invalid input.\nPlease enter a valid numeric input.\n");
				while (getchar() != '\n'); 
			}
			if(chose==1)
			{
				int numClasses;
   				double creditHours = 0, creditHoursTotal = 0;
    			double gradePoints = 0, gpa = 0, cgpa = 0;
    			char choice, grade, gradePlus;

   				do 
				{
					printf("How many courses would you like to factor into your GPA? : ");
    				while(scanf("%d",&numClasses) != 1)
					{
						printf("Invalid input.\nPlease enter a valid numeric input.\n");
						while (getchar() != '\n'); 
					}
					int i;
   					for (i = 0; i < numClasses; ++i)
    				{
        				printf("\n***** Course number %d *****\n", i+1);

        				printf("Total number of credit hours: ");
        				while(scanf("%d",&creditHours) != 1)
						{
							printf("Invalid input.\nPlease enter a valid numeric input.\n");
							while (getchar() != '\n'); 
						}

        				printf("Grade: ");
        				scanf(" %c%*c", &grade);

        				printf("\nFor course number %d you entered the following: \n", i+1);
        				printf("  Credit hours: %.1f\tGrade: %c\n", creditHours, grade);

        				creditHoursTotal += creditHours;

        				switch(grade)
        				{
           					case 'A':
            				case 'a':
                				gradePoints += 4.00 * creditHours;
                				break;
            				case 'B':
            				case 'b':
                				gradePoints += 3.00 * creditHours;
                				break;
            				case 'C':
            				case 'c':
                				gradePoints += 2.00 * creditHours;
                				break;
            				case 'D':
            				case 'd':
                				gradePoints += 1.00 * creditHours;
                				break;
            				case 'F':
            				case 'f':
                				gradePoints += 0.00 * creditHours;
                				break;
            				default:
                				printf("Invalid grade entered.\n");
                				return 1;
       					}
					}

					gpa = gradePoints / creditHoursTotal;
    				cgpa += gpa;

    				printf("\nYour GPA for this set of courses is: %.2f\n", gpa);

    				printf("\nWould you like to calculate your GPA for another set of courses? (y/n): ");
    				scanf(" %c%*c", &choice);
   				} 
				while (choice == 'y' || choice == 'Y');

    			cgpa /= (double)numClasses;

    			printf("\nYour cumulative GPA is: %.2f\n", cgpa);
			}
			else if(chose==2)
			{
    			int numCourses;
    			int MAX_COURSES=10;
    			int absences[MAX_COURSES];
    			int creditHours[MAX_COURSES];
    			int debarred = 0;

    			printf("How many courses would you like to enter? :\n");
    			while(scanf("%d",&numCourses) != 1)
				{
					printf("Invalid input.\nPlease enter a valid numeric input.\n");
					while (getchar() != '\n'); 
				}

    			if (numCourses > MAX_COURSES)
    			{
       				printf("Error: Maximum number of courses is %d\n", MAX_COURSES);
        			return 1;
    			}
    			// Pointers to iterate through absences and creditHours arrays
    			int *absencesPtr = absences;
    			int *creditHoursPtr = creditHours;

				int i;
    			for (i = 0; i < numCourses; ++i)
    			{
        			printf("\n***** Course number %d *****\n", i+1);

        			printf("Total number of credit hours: ");
        			while(scanf("%d",creditHoursPtr) != 1)
					{
						printf("\nInvalid input.\nPlease enter a valid numeric input.\n");
						while (getchar() != '\n'); 
					}

        			printf("Number of absences: ");
        			while(scanf("%d",absencesPtr) != 1)
					{
						printf("Invalid input.\nPlease enter a valid numeric input.\n");
						while (getchar() != '\n'); 
					}

        			printf("\nFor course number %d you entered the following: \n", i+1);
        			printf("  Credit hours: %d\tAbsences: %d\n", *creditHoursPtr, *absencesPtr);

        			if (*creditHoursPtr == 3 && *absencesPtr > 6)
        			{
           				printf("Error: You are debarred from this course due to excessive absences.\n");
            			debarred = 1;
        			}
        			else if (*creditHoursPtr == 2 && *absencesPtr > 3)
        			{
            			printf("Error: You are debarred from this course due to excessive absences.\n");
            			debarred = 1;
        			}
        			absencesPtr++;
      				 creditHoursPtr++;
    			}
    			if (debarred == 0)
    			{
        			printf("\nYou are not debarred from any courses.\n");
    			}
			}
			else if(chose==3)
			{
				float course_gpa;
    			char choice;

    			do 
				{
        			// Prompt the user to enter the course GPA
        			printf("Enter the course GPA: ");
        			while(scanf("%f",&course_gpa) != 1)
					{
						printf("Invalid input.\nPlease enter a valid numeric input.\n");
						while (getchar() != '\n'); 
					}

        			// Check the GPA and assign the corresponding letter grade
        			if (course_gpa >= 4.0) 
					{
            			printf("Letter Grade: A\n");
        			} 
					else if (course_gpa >= 3.7) 
					{
            			printf("Letter Grade: A-\n");
        			} 
					else if (course_gpa >= 3.3) 
					{
            			printf("Letter Grade: B+\n");
        			} 
					else if (course_gpa >= 3.0) 
					{
            			printf("Letter Grade: B\n");
        			} 
					else if (course_gpa >= 2.7) 
					{
           				printf("Letter Grade: B-\n");
        			} 
					else if (course_gpa >= 2.3) 
					{
            			printf("Letter Grade: C+\n");
        			} 
					else if (course_gpa >= 2.0) 
					{
            			printf("Letter Grade: C\n");
        			} 
					else if (course_gpa >= 1.7) 
					{
            			printf("Letter Grade: C-\n");
        			}	 
					else if (course_gpa >= 1.3) 
					{
            			printf("Letter Grade: D+\n");
        			} 
					else if (course_gpa >= 1.0) 
					{
            			printf("Letter Grade: D\n");
        			} 
					else if (course_gpa >= 0.0) 
					{
            			printf("Letter Grade: F\n");
        			} 
					else 
					{
            			printf("Invalid GPA entered.\n");
        			}
        			printf("Do you want to enter another course GPA? (y/n): ");
        			scanf(" %c", &choice);
    			} 
				while (choice == 'y' || choice == 'Y');

    			printf("Program ended.\n");
			}
			else if(chose==4)
			{
				printf("Thank You!\n");
			}
		}
		else
		{
			printf("You did not enter the right password!\nPlease enter the correct password\n");
		}
	}
	while(pass!=9876);
}

int main()
{
	int select, main_option;
	int val,pass;
	int chours_perday, credit_hours, qualification, final_salary, basic_salary, absentee, deduction;
	do
	{
		
		printf("\nPlease select an option:\n1.Admin\n2.Student\n3.Teacher\n4.Exit\n");
		while(scanf("%d",&select) != 1)
		{
			printf("Invalid input.\nPlease enter a valid numeric input.\n");
			while (getchar() != '\n'); 
		}
		if(select==1)
		{
			admin_option(val);
		}
		else if(select==2)
		{
			student_option(pass);	
		}
		else if(select==3)
		{
			teacher_salaries(credit_hours,qualification,final_salary,basic_salary,absentee,chours_perday,deduction);
		}
		else if(select==4)
		{
			printf("Thank You!\n");
		}
		else 
		{
			printf("Please select a valid option:\n");
		}
	}
	while(select<1 || select>4 || select != 4);
	
	return 0;	
}


