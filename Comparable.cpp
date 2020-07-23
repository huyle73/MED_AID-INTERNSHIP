//
//  Comparable.cpp
//  Med_Aid
//
//  Created by LE HUY on 7/22/20.
//  Copyright © 2020 LE HUY. All rights reserved.
//

#include "Comparable.hpp"
    template <class T>
    T compare (T a, T b){
        if(a > b){
            return a;
        }
        else {
            return b;
        }
    }
