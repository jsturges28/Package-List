//
//  OvernightPackage.h
//  ProjectAssignment4
//
//  Created by Jett Sturges on 7/31/20.
//  Copyright © 2020 Jacob Sturges. All rights reserved.
//

#ifndef OvernightPackage_h
#define OvernightPackage_h
#include "Package.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class OvernightPackage : public Package {

protected:
    double extraFeePerOunce;

public:
    // default constructor
    OvernightPackage() : Package()
    { extraFeePerOunce = 0.0; }
    
    // parameterized constructor
    OvernightPackage(double a, double b, string c, string d, string e, string f, double g) : Package(a, b, c, d, e, f)
    { extraFeePerOunce = g; }
    
    // redefine calcCost() function from Package class. We will be charging an extra $0.10 per ounce.
    double calcCost() override
    { return Package::calcCost() + (Package::weightInOunce * extraFeePerOunce); }
    
    // getters and setters
    double getExtraFeePerOunce() const
    {return extraFeePerOunce; }
    
    void setExtraFeePerOunce(double a)
    { extraFeePerOunce = a; }
    
    string getName() override
    { return "Overnight Package"; }
    
    void print() override;
    
    // destructor
    ~OvernightPackage()
    {}
    
};

#endif /* OvernightPackage_h */
