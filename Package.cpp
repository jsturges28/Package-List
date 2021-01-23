//
//  Package.cpp
//  ProjectAssignment4
//
//  Created by Jett Sturges on 7/31/20.
//  Copyright © 2020 Jacob Sturges. All rights reserved.
//

#include "Package.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Package::Package() {
    weightInOunce = 0.0;
    costPerOunce = 0.0;
    senderName = "";
    senderZip = "";
    recipientName = "";
    recipientZip = "";
}

Package::Package(double a, double b, string c, string d, string e, string f) {
    weightInOunce = a;
    costPerOunce = b;
    senderName = c;
    senderZip = d;
    recipientName = e;
    recipientZip = f;
}

void Package::print() {
    cout << "Package Info: " << endl;
    cout << "Type of package: " << getName() << endl;
    cout << "Weight in oz.: " << fixed << setprecision(2) << weightInOunce << endl;
    cout << "Cost: $" << calcCost() << endl;
    cout << "Sender: " << senderName << ", " << senderZip << endl;
    cout << "Recipient: " << recipientName << ", " << recipientZip << endl;
    
}

