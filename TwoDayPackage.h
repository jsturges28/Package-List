//
//  TwoDayPackage.h
//  ProjectAssignment4
//
//  Created by Jett Sturges on 7/31/20.
//  Copyright © 2020 Jacob Sturges. All rights reserved.
//

#ifndef TwoDayPackage_h
#define TwoDayPackage_h
#include "Package.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class TwoDayPackage : public Package {

protected:
    double flatFee;

public:
    // default constructor
    TwoDayPackage() : Package()
    { flatFee = 5.0; }
    
    // parameterized constructor
    TwoDayPackage(double a, double b, string c, string d, string e, string f, double g) : Package(a, b, c, d, e, f)
    { flatFee = g; }
    
    // redefine calcCost() function from Package class
    double calcCost() override
    { return Package::calcCost() + flatFee; }
    
    // getters and setters
    
    double getFlatFee() const
    { return flatFee; }
    
    void setFlatFee(double a)
    { flatFee = a; }
    
    string getName() override
    { return "Two Day Package"; }
    
    void print() override;
    
    // destructor
    ~TwoDayPackage()
    {}
};

#endif /* TwoDayPackage_h */
