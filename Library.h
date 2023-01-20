//
// Created by Zakhar Vashchenko on 20.01.23.
//

#ifndef HOMEWORK17_LIBRARY_H
#define HOMEWORK17_LIBRARY_H

#include "Publication.h"

#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class Library {
    string name;
    vector<Publication*> content;
public:
    explicit Library(const string &name);

    const string &getName() const;
    void setName(const string &name);

    void showPublications() const;
    void showPublicationByYear(int year) const; //instead of find

    void addPublication(Publication* obj);
    void delPublication(int index);
};


#endif //HOMEWORK17_LIBRARY_H
