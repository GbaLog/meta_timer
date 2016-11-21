/////////////////////////////////////////////////////////////////////////////////////////
#include "../timer.hpp"
#include <iostream>
#include <thread>
/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    std::cout << "Testing elapsed time:\n";
    tools::Timer timer;
    for( size_t it{}; it < 10; ++it )
    {
        std::this_thread::sleep_for(tools::milliseconds(100 * it));
        std::cout 
            << it << ": "
            << timer.get_elapsed_time<tools::milliseconds>()
            << std::endl;
        timer.restart();
    }
}