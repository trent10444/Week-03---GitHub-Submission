#include <iostream>
#include <iomanip> 
#include <string>
#include <fstream>

using namespace std;//Dont need to do std after every line that needs it.

int main()
{
   
    string Name;
    char Fragile;
    double Total;
    string Place;
    int fc = 0;
    double Cost = 0;
    double Ftotal = 0;


    cout << ".................................................." << endl;
    cout << "ITCS 2530 - Programming Assignment for week #3" << endl;
    cout << ".................................................." << endl;

    cout << "Please enter the item name (no spaces)...........:";//Asks to enter the name of the item
    getline(cin, Name); 
    cout << "Please enter destination. (usa/can/aus/mars)..........:";//Asks to enter the name of the place the item will be shipped to 
    getline(cin, Place);
    cout << "Is the item fragile? (y=yes/n=no)................:";//Asks if the item is fragile
    cin >> Fragile; 
    
    switch (Fragile)// Checks to see if Fragile is equal to Y or N and if not it will show error and close
    {
    case'y':
        Fragile = 'Y';
    case'Y':
    case'n':
        Fragile = 'N';
    case'N':
            fc++;
           break;
    default:
        cout << "Invalid entry, exiting" << endl;
        return 0;
    }
        
        
    cout << "Please enter your order total....................:";
    cin >> Total; //Asks the user to enter order total

    //I tried having if statements to check for usa, can, and aus and I could not find the correct way to do it.
    /*cout << "Please enter destination. (usa/can/aus)..........:";
    getline(cin, Place);*/

    //if (Place == "usa") {
    //   Place = "USA";
    //}
    //else if (Place == "can") {
    //    Place = "CAN";
    //}
    //else if (Place == "aus") {
    //    Place = "AUS";
    //}
    //else {
    //    cout << "Error";
    //}
    // 

    //Checks for total amount and destination to find cost
    if (Total < 50 && Place == "usa") {
        Cost = 6;
    }
    else if (Total < 100 && Place == "usa") {
        Cost = 9;
    }
    else if (Total < 150 && Place == "usa") {
        Cost = 12;
    }
    else if (Total > 150 && Place == "usa") {
        Cost = 0;
    }
    else if (Total < 50 && Place == "can") {
        Cost = 8;
    }
    else if (Total < 100 && Place == "can") {
        Cost = 12;
    }
    else if (Total < 150 && Place == "can") {
        Cost = 15;
    }
    else if (Total > 150 && Place == "can") {
        Cost = 0;
    }
    else if (Total < 50 && Place == "aus") {
        Cost = 10;
    }
    else if (Total < 100 && Place == "aus") {
       Cost = 14;
    }
    else if (Total < 150 && Place == "aus") {
        Cost = 17;
    }
    else if (Total > 150 && Place == "aus") {
        Cost = 0;
    }
    else if (Total < 50 && Place == "mars") {
        Cost = 1000;
    }
    else if (Total < 100 && Place == "mars") {
        Cost = 1400;
    }
    else if (Total < 150 && Place == "mars") {
        Cost = 1700;
    }
    else if (Total > 150 && Place == "mars") {
        Cost = 000;
    }

    //(Y)I tried checking for if Fragile is == 'Y' and it would not work so i commented it out and just kept the original

    /*if (Total < 50 && Place == "usa" && Fragile == 'Y') {
        Cost = 8;
    }
    else if (Total < 100 && Place == "usa" && Fragile == 'Y') {
        Cost = 11;
    }
    else if (Total < 150 && Place == "usa" && Fragile == 'Y') {
        Cost = 14;
    }
    else if (Total > 150 && Place == "usa" && Fragile == 'Y') {
        Cost = 2;
    }
    else if (Total < 100 && Place == "can" && Fragile == 'Y') {
        Cost = 10;
    }
    else if (Total < 100 && Place == "can" && Fragile == 'Y') {
        Cost = 14;
    }
    else if (Total < 150 && Place == "can" && Fragile == 'Y') {
        Cost = 17;
    }
    else if (Total > 150 && Place == "can" && Fragile == 'Y') {
        Cost = 2;
    }
    else if (Total < 100 && Place == "aus" && Fragile == 'Y') {
        Cost = 12;
    }
    else if (Total < 100 && Place == "aus" && Fragile == 'Y') {
        Cost = 16;
    }
    else if (Total < 150 && Place == "aus" && Fragile == 'Y') {
        Cost = 19;
    }
    else if (Total > 150 && Place == "aus" && Fragile == 'Y') {
        Cost = 2;
    }
    //(N) 
    /*else if (Total < 50 && Place == "usa" && Fragile == 'N') {
        Cost = 6;
    }
    else if (Total < 100 && Place == "usa" && Fragile == 'N') {
        Cost = 9;
    }
    else if (Total < 150 && Place == "usa" && Fragile == 'N') {
        Cost = 12;
    }
    else if (Total > 150 && Place == "usa" && Fragile == 'N') {
        Cost = 0;
    }
    else if (Total < 100 && Place == "can" && Fragile == 'N') {
        Cost = 8;
    }
    else if (Total < 100 && Place == "can" && Fragile == 'N') {
        Cost = 12;
    }
    else if (Total < 150 && Place == "can" && Fragile == 'N') {
        Cost = 15;
    }
    else if (Total > 150 && Place == "can" && Fragile == 'N') {
        Cost = 0;
    }
    else if (Total < 100 && Place == "aus" && Fragile == 'N') {
        Cost = 10;
    }
    else if (Total < 100 && Place == "aus" && Fragile == 'N') {
        Cost = 14;
    }
    else if (Total < 150 && Place == "aus" && Fragile == 'N') {
        Cost = 17;
    }
    else if (Total > 150 && Place == "aus" && Fragile == 'N') {
        Cost = 0;
    }*/

    Ftotal = Cost + Total;// Math for total shipping cost
    
    cout << " " << endl; 
    cout << "Your item is............................" << Name << endl; // Outputs the items name
    cout << "Your shipping cost is...................$" << Cost << endl; // Outputs the items cost
    cout << "You are shipping to....................." << Place << endl; // Outputs where the item is shipping to
    cout << "Your total shipping costs are...........$" << Ftotal << endl; // Outputs the total shipping cost
    cout << " " << endl;
    cout << "----------------------------------------Thank You!" << endl;


    ofstream fs;
    fs.open("Order.txt");// opens Order.txt
    fs << ".................................................." << endl;
    fs << "Order details" << endl;// I didn't know exactly how to print the entire function onto a .txt
    fs << ".................................................." << endl;
    fs  << "Your item is............................" << Name << endl; // Outputs the items name
    fs << "Your shipping cost is...................$" << Cost << endl; // Outputs the items cost
    fs << "You are shipping to....................." << Place << endl; // Outputs where the item is shipping to
    fs << "Your total shipping costs are...........$" << Ftotal << endl;; // prints member 1
    fs.close(); // closes the Order.txt

    system("pause"); //pauses so you can results
    return 0;
}
