//
// Created by Zakhar Vashchenko on 20.01.23.
//

#include "Book.h"

Book::Book(const string &name, const string &author, int year, const string &resume) : Publication(name, author, year),
                                                                                       resume(resume) {
    if (year <= 0)
        throw new EditionYearException();
}

const string &Book::getResume() const {
    return resume;
}

void Book::setResume(const string &resume) {
    Book::resume = resume;
}

void Book::show() const {
    if(name.empty() || author.empty())
        throw new BookException();
    Publication::show();
    std::cout << "Resume: " << resume
    << std::endl;
}

string Book::type() {
    return "Book";
}
