#include <iostream>

using namespace std;

#define LOOP_COUNTER_MAX 15

int main()
{
    for (unsigned int loop_counter = 0; loop_counter < LOOP_COUNTER_MAX; loop_counter++)
    cout << "Hello World " << loop_counter << endl;
}

// while 3