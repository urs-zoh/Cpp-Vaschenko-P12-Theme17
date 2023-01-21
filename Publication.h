//
// Created by Zakhar Vashchenko on 20.01.23.
//

#ifndef HOMEWORK17_PUBLICATION_H
#define HOMEWORK17_PUBLICATION_H

#include <iostream>
#include <string>
#include "PublicationException.h"
using std::string;

class Publication {
protected:
    string name;
    string author;
    int year;
public:
    Publication(const string &name, const string &author, int year);

    const string &getName() const;
    void setName(const string &name);

    const string &getAuthor() const;
    void setAuthor(const string &author);

    int getYear() const;
    void setYear(int year);

    virtual void show() const;
    string type() const;
};

#endif //HOMEWORK17_PUBLICATION_H
