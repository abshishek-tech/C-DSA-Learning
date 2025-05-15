#include <iostream>                             // preprocessor statement, gets evaluated bfore compilation

int main()
{
    std::cout<< "Hello World" << " hahaha";     // cout<< "printed shiii" <<"printed shiii part2"
    std::cin.get();                             // cin.get --> continues running after we press enter, also creates new line
    std::cout<<"hello" << std::endl;            // endl -> new line 
    return 0;                                   // no need to return 0 but only for main function which is a special case
}
