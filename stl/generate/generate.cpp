
#include <algorithm>    //generate
#include <cstdlib>      //std rand
#include <vector>
#include <iostream>

template <typename Container>
void print( Container const &cont )
{
    if( cont.empty() )  { std::cout << "Empty!" << std::endl ; return ; }
    for( const auto &x : cont ) { std::cout << x << ", " ; }
    std::cout << std::endl ;
}

void generate_test()
{
    std::cout << "#### " << __FUNCTION__ << " ####" << std::endl ;

    std::vector<int>    v( 10 ) ;

    std::cout << "std::generate" << std::endl ;
    std::generate( std::begin( v ) , std::end( v ) ,
            [](){ return std::rand() % 100 ; } ) ;
    print( v ) ;

    std::cout << "std::generate_n" << std::endl ;
    std::generate_n( std::begin( v ) , v.size() ,
                   [](){ return std::rand() % 100 ; } ) ;
    print( v ) ;
    std::cout << "#### " << __FUNCTION__ << " ####" << std::endl ;
}
