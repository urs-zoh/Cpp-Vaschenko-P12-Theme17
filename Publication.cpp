//
// Created by Zakhar Vashchenko on 20.01.23.
//

#include "Publication.h"

Publication::Publication(const string &name, const string &author, int year) : name(name), author(author), year(year) {
    if (year <= 0)
        throw new EditionYearException();
}

const string &Publication::getName() const {
    return name;
}

void Publication::setName(const string &name) {
    Publication::name = name;
}

const string &Publication::getAuthor() const {
    return author;
}

void Publication::setAuthor(const string &author) {
    Publication::author = author;
}

int Publication::getYear() const {
    return year;
}

void Publication::setYear(int year) {
    Publication::year = year;
}

void Publication::show() const {
    std::cout << "Name: " << name
              << "\nAuthor: " << author
              << "\nYear: " << year
              << std::endl;
}

string Publication::type() const {
    return "Publication";
}