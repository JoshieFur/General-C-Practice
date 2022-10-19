//
//  Header.h
//  Workkkkk
//
//  Created by Joshie on 10/17/22.
//

#ifndef Header_h
#define Header_h


// functions
namespace functions {
class basic {
public:
    void output_functions();; //Outputs how to use functions
    
    void math(double, double, double, double&);; //Does the actual calculation
    
    void display(double, double, double, double*);; //Displays the current calculation
    
    void resolve(double&, int&, double&, double*&);; //Ends current calculation and sets up for next loop or exit.
};
}

#endif /* Header_h */
