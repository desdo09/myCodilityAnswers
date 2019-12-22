#include <iostream>

int solution(int N) {
    // Biggest gap
    int biggest = 0;
    //Temporary counter
    int counter = -1; // Set as not initialized, [until the first 1]
    //For in all bits or until N is 0
    for (size_t i = 0; i < sizeof(N) * 8 && (N >> i); ++i) {
        //In order to get a bit:
        // + Shift right then make and AND [operator] with 1 to get if the last bit its an 1
        if (((N >> i) & 1)) {
            //Check and update
            if (counter > biggest)
                biggest = counter;
            counter = 0;
            continue;
        }

        //In case that counter has been initialized updated counter
        if (counter != -1)
            counter++;
    }


    return biggest;

}
