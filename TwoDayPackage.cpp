//
//  TwoDayPackage.cpp
//  ProjectAssignment4
//
//  Created by Jett Sturges on 7/31/20.
//  Copyright © 2020 Jacob Sturges. All rights reserved.
//

#include "TwoDayPackage.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void TwoDayPackage::print() {
    
    cout << "Package Info: " << endl;
    cout << "Type of package: " << TwoDayPackage::getName() << endl;
    cout << "Weight in oz.: " << fixed << setprecision(2) << weightInOunce << endl;
    cout << "Cost: $" << TwoDayPackage::calcCost() << endl;
    cout << "Sender: " << senderName << ", " << senderZip << endl;
    cout << "Recipient: " << recipientName << ", " << recipientZip << endl;
    
}
