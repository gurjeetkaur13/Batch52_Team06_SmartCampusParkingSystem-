# 🚗 Smart Campus Parking System

## 💻 C Programming Mini Hackathon

> **A simple, efficient, and menu-driven parking management system developed using C.**

---

## 👥 Team Details

| Details | Information |
|---|---|
| **Team Number** | 06 |
| **Batch** | 52 |
| **Team Member 1** | Diksha |
| **Team Member 2** | Gurjeet Kaur Sandhu |
| **Team Member 3** | Mansi Rani |

---

## 📌 Project Title

**Smart Campus Parking System**

---

## 📝 Problem Statement

The **Smart Campus Parking System** is a menu-driven C program designed to manage vehicle parking inside a college campus.

The system maintains a fixed number of parking spaces, records vehicle registration numbers and parking duration, calculates parking charges, tracks vehicle entry and exit, and displays available parking spaces.

The program also prevents duplicate vehicle entries and displays a warning when the parking area is full.

---

## 🎯 Objectives

The main objectives of the project are:

- 🚗 To record vehicle entry and exit.
- 🅿️ To automatically allocate available parking slots.
- 🔢 To maintain a fixed number of parking spaces.
- 🪪 To store vehicle registration numbers.
- ⏱️ To record parking duration.
- 💰 To calculate parking charges.
- 🔍 To search for parked vehicles.
- 🚫 To prevent duplicate vehicle entries.
- ⚠️ To detect when the parking area is full.
- 📊 To display occupied and available parking spaces.
- 💻 To provide a simple menu-driven interface.

---

## ✨ Features of the Program

| Feature | Description |
|---|---|
| 🚗 **Vehicle Entry** | Registers a vehicle and assigns an available parking slot |
| 🚪 **Vehicle Exit** | Removes the vehicle and makes its parking slot available |
| 💰 **Fee Calculation** | Calculates parking fee according to parking duration |
| 🔍 **Vehicle Search** | Searches for a vehicle using its registration number |
| 📋 **Display Vehicles** | Displays all currently parked vehicles |
| 🅿️ **Availability Check** | Shows occupied and available parking slots |
| 🚫 **Duplicate Prevention** | Prevents the same vehicle from entering twice |
| ⚠️ **Parking Full Alert** | Displays a warning when all parking slots are occupied |
| ❌ **Input Validation** | Rejects invalid parking duration |

---

## ⚙️ Parking Configuration

| Configuration | Value |
|---|---|
| **Maximum Parking Slots** | 10 |
| **Parking Rate** | Rs. 20 per hour |

### 💰 Parking Fee Formula

```text
Parking Fee = Parking Duration × Rate Per Hour
```

### Example

If a vehicle is parked for **3 hours**:

```text
Parking Fee = 3 × 20
Parking Fee = Rs. 60
```

---

## 🖥️ Main Menu

When the program starts, the following menu is displayed:

```text
=====================================
     SMART CAMPUS PARKING SYSTEM
=====================================
1. Vehicle Entry
2. Vehicle Exit
3. Display Parked Vehicles
4. Check Parking Availability
5. Exit
=====================================
Enter your choice:
```

---

## 🧠 Algorithm

1. Start the program.
2. Initialize all 10 parking slots as empty.
3. Display the main menu.
4. Ask the user to enter a choice.
5. If the user selects **Vehicle Entry**:
   - Enter the vehicle registration number.
   - Check whether the vehicle is already parked.
   - Search for an available parking slot.
   - If no slot is available, display **Parking Full**.
   - Enter the parking duration.
   - Validate the duration.
   - Store the vehicle details.
   - Assign a parking slot.
6. If the user selects **Vehicle Exit**:
   - Enter the vehicle registration number.
   - Search for the vehicle.
   - Calculate the parking fee.
   - Display vehicle and fee details.
   - Free the occupied parking slot.
7. If the user selects **Display Parked Vehicles**, display all currently parked vehicles.
8. If the user selects **Check Parking Availability**, calculate and display occupied and available spaces.
9. If the user selects **Exit**, terminate the program.
10. Repeat the menu until the user selects Exit.
11. Stop.

---

## 📝 Pseudocode

```text
START

SET MAX_SLOTS = 10
SET RATE_PER_HOUR = 20

Initialize all parking slots as EMPTY

REPEAT

    DISPLAY MAIN MENU

    1. Vehicle Entry
    2. Vehicle Exit
    3. Display Parked Vehicles
    4. Check Parking Availability
    5. Exit

    INPUT choice

    IF choice = 1 THEN

        INPUT vehicle number

        IF vehicle already exists THEN
            DISPLAY "Vehicle is already parked"

        ELSE

            SEARCH for empty parking slot

            IF no slot is available THEN
                DISPLAY "Parking area is FULL"

            ELSE

                INPUT parking duration

                IF duration <= 0 THEN
                    DISPLAY "Invalid parking duration"

                ELSE
                    STORE vehicle information
                    ASSIGN parking slot
                    DISPLAY "Vehicle Entry Successful"

                END IF

            END IF

        END IF

    ELSE IF choice = 2 THEN

        INPUT vehicle number
        SEARCH for vehicle

        IF vehicle is not found THEN
            DISPLAY "Vehicle not found"

        ELSE
            CALCULATE parking fee
            DISPLAY vehicle details
            DISPLAY parking fee
            FREE parking slot
            DISPLAY "Vehicle Exit Successful"

        END IF

    ELSE IF choice = 3 THEN

        DISPLAY all parked vehicles

    ELSE IF choice = 4 THEN

        COUNT occupied parking slots
        availableSlots = MAX_SLOTS - occupiedSlots
        DISPLAY parking status

    ELSE IF choice = 5 THEN

        DISPLAY "Thank you for using Smart Campus Parking System"

    ELSE

        DISPLAY "Invalid Choice"

    END IF

UNTIL choice = 5

STOP
```

---

## 🔄 Flowchart

```text
                  +---------+
                  |  START  |
                  +----+----+
                       |
                       v
             +--------------------+
             | Initialize 10 Slots|
             |      as Empty      |
             +---------+----------+
                       |
                       v
              +----------------+
              |  Display Menu  |
              +-------+--------+
                      |
                      v
              +----------------+
              |  Enter Choice  |
              +-------+--------+
                      |
        +-------------+-------------+
        |             |             |
        v             v             v
 +-------------+ +-------------+ +------------------+
 |Vehicle Entry| |Vehicle Exit | | Display Vehicles |
 +------+------+ +------+------+ +---------+--------+
        |             |                   |
        +-------------+-------------------+
                      |
                      v
             +--------------------+
             | Check Availability |
             +---------+----------+
                       |
                       v
                +-------------+
                | Choice = 5? |
                +------+------+
                      / \
                    NO   YES
                    |     |
                    v     v
                   MENU   END
```

---

## 💻 C Programming Concepts Used

### 1. Structures

A structure is used to store information about each vehicle.

```c
struct Vehicle
{
    char vehicleNumber[20];
    int duration;
    int slotNumber;
    int occupied;
};
```

---

### 2. Arrays

An array of structures is used to store information about multiple vehicles.

```c
struct Vehicle parking[MAX_SLOTS];
```

---

### 3. Functions

The program is divided into separate functions to make it easier to understand and manage.

```c
void vehicleEntry();
void vehicleExit();
void displayVehicles();
void checkAvailability();
int searchVehicle(char vehicleNumber[]);
```

---

### 4. Loops

The program uses `for` loops for:

- Searching for vehicles.
- Finding available parking slots.
- Counting occupied parking spaces.
- Displaying parked vehicles.

A `do-while` loop is used to repeatedly display the main menu until the user selects Exit.

---

### 5. Conditional Statements

`if`, `else if`, and `else` statements are used for:

- Checking whether parking is full.
- Checking duplicate vehicle entries.
- Validating parking duration.
- Checking whether a vehicle exists.

---

### 6. Switch Statement

A `switch` statement is used to process the different options in the main menu.

---

### 7. Strings

Strings are used to store vehicle registration numbers.

The following string functions are used:

```c
strcmp()
strcpy()
```

---

### 8. Constants

Constants are used to define the maximum number of parking slots and parking rate.

```c
#define MAX_SLOTS 10
#define RATE_PER_HOUR 20
```

---

## 🚀 How to Compile and Execute

### Step 1: Save the Program

Save the C program as:

```text
smart_parking.c
```

### Step 2: Compile the Program

Using GCC:

```bash
gcc smart_parking.c -o smart_parking
```

### Step 3: Run the Program

#### Windows

```bash
smart_parking.exe
```

#### Linux / macOS

```bash
./smart_parking
```

---

# 🧪 Sample Test Cases

## Test Case 1: Successful Vehicle Entry

### Input

```text
Choice: 1
Vehicle Number: HR10AB1234
Parking Duration: 3
```

### Expected Output

```text
Vehicle Entry Successful!
Vehicle Number : HR10AB1234
Parking Slot   : 1
Duration       : 3 hour(s)
```

### Actual Output

```text
Vehicle Entry Successful!
Vehicle Number : HR10AB1234
Parking Slot   : 1
Duration       : 3 hour(s)
```

**Result: ✅ PASS**

---

## Test Case 2: Second Vehicle Entry

### Input

```text
Choice: 1
Vehicle Number: UK07CD5678
Parking Duration: 2
```

### Expected Output

```text
Vehicle Entry Successful!
Vehicle Number : UK07CD5678
Parking Slot   : 2
Duration       : 2 hour(s)
```

### Actual Output

```text
Vehicle Entry Successful!
Vehicle Number : UK07CD5678
Parking Slot   : 2
Duration       : 2 hour(s)
```

**Result: ✅ PASS**

---

## Test Case 3: Duplicate Vehicle Entry

### Input

```text
Choice: 1
Vehicle Number: HR10AB1234
```

### Expected Output

```text
ERROR: Vehicle HR10AB1234 is already parked!
```

### Actual Output

```text
ERROR: Vehicle HR10AB1234 is already parked!
```

**Result: ✅ PASS**

---

## Test Case 4: Display Parked Vehicles

### Input

```text
Choice: 3
```

### Expected Output

```text
---------- PARKED VEHICLES ----------

Slot       Vehicle Number       Duration
---------------------------------------------
1          HR10AB1234           3 hour(s)
2          UK07CD5678           2 hour(s)
```

### Actual Output

```text
---------- PARKED VEHICLES ----------

Slot       Vehicle Number       Duration
---------------------------------------------
1          HR10AB1234           3 hour(s)
2          UK07CD5678           2 hour(s)
```

**Result: ✅ PASS**

---

## Test Case 5: Check Parking Availability

### Input

```text
Choice: 4
```

### Expected Output

```text
---------- PARKING STATUS ----------

Total Parking Slots : 10
Occupied Slots      : 2
Available Slots     : 8
Status              : PARKING AVAILABLE
```

### Actual Output

```text
---------- PARKING STATUS ----------

Total Parking Slots : 10
Occupied Slots      : 2
Available Slots     : 8
Status              : PARKING AVAILABLE
```

**Result: ✅ PASS**

---

## Test Case 6: Vehicle Exit and Fee Calculation

### Input

```text
Choice: 2
Vehicle Number: HR10AB1234
```

### Expected Output

```text
Vehicle Found!

Vehicle Number : HR10AB1234
Parking Slot   : 1
Duration       : 3 hour(s)
Rate           : Rs. 20 per hour
Parking Fee    : Rs. 60

Vehicle Exit Successful!
Parking Slot 1 is now available.
```

### Actual Output

```text
Vehicle Found!

Vehicle Number : HR10AB1234
Parking Slot   : 1
Duration       : 3 hour(s)
Rate           : Rs. 20 per hour
Parking Fee    : Rs. 60

Vehicle Exit Successful!
Parking Slot 1 is now available.
```

**Result: ✅ PASS**

---

## Test Case 7: Vehicle Not Found

### Input

```text
Choice: 2
Vehicle Number: HR99XY9999
```

### Expected Output

```text
Vehicle not found in the parking area!
```

### Actual Output

```text
Vehicle not found in the parking area!
```

**Result: ✅ PASS**

---

## Test Case 8: Invalid Parking Duration

### Input

```text
Choice: 1
Vehicle Number: HR05AA1111
Parking Duration: -2
```

### Expected Output

```text
Invalid parking duration!
```

### Actual Output

```text
Invalid parking duration!
```

**Result: ✅ PASS**

---

## 📊 Sample Parking Status

```text
-------------------------------------
          PARKING STATUS
-------------------------------------
Total Parking Slots : 10
Occupied Slots      : 2
Available Slots     : 8
Status              : AVAILABLE
-------------------------------------
```

---

## 📂 Repository Structure

```text
Batch52_Team06_SmartCampusParking/
|
|-- README.md
|-- smart_parking.c
|-- presentation.pptx
|-- flowchart.png
|
`-- screenshots/
    |-- vehicle_entry.png
    |-- parking_status.png
    `-- vehicle_exit.png
```

---

## 🎯 Expected Outcome

The Smart Campus Parking System successfully:

- ✅ Records vehicle entries.
- ✅ Allocates parking slots.
- ✅ Stores vehicle registration numbers.
- ✅ Tracks parking duration.
- ✅ Calculates parking fees.
- ✅ Prevents duplicate entries.
- ✅ Displays currently parked vehicles.
- ✅ Displays parking availability.
- ✅ Processes vehicle exits.
- ✅ Detects when the parking area is full.

---

## 🏁 Conclusion

The **Smart Campus Parking System** demonstrates the practical application of fundamental C programming concepts to a real-world campus parking problem.

By using **structures, arrays, strings, functions, loops, conditional statements, and switch-case**, the program provides an organized way to manage vehicle entry, vehicle exit, parking availability, and parking charges.

This project helped our team understand how different C programming concepts can be combined to develop a simple and functional real-world application.

---

# 👩‍💻 Developed By

### Team 06 | Batch 52

- **Diksha**
- **Gurjeet Kaur Sandhu**
- **Mansi Rani**

---

### 🚗 Smart Campus Parking System 🅿️

**C Programming Mini Hackathon**

**Built with C | Designed for Smart Campus Parking**

⭐ **Thank You!** ⭐
