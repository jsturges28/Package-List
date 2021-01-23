//
//  main.cpp
//  ProjectAssignment4
//
//  Created by Jett Sturges on 7/31/20.
//  Copyright © 2020 Jacob Sturges. All rights reserved.
//

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// function prototype
void displayPackage(const Package *);

int main() {
    // insert code here...

        Package* pkgList[3];

        pkgList[0] = new Package(20.0, 2.0, "John", "77777", "Jane", "55555");

        pkgList[1] = new TwoDayPackage(15.0, 3.0, "Mike", "82828", "Dan", "09990", 5.0);

        pkgList[2] = new OvernightPackage(10.0, 1.5, "Willis", "54321", "Stephanie", "93757", 1.0);

       

        for (int i = 0; i<3; i++){

            pkgList[i]->print() ;

        }

        return 0;

    
}
