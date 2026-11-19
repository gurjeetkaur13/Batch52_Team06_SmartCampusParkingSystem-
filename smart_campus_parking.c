#include <stdio.h>
#include <string.h>
#define Max_slots 10
#define Rate_per_hour 20
struct vehicle 
{
 char vehicleNumber[20];
int duration;
int slotNumber;
int occupied;
};
struct vehicle parking[Max_slots];
void vehicleEntry();
void vehicleExit();
void displayVehicles();
void checkAvailability();
int searchVehicle(char vehicleNumber[]);
int main()
{ 
 int choice;
for(int i=0; i<Max_slots; i++)
{ 
 parking[i].occupied = 0;
}
do
{
printf("\n=================================\n");
printf("   Smart campus parking system\n");
printf("==================================\n");
printf("1. Vehicle entry\n");
printf("2. Vehicle exit\n");
printf("3. Display parked vehicle \n");
printf("4. Check parking availability\n");
printf("5. Exit\n");
printf("==============================\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice)
{
case 1:
vehicleEntry();
break;
case 2:
vehicleExit();
break;
case 3:
displayVehicles();
break;
case 4:
checkAvailability();
break;
case 5:
printf("\nThank you for using Smart Campus Parking System!\n");
break;
default: 
printf("\nInvalid choice! Please enter a number from 1 1 to 5.\n");
}
} while (choice!=5);
return 0;
}
void vehicleEntry()
{
 char vehicleNumber[20];
int duration;
int emptySlot = -1;
printf("\n------------Vehicle entry ----------\n");
printf("Enter vehicle registration number: ");
scanf("%19s", vehicleNumber);
if (searchVehicle(vehicleNumber)!=-1)
{
printf("\nError:Vehicle %s is already parked!\n",vehicleNumber);
return;
}
for (int i =0; i<Max_slots; i++)
{
if(parking[i].occupied ==0)
{
emptySlot = i;
break;
}
}
if (emptySlot == -1)
{
printf("\nSorry! parking area is full.\n");
return;
}
printf("Enter parking duration(in hours):");
scanf("%d", &duration);
if(duration <=0)
{
printf("\nInvalid parking duration!\n");
return;
}
strcpy(parking[emptySlot].vehicleNumber, vehicleNumber);
parking[emptySlot].duration = duration;
parking[emptySlot].slotNumber = emptySlot +1;
parking[emptySlot].occupied = 1;
printf("\nVehicle entry successful!\n");
printf("Vehicle Number : %s\n", parking[emptySlot].vehicleNumber);
printf("Parking Slot : %d\n", parking[emptySlot].slotNumber);
printf("duration : %d hour(s)\n",parking[emptySlot].duration);
}
void vehicleExit()
{
char vehicleNumber[20];
int index;
int parkingFee;
printf("\n---------Vehicle exit---------\n");
printf("Enter vehicle registration number:");
scanf("%19s", vehicleNumber);
index =searchVehicle(vehicleNumber);
if(index == -1)
{
printf("\nVehicle not found in the parking area!\n");
return;
}
parkingFee = parking[index].duration*Rate_per_hour;
printf("\nVehicle found!\n");
printf("---------------------------\n");
printf("Vehicle Number : %s\n", parking[index].vehicleNumber);
printf("Parking Slot : %d\n",parking[index].slotNumber);
printf("Duration :%d hour(s)\n", parking[index].duration);
printf("Rate : Rs.%d per hour\n",Rate_per_hour);
printf("Parking Fee: Rs.%d\n", parkingFee);
printf("----------------------------------\n");
parking[index].occupied =0;
printf("\nVehicle exit succesful!\n");
printf("Parking slot %d is now available.\n",parking[index].slotNumber);
}
void displayVehicles()
{
int found =0;
printf("\n-------------Parked vehicles-----------\n");
printf("%-10s %-20s %-15s\n","Slot", "Vehicle number", "Duration");
printf("----------------------------\n");
for (int i = 0; i < Max_slots; i++)
{
if (parking[i].occupied == 1)
{ 
printf("%-10d %-20s %d hour(s)\n", 
parking[i].slotNumber,
parking[i].vehicleNumber,
parking[i].duration);
found = 1;
}
}
if(found == 0)
{
printf("No vehicles are currently parked.\n");
}
}
void checkAvailability()
{
int occupiedSlots =0;
int availableSlots;
for (int i = 0; i<Max_slots; i++)
{
if (parking[i].occupied==1)
{ 
occupiedSlots++;
}
}
availableSlots = Max_slots - occupiedSlots;
printf("\n-------------Parking status------------\n");
printf("Total parking slots :%d\n",Max_slots);
printf("Occupied Slots : %d\n", occupiedSlots);
printf("Available Slots : %d\n",availableSlots);
if(availableSlots ==0)
{
printf("status    : parking full\n");
}
else
{ 
printf("status       : parking available\n");
}
}
int searchVehicle(char vehicleNumber[])
{
for(int i = 0 ; i<Max_slots;i++)
{
if(parking[i].occupied == 1 && strcmp(parking[i].vehicleNumber,vehicleNumber)==0)
{
return i; 
}
}
return -1;
}

