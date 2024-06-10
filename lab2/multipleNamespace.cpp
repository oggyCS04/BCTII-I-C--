#include <iostream>

namespace BEI{
    char subject[30] = "Electronics";
    int room = 401;

    void printSubject(){
        std::cout<<subject<<"\n";
    }

    void printRoom(){
        std::cout<<room<<"\n";
    }
}

namespace BCT{
    char subject[30] = "Software Engineering";
    int labRoom = 402;

    void printSubject(){
        std::cout<<subject<<"\n";
    }

    void printLabRoom(){
        std::cout<<labRoom<<"\n";
    }
}


int main(){

    using namespace BEI;
    using namespace BCT;

    printRoom();
    printLabRoom();

    BEI::printSubject();
    BCT::printSubject();

    return 0;
}