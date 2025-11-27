ACTIVITY 8
AIM: 
Basic File Operations


THEME:
Create a C program to perform various file operations, including reading
from a file, writing to a file, and displaying the contents of a file. The
program should provide options for the user to select the desired operation
from a menu. Upon selecting an operation, the program should execute the
corresponding functionality using appropriate file handling techniques.
Additionally, the program should handle errors such as file not found or
permission issues gracefully and provide informative messages to the user.



RESEARCH: 

https://www.w3schools.com/c/

https://www.geeksforgeeks.org/c/c-programming-language/

https://www.tutorialspoint.com/cprogramming/c_structures.htm


HOW IT WORKS:
📄 PROGRAM WORKING EXPLANATION (REPORT VERSION)
Car Search in File Using fscanf() and strcmp()
This program is designed to read car details from a text file and allow the user to search for a car by entering its name. The file contains multiple records, where each record stores:
Car name


Rent per day


Status (Available / Booked)


The program uses file handling functions to read the file and compare each car name with the user’s input.

1. Opening the File
The program begins by opening the file cars.txt in read mode.
 If the file cannot be opened, an error message is displayed and the program stops.

2. Taking Input from the User
The user is asked to enter the car name they want to search.
 This name is stored in the character array search.

3. Reading the File Line-by-Line
The main logic of the program is inside a loop that uses:
fscanf(f, "%s %f %s", car, &rent, status)

This reads one record at a time from the file:
%s → reads the car name


%f → reads the rent per day


%s → reads the status (Available / Booked)


The loop continues until the end of the file is reached.

4. Comparing the Car Name
For each record, the program compares:
user input (search)  
vs  
current car name (car)

This is done using strcmp().
If the two names match, it means the car has been found.


If they do not match, the program continues reading the next line.



5. Displaying the Matching Car Record
When a match is found:
A message “Car Found!” is displayed.


The program prints:


Car name


Rent per day


Status


If the status is Available, it prints that the car is available.
 Otherwise, it prints that the car is booked.
After displaying the details, the loop stops because the search is complete.

6. If No Match is Found
If the program reaches the end of the file without finding a match,
 it displays:
Car not found in file.

This means the user's input does not exist in the stored records.

7. Closing the File
Finally, the file is closed using fclose(f) to free resources.

