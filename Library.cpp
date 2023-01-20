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
