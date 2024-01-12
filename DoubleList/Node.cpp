//
//  Node.cpp
//  DoubleList
//
//  Created by Dario Caric on 12.01.2024..
//

#include "Node.hpp"

Node::Node(string setName) {
    name = setName;
    next = nullptr;
    prev = nullptr;
}
