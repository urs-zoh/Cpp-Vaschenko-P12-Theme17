//
// Created by Zakhar Vashchenko on 20.01.23.
//

#ifndef HOMEWORK17_MAGAZINE_H
#define HOMEWORK17_MAGAZINE_H


#include "Publication.h"
#include <vector>
using std::vector;

class Magazine : public Publication {
    vector<string> articles;
public:
    Magazine(const string &name, const string &author, int year);

    void addArticle(const string &obj);
    void delArticle(int index);

    void show() const;
    string type() const;
};


#endif //HOMEWORK17_MAGAZINE_H
