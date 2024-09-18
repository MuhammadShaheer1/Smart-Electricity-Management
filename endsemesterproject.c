// Group Members: Ch Muhammad Shaheer Yasir (286021)
//                Muhammad Hamza (290951)
//                Muhammad Oqba Naveed(297221)
#include <stdio.h>
#include <string.h>
// Declaring global variables which can be used in all functions
float current_reading, net_reading, bill, tax, peak_hour_reading;
FILE *ptr;
int i, meter_number, year = 2019, total_bill;
char month[][12] = { "December", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November" };
char area[100], b[9], c[100];
// Declaring all functions which are used in program
void bill_printer();
void tax_reader();
void bill_calculator();
void meter_checker();
void area_checker();
float area_type_checker();
void peak_hour_reader();
int main()
{
	ptr = fopen("Datastored.txt", "a");
	//Using a for loop to Print Bill infinitely
	for (i = 0;;)
	{
		//Taking  area input from users
		printf("Please Enter Your Area\n");
		scanf("%s", &area);
		// Taking meter number as input from user
		printf("Please Enter Your Meter Number\n");
		scanf("%d", &meter_number);
		//Taking current readings as input from user
		printf("Please enter your Current Readings\n");
		scanf("%f", &current_reading);
		//Taking peak hour readings as input from user
		puts("The peak hours for electricity are from 6 pm to 10 pm");
		puts("Please Enter your peak hour readings");
		scanf("%f", &peak_hour_reading);
		// Classifying each area into three types: Residential,Commercial and Industrial
		printf("Please enter your Area Type\n");
		scanf("%s", &c);
		//Using the function area_checker to print bill
		area_checker();
		//Printing area of user
		fprintf(ptr, "\n********************************************************************************\n");
		fprintf(ptr, "\tYour Area:\t %s\n", area);
		//Printing meter number of user
		fprintf(ptr, "\tYour Meter Number: \t%d\n", meter_number);
		//printing current units consumed by user
		fprintf(ptr, "\tCurrent Units:\t %f\n", net_reading);
		//printing units consumed by user during peak hours
		fprintf(ptr, "\tUnits Consumed during peak hours:\t%f\n", peak_hour_reading);
		//printing current month and year
		fprintf(ptr, "\tCurrent Month:\t %s %d\n", month[i], year);
		//printing bill of user
		fprintf(ptr, "\tYour Bill:\tRupees %f\n", bill);
		//printing tax imposed on user
		fprintf(ptr, "\tTax:\tRupees %f\n", tax);
		//printing total bill including tax
		fprintf(ptr, "\tTotal Bill:\tRupees %d\n", total_bill);
		fprintf(ptr, "********************************************************************************\n");
		// Using this function to ask user whether he wants to remain in current month and print another bill or he wants to proceed to next month
		puts("Do you want to continue in this month?");
		scanf("%s", &b);
		//if user wants to remain in this month , program will start executing again from main
		if (strcmp(b, "Yes") == 0)
		{
			continue;
		}
		//if user wants to proceed to next month then it will change the month and if month is december then it will increment the year
		else if (strcmp(b, "No") == 0)
		{
			if (strcmp(month[i], month[0]) == 0)
			{
				i = 0;
				year++;
				i++;
			}
		}
		else if (strcmp(b, "Exit") == 0)
		{
			break;
		}
	}
fclose(ptr);
}
//Defining the function area checker.This function will detect area of user and then print it.It also contain other functions to execute the output
void area_checker()
{
	if (strcmp(area, "Saddar") == 0)
	{
		// Calling the function meter_checker
		meter_checker();
	}
	else if (strcmp(area, "Dheri_Hasan_Abad") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Dhamial_Camp") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Tench_Bhata") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Askari") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "New_Lalazar") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Westridge") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Misrial") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Murree_Road") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Raja_Bazar") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Marir_Hasan") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Gawalmandi") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Gulraiz") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Lalkurti") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Chour") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Chaklala") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Satellite_Town") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "PWD") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Harley") == 0)
	{
		meter_checker();
	}
	else if (strcmp(area, "Adiala") == 0)
	{
		meter_checker();
	}
	//if user enters some other place or area program 
	else
	{
		puts("Invalid Area Input . Please Try Again");
	}
}
// Defining the function meter_checker to determine the meter number of user. There are 10 registered meters in every area.So limit should not be beyond it.
void meter_checker()
{
	if (meter_number == 1)
	{
		//Calling the function bill_calculator
		bill_calculator();
	}
	else if (meter_number == 2)
	{
		bill_calculator();
	}
	else if (meter_number == 3)
	{
		bill_calculator();
	}
	else if (meter_number == 4)
	{
		bill_calculator();
	}
	else if (meter_number == 5)
	{
		bill_calculator();
	}
	else if (meter_number == 6)
	{
		bill_calculator();
	}
	else if (meter_number == 7)
	{
		bill_calculator();
	}
	else if (meter_number == 8)
	{
		bill_calculator();
	}
	else if (meter_number == 9)
	{
		bill_calculator();
	}
	else if (meter_number == 10)
	{
		bill_calculator();
	}
	else
	{
		puts("Invalid Meter Number.Please Try Again");
	}
}
// Defining the function bill_calculator to calculate bill 
void bill_calculator()
{
	//net reading will be subtraction from previous reading of month and peak hour reading . Peak hour reading will be dealt later
	net_reading = current_reading - peak_hour_reading;
	//Calling function peak_hour_hour to deal with peak hour readings
	peak_hour_reader();
	// using if else to make bill according to net readings
	if (net_reading < 0)
	{
		puts("Invalid Meter Readings.Please Try Again");
	}
	else if (net_reading <= 50 && net_reading > 0)
	{
		//earlier in function peak_hour_reader,we made a bill for peak hour readings.so this bill is total of both bills
		bill += net_reading * 4;
		tax_reader();
	}
	else if (net_reading <= 100 && net_reading > 50)
	{
		bill += net_reading * 10.87;
		tax_reader();
	}
	else if (net_reading <= 200 && net_reading > 100)
	{
		bill += net_reading * 14.00;
		tax_reader();
	}
	else if (net_reading <= 300 && net_reading > 200)
	{
		bill += net_reading * 15.58;
		tax_reader();
	}
	else if (net_reading <= 700 && net_reading > 300)
	{
		bill += net_reading * 16.85;
		tax_reader();
	}
	else
	{
		bill += net_reading * 18.95;
		tax_reader();
	}
}
// Defining function tax_reader to add tax according to the bill
void tax_reader()
{
	// using if else ladder to determine tax according to the bill
	if (bill <= 400)
	{
		tax = 0;
		//Calling function area_type_checker to vary tax according to type of area
		area_type_checker();
		//adding tax and bill to make total bill
		total_bill = bill + tax;
		bill_printer();
	}
	else if (bill <= 600 && bill > 400)
	{
		tax = 80;
		area_type_checker();
		total_bill = bill + tax;
		bill_printer();
	}
	else if (bill <= 800 && bill > 600)
	{
		tax = 100;
		area_type_checker();
		total_bill = bill + tax;
		bill_printer();
	}
	else if (bill <= 1000 && bill > 800)
	{
		tax = 160;
		area_type_checker();
		total_bill = bill + tax;
		bill_printer();
	}
	else if (bill <= 1500 && bill > 1000)
	{
		tax = 300;
		area_type_checker();
		total_bill = bill + tax;
		bill_printer();
	}
	else if (bill <= 3000 && bill > 1500)
	{
		tax = 350;
		area_type_checker();
		total_bill = bill + tax;
		bill_printer();
	}
	else if (bill <= 4500 && bill > 3000)
	{
		tax = 450;
		area_type_checker();
		total_bill = bill + tax;
		bill_printer();
	}
	else if (bill <= 6000 && bill > 4500)
	{
		tax = 500;
		area_type_checker();
		total_bill = bill + tax;
		bill_printer();
	}
	else if (bill <= 10000 && bill > 6000)
	{
		tax = 650;
		area_type_checker();
		total_bill = bill + tax;
		bill_printer();
	}
	else if (bill <= 15000 && bill > 10000)
	{
		tax = 1000;
		area_type_checker();
		total_bill = bill + tax;
		bill_printer();
	}
	else if (bill <= 20000 && bill > 15000)
	{
		tax = 1500;
		area_type_checker();
		total_bill = bill + tax;
		bill_printer();
	}
	else
	{
		tax = bill * 0.12;
		area_type_checker();
		total_bill = bill + tax;
		bill_printer();
	}
}
// defining function bill printer to print bill
void bill_printer()
{
	//Printing area of user
	puts("********************************************************************************");
	printf("\tYour Area:\t %s\n", area);
	//Printing meter number of user
	printf("\tYour Meter Number: \t%d\n", meter_number);
	//printing current units consumed by user
	printf("\tCurrent Units:\t %f\n", net_reading);
	//printing units consumed by user during peak hours
	printf("\tUnits Consumed during peak hours:\t%f\n", peak_hour_reading);
	//printing current month and year
	printf("\tCurrent Month:\t %s %d\n", month[i], year);
	//printing bill of user
	printf("\tYour Bill:\tRupees %f\n", bill);
	//printing tax imposed on user
	printf("\tTax:\tRupees %f\n", tax);
	//printing total bill including tax
	printf("\tTotal Bill:\tRupees %d\n", total_bill);
	puts("********************************************************************************");
}
//defining area_type_checker to check which area user belong to
float area_type_checker()
{
	// if user belong to residential area then tax will be same
	if (strcmp(c, "Residential") == 0)
	{
		tax = tax * 1;
	}
	//if user belongs to industrial area then tax will be 1.5 times
	else if (strcmp(c, "Industrial") == 0)
	{
		tax = tax * 1.5;
	}
	//if user belongs to commercial area then tax will be 2 times
	else if (strcmp(c, "Commercial") == 0)
	{
		tax = tax * 2;
	}
}
// defining the function peak_hour_reader to deal with peak readings
void peak_hour_reader()
{
	// peak readings are dealt the same as net readings but bill be double
	if (peak_hour_reading < 0)
	{
		puts("Invalid reading.Please Try Again");
	}
	else if (peak_hour_reading <= 50 && peak_hour_reading > 0)
	{
		bill = peak_hour_reading * 8;
	}
	else if (peak_hour_reading <= 100 && peak_hour_reading > 50)
	{
		bill = peak_hour_reading * 21.74;
	}
	else if (peak_hour_reading <= 200 && peak_hour_reading > 100)
	{
		bill = peak_hour_reading * 28.00;
	}
	else if (peak_hour_reading <= 300 && peak_hour_reading > 200)
	{
		bill = peak_hour_reading * 31.16;
	}
	else if (peak_hour_reading <= 700 && peak_hour_reading > 300)
	{
		bill = peak_hour_reading * 33.7;
	}
	else
	{
		bill = peak_hour_reading * 37.9;
	}
}