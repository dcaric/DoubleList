//
//  Node.hpp
//  DoubleList
//
//  Created by Dario Caric on 12.01.2024..
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Node {
            
    
public:
    string name;
    Node *next;
    Node *prev;
    
    Node(string);
};

#endif /* Node_hpp */
