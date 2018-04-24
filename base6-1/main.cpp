//
//  main.cpp
//  base6-1
//
//  Created by suchao on 4/24/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input:\n";
    char lowcase;
    cin >> lowcase;
    cout << (char) (lowcase + 'A' - 'a') << endl;
    return 0;
}
