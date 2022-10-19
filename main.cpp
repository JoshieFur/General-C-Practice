//
//  main.cpp
//  Workkkkk
//
//  Created by Joshie on 10/17/22.
//

#include <iostream>
#include "Header.h"
#include <cmath>

using namespace std;
using namespace functions;

double variable;
double* variable_secondary_check = NULL;
int operation;
double variable_secondary;
double result;

int main() {
  
    cout << "Enter your first number." << endl;
    cin >> variable;
  
    do {
            cout << "Chose your first function" << endl;
            basic b;
            b.output_functions();
            
            cin >> operation;
    }
    while(operation > 4 || operation < 1); //Requires the imput of a valid operation before cont.
    
    basic b;
    b.display(variable, operation, variable_secondary, variable_secondary_check);
    
    cout << "Enter the next number" << endl;
    cin >> variable_secondary;
    variable_secondary_check = &variable_secondary;

    b.math(operation, variable, variable_secondary, result);
    b.display(variable, operation, variable_secondary, variable_secondary_check);
    b.resolve(result, operation, variable, variable_secondary_check);
    
    do { cout << "Select another operation to continue, or imput 5 to exit." << endl;
        cin  >> operation;
    }
    while (operation > 5 || operation < 1);
    
    if(operation == 5) {
        return 0;
    }
  
    while(operation != 5) {
        b.display(variable, operation, variable_secondary, variable_secondary_check);
        
        cin >> variable_secondary;
        variable_secondary_check = &variable_secondary;
        
        b.display(variable, operation, variable_secondary, variable_secondary_check);
        b.math(operation, variable, variable_secondary, result);
        
        b.resolve(result, operation, variable, variable_secondary_check);
        
        do { cout << "Select another operation to continue, or imput 5 to exit." << endl;
            cin  >> operation;
        }
        while (operation > 5 || operation < 1);
        
        if(operation == 5) {
            return 0;
        }
    }
}
