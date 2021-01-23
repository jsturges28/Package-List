//
//  Package.h
//  ProjectAssignment4
//
//  Created by Jett Sturges on 7/31/20.
//  Copyright © 2020 Jacob Sturges. All rights reserved.
//

#ifndef Package_h
#define Package_h
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class Package {

protected:
    double weightInOunce;
    double costPerOunce;
    string senderName;
    string senderZip;
    string recipientName;
    string recipientZip;

public:
    Package();
    Package(double, double, string, string, string, string);
    
    // Getters and setters
    
    double getWeight() const
    { return weightInOunce; }
    
    double getCost() const
    { return costPerOunce; }
    
    string getSenderName() const
    { return senderName; }
    
    string getSenderZip() const
    { return senderZip; }
    
    string getRecipientName() const
    { return recipientName; }
    
    string getRecipientZip() const
    { return recipientZip; }
    
    void setWeight(double a)
    { weightInOunce = a; }
    
    void setCost(double a)
    { costPerOunce = a; }
    
    void setSenderName(string a)
    { senderName = a; }
    
    void setSenderZip(string a)
    { senderZip = a; }
    
    void setRecipientName(string a)
    { recipientName = a; }
    
    void setRecipientZip(string a)
    { recipientZip = a; }
    
    virtual string getName()
    { return "Package"; }
    
    virtual double calcCost()
    { return weightInOunce * costPerOunce; }
    
    virtual void print();

    // destructor
    virtual ~Package()
    {}
};

#endif /* Package_h */
