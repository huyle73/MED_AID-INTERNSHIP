//
//  Dataset.cpp
//  Med_Aid
//
//  Created by LE HUY on 7/21/20.
//  Copyright © 2020 LE HUY. All rights reserved.
//

#include "Dataset.hpp"
#include <iostream>

using namespace std;


Student ::Student() {

}

void Student::setdata(string name, int id, double score) {
    this -> name = name;
    this -> id = id;
    this -> score = score;
};

    
    double Student :: getScore() {
        return this->score;
    }

    string Student:: getName() {
        return this-> name;
    }


    int Student:: getId() {
    return this -> id;
    }


    void Student:: setName(string name) {
        this -> name = name;
    }
    
    void Student:: setScore(double score) {
        this -> score = score;
        
    }

    void Student :: setId(int id) {
        this -> id = id;
    }



     void Student:: printStudent(Student* arr, int n){
        for(int i = 0; i < n; i++) {
            cout << arr[i].getName() << " ";
        }
        cout << "\n";
}





