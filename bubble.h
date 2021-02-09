//
// Created by Matthew on 1/24/2021.
//

#ifndef BUBBLESORT_BUBBLE_H
#define BUBBLESORT_BUBBLE_H

#include <vector>
#include <chrono>
#include <string>

using namespace std;
//This function will take a vector arg and return a sorted version of that vector. It will also time itself and output
//this information to the console.
vector<int> bubbleSort(vector<int> vec){
    cout << "Howdy! The time it took to sort your " + to_string(vec.size()) + " element vector was: ";
    auto start = chrono::steady_clock::now();

    //This flag will be true if the vector is sorted.
    bool sorted = false;
    int size = vec.size();

    while(sorted == false) {
        int count = 0;
        for (int i = 0; i < (size - 1); i++) {

            //Compare the current element to the next element.
            if (vec[i] > vec[i + 1]) {
                int tmp = vec[i + 1];
                vec[i + 1] = vec[i];
                vec[i] = tmp;

            } else if (vec[i] <= vec[i + 1]) count ++;

            if (count == (size -1)) sorted = true;

        }

    }
    auto end = chrono::steady_clock::now();
    chrono::duration<double> diff = end - start;
    cout << diff.count() << " seconds(?)" << endl;

    return vec;
}

#endif //BUBBLESORT_BUBBLE_H
