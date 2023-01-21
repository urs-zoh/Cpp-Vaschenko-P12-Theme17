#include "Library.h"
#include "Book.h"
#include "Magazine.h"
#include "PublicationException.h"

int main() {
    Library library("CahrkiwLibrary");
    try{
        library.addPublication(new Book("Foundation", "Isaac Asimov", 0, "incredible book"));
    }catch(PublicationException * obj){std::cout << obj->Message() << std::endl;} //напишите, а как надо было сделать что
    // бы оно вывело год потом я не понял как его туда подать или как его доставать из не созданного объекта
    library.addPublication(new Magazine("Vogue May", "", 2020));
    try{
        library.showPublications();
    }catch(PublicationException * obj){std::cout << obj->Message() << std::endl;}
    return 0;
}
