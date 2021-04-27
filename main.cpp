//
// Created by pc on 27.04.2021.
//
#include <iostream>
#include <vector>


struct change {
    change() : rate_(1), from_(0), to_(0) {};

    change(unsigned int from, unsigned int to, unsigned int rate) : from_(from), to_(to), rate_(rate) {};
    unsigned rate_;
    unsigned from_;
    unsigned to_;

};

struct node {
    node(unsigned value) : value_(value) {};

    void add_connection(change new_route) {
        list_of_connections_.push_back(new_route); }

    unsigned value_;
    std::vector<change> list_of_connections_;
};


int main() {

    std::cout << "hi";



    return 0;
}

