//
//  OvernightPackage.cpp
//  ProjectAssignment4
//
//  Created by Jett Sturges on 7/31/20.
//  Copyright © 2020 Jacob Sturges. All rights reserved.
//

#include "OvernightPackage.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void OvernightPackage::print() {
    
    cout << "Package Info: " << endl;
    cout << "Type of package: " << OvernightPackage::getName() << endl;
    cout << "Weight in oz.: " << fixed << setprecision(2) << weightInOunce << endl;
    cout << "Cost: $" << OvernightPackage::calcCost() << endl;
    cout << "Sender: " << senderName << ", " << senderZip << endl;
    cout << "Recipient: " << recipientName << ", " << recipientZip << endl;
    
}
