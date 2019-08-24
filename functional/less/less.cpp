
#include <functional>
#include <iostream>

void less_test()
{
    auto l = std::less<int>() ;
    std::cout << std::boolalpha << l( 20 , 19 ) << std::endl ;
}
