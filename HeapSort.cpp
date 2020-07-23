//
//  HeapSort.cpp
//  Med_Aid
//
//  Created by LE HUY on 7/21/20.
//  Copyright © 2020 LE HUY. All rights reserved.
//

#include "HeapSort.hpp"
#include "Dataset.hpp"
#include "Comparable.hpp"
#include <iostream>
#include <algorithm>
using namespace std;
//Student ::Student() {
//   
//}

void Sort ::buildHeap (Student arr[], int n, int i) {
    int father = i;
    int left = 2*i +1;
    int right = 2*i + 2;
    
    if(left < n && arr[left].getName() > arr[father].getName()) {
        father = left;
    }
    if(right < n && arr[right].getName() > arr[father].getName()) {
        father = right;
    }
    
    if(father != i) {
        swap(arr[i], arr[father]);
        buildHeap(arr, n, father);
    }
}

 void Sort:: heapSort(Student arr[], int n) {
    for(int i = n/2; i >=0; i--) {
       buildHeap(arr, n, i);
    }
    
    for(int i = n-1; i >0; i--) {
        swap(arr[0], arr[i]);
        
       buildHeap(arr, i, 0);
    }
}







