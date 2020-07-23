//
//  HeapSort.hpp
//  Med_Aid
//
//  Created by LE HUY on 7/21/20.
//  Copyright © 2020 LE HUY. All rights reserved.
//

#ifndef HeapSort_hpp
#define HeapSort_hpp

#include <stdio.h>
#include "Dataset.hpp"
#include "Comparable.hpp"
class Sort : public Student, public Comparable {
    
    void buildHeap (Student arr[], int n, int i);
    public: void heapSort(Student arr[], int n);
};
#endif /* HeapSort_hpp */
