//
//  mainTest.cpp
//  Med_Aid
//
//  Created by LE HUY on 7/22/20.
//  Copyright © 2020 LE HUY. All rights reserved.
//

#include "mainTest.hpp"
#include "Comparable.hpp"
#include "HeapSort.hpp"
#include "Dataset.hpp"
#include <iostream>
using namespace std;
    int main () {
    const int n = 4;
    Student arr[n];
    //student 1
    arr[0].setName("Hoa");
    arr[0].setId(001);
    arr[0].setScore(8.7);
//    // student 2
    arr[1].setName("Huy");
    arr[1].setId(002);
    arr[2].setId(9.1);
//    //student 3
    arr[2].setName("Nhung");
    arr[2].setId(003);
    arr[2].setScore(9.5);
//    //student 4
    arr[3].setName("Chi");
    arr[3].setId(004);
    arr[3].setScore(7.2);
//
    Sort a;
    Student b;
        
    a.heapSort(arr, n);
    b.printStudent(arr, n);
    
    return 0;
   }
