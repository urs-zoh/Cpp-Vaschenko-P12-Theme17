//
// Created by Zakhar Vashchenko on 20.01.23.
//

#ifndef HOMEWORK17_BOOK_H
#define HOMEWORK17_BOOK_H


#include "Publication.h"
#include "PublicationException.h"

class Book : public Publication {
    string resume;
public:
    Book(const string &name, const string &author, int year, const string &resume);

    const string &getResume() const;
    void setResume(const string &resume);

    void show() const;
    static string type() ;
};


#endif //HOMEWORK17_BOOK_H
