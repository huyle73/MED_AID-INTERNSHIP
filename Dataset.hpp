//
//  Dataset.hpp
//  Med_Aid
//
//  Created by LE HUY on 7/21/20.
//  Copyright © 2020 LE HUY. All rights reserved.
//

#ifndef Dataset_hpp
#define Dataset_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name ;
    int id;
    double score;
    
public:
    //Student();
    Student();
    void setdata(string name, int id, double score);
    double getScore();
    string getName();
    int getId();
    void setName(string name);
    void setScore(double score);
    void setId(int id);
    void printStudent(Student* arr, int n);


    
};


#endif /* Dataset_hpp */
