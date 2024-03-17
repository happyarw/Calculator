#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;

class Calculator {
    //Membervariables
private:
    double variable_a = 0;
    double variable_b = 0;

public:
    //Read Membervariables
    Calculator(double variable_a, double variable_b) {
        this->variable_a = variable_a;
        this->variable_b = variable_b;
    }

    //Creating Blueprints
    void addition(double a, double b) {
        double result = variable_a + variable_b;
        cout << "The result is " << result << ".";
    }
    void subtraction(double a, double b) {
        double result = variable_a - variable_b;
        cout << "The result is " << result << ".";
    }
    void multiplication(double a, double b) {
        double result = variable_a * variable_b;
        cout << "The result is " << result << ".";
    }
    void division(double a, double b) {
        double result = variable_a / variable_b;
        cout << "The result is " << result << ".";
    }
};

int main()
{
    //menu input
    int input = 0;

    //calculation variables
    double a = 0;
    double b = 0;

    //Beginn of menu text

    cout << "Hi there!" << endl;
    cout << "Welcome to my calculator." << endl << endl;

    cout << "1... Addidtion?" << endl;
    cout << "2... Subtraction?" << endl;
    cout << "3... Multiplication?" << endl;
    cout << "4... Division?" << endl << endl;

    cout << "What do you wanna do? ";

    cin >> input;
    //End of menu text


    //Evaluate input

    if (input >= 5 || input <= 0) {
        system("cls");
        cout << endl << endl << "Wrong Input, please try again!" << endl << endl;
        _sleep(2000);
        system("cls"); 
        main();

    } else {
        //Read variables
        system("cls");
        cout << endl << endl;
        cout << "Gimme those numbers: " << endl;
        cout << "Number 1: ";
        cin >> a;
        cout << "Number 2: ";
        cin >> b;
        cout << endl << endl;

        //Creating an object
        Calculator calculation(a, b);
        
        //tell the object what it should do
        if (input == 1) {
            calculation.addition(a, b);
        }
        else {
            if (input == 2) {
                calculation.subtraction(a, b);
            }
            else {
                if (input == 3) {
                    calculation.multiplication(a, b);
                }
                else {
                    if (input == 4) {
                        calculation.division(a, b);
                    }
                }
            }
        }
    }
    cout << endl << endl;
    _sleep(1000);

    //Exit the Programm or calculate anything else?

    cout << "Do you want to calculate something else? (y/n)";
    string closingInput = "";
    cin >> closingInput;

    if (closingInput == "y") {
        system("cls");
        main();
    }
    else {
        if (closingInput != "y") {
            system("cls");
            cout << endl << endl;
            cout << "Thank you for choosing my Calculator!" << endl << endl;
            _sleep(1000);
            return 0;
        }
    }
}