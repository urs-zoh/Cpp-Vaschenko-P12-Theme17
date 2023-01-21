//
// Created by Zakhar Vashchenko on 20.01.23.
//

#include "Magazine.h"

Magazine::Magazine(const string &name, const string &author, int year) : Publication(name, author, year) {
    if (year <= 0)
        throw new EditionYearException();
}

void Magazine::addArticle(const string &obj) {
    articles.push_back(obj);
}

void Magazine::delArticle(int index) {
    articles.erase(articles.begin()+index);
}

void Magazine::show() const {
    if(name.empty() || author.empty())
        throw new BookException();
    Publication::show();
    for (int i = 0; i < articles.size(); ++i) {
        std::cout << i+1 << ". " << articles[i] << std::endl;
    }
}

string Magazine::type() {
    return "Magazine";
}
