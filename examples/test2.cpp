/////////////////////////////////////////////////////////////////////////////////////////
#include "../timer.hpp"
#include <thread>
#include <iostream>
/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    std::cout << "Testing gone():\n";
    tools::Timer timer;
    for( size_t it{}; it < 10; ++it )
    {
        std::this_thread::sleep_for(tools::milliseconds(100 * it));
        std::cout << it << ": ";
        if( timer.gone( tools::milliseconds(500) ) )
        {
            std::cout << "gone" << std::endl;
        }
        else
        {
            std::cout << "not gone" << std::endl;
        }
    }
}