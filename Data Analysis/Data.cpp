#include <iostream>
#include <conio.h>
#include <fstream>

void Readfile();
void Directory();
void Particle();
void Gas();

void Readfile(char file[], char dir[])
{
    FILE *filePtr; // make a new file pointer called filePtr
    int i = 0, j = 0;
    char filename[40];
    char data[100]; // buffer to store data read in
    while (dir[i] != '\0')
    {
        filename[j] = dir[i];
        i++;
        j++;
    }
    i = 0;
    while (file[i] != '\0')
    {
        filename[j] = file[i];
        i++;
        j++;
    }
    filename[j] = '\0';
    filePtr = fopen(filename, "r+");
    if (filePtr != NULL)
    {
        while (fscanf(filePtr, "%s", &data) != EOF)
        {
            std::cout << data << std::endl;
            // print out the data read in
        }
        fclose(filePtr); // close the file
    }
    else
    {
        printf("Could not find file\n\r");
    }
}
void Directory(FILE *dirPtr)
{
    char data[100]; // buffer to store data read in
    if (dirPtr != NULL)
    {
        while (fscanf(dirPtr, "%s", &data) != EOF)
        {
            std::cout << data << std::endl;
            // print out the data read in
        }
        fclose(dirPtr); // close the file
    }
    else
    {
        printf("Could not find file\n\r");
    }
}
void Particle()
{
    FILE *dirPtr;              // make a new file pointer called dirPtr
    char dir[20] = "ADL07p\\"; // Directory address
    char file[20];
    dirPtr = fopen("Particle.txt", "r+"); // open a file to read from the file
    Directory(dirPtr);
    std::cout << "\nChoose the file name to analyse:" << std::endl;
    std::cin >> file;
    Readfile(file, dir); // Calling to read files in the folder
}
void Gas()
{
    FILE *dirPtr;              // make a new file pointer called dirPtr
    char dir[20] = "ADL07g\\"; // Directory address
    char file[20];
    dirPtr = fopen("Gas.txt", "r+"); // open a file to read from the file
    Directory(dirPtr);
    std::cout << "\nChoose the file name to analyse:" << std::endl;
    std::cin >> file;
    Readfile(file, dir); // Calling to read files in the folder
}
int main()
{
    int x;
    std::cout << "Turing Moore Engineering Environmental Data Analyser 1.0" << std::endl; // Welcome page
    std::cout << "Dushyant Sharma" << std::endl;                                          // Display your name
    std::cout << "Your Student ID" << std::endl;                                          // Display Your Student ID
    std::cout << "Date the assignment is due in the format: dd/mm/yyyy" << std::endl;     // Due Date, It's a great movie watch it
    std::cout << "The level of mark you are aiming to achieve" << std::endl;              // Marks
    std::cout << std::endl;
    std::cout << "Choose which file to access: " << std::endl;
    std::cout << "1. Particle Data" << std::endl;
    std::cout << "2. Gas Data" << std::endl;
    std::cin >> x;
    if (x == 1)
    {
        Particle(); // Call funtion for 1st option
    }
    else if (x == 2)
    {
        Gas(); // Call funtion for 2nd option
    }
    else
        std::cout << "Not Valid" << std::endl; // Error case
    return 0;
}
