//
// Created by Zakhar Vashchenko on 20.01.23.
//

#include "Library.h"

Library::Library(const string &name) : name(name) {}

const string &Library::getName() const {
    return name;
}

void Library::setName(const string &name) {
    Library::name = name;
}

void Library::showPublications() const {
    for (int i = 0; i < content.size(); ++i) {
        std::cout << i+1 << "=================\n";
        content[i]->show();
    }
}

void Library::showPublicationByYear(int year) const {
    for (int i = 0; i < content.size(); ++i) {
        if(content[i]->getYear() == year){
            std::cout << i+1 << "=================\n";
            content[i]->show();
        }
    }
}

void Library::addPublication(Publication* obj) {
    content.push_back(obj);
}

void Library::delPublication(int index) {
    content.erase(content.begin()+index);
}
