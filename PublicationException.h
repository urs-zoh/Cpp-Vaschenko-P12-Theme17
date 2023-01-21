//
// Created by Zakhar Vashchenko on 20.01.23.
//

#ifndef HOMEWORK17_PUBLICATIONEXCEPTION_H
#define HOMEWORK17_PUBLICATIONEXCEPTION_H

#include <string>
using std::string;

class PublicationException {
public:
    virtual string Message() const = 0;
};

class BookException: public PublicationException {
public:
    string Message() const override{
        return "You cant enter empty string\n";
    }
};

class EditionYearException: public PublicationException {
public:
    string Message() const override{
        return "Impossible to create a publication - the year you've entered is incorrect";
    }
};

#endif //HOMEWORK17_PUBLICATIONEXCEPTION_H
