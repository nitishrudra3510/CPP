// vectors in c++ STL
/*
it is as dynamically arrays with the ability to resize themseleves automaticallly.
when the element in inserted or deleted.

it placed in continuous memory 

time complexity:
if the inserted at the end then takes different time.
if removing the element from the last takes only constant tiems because no resizing happens.

Inserting and erasing at the beginning or in the middle is linear in time.

what is vector in c++ STL?
it is the class templates that conatins the vector conatiner and its member functions.

it defined the inside <vector> header file.


Key Characteristics of Vectors:

dynamically sizing: it is automatically resisze the size of the vector when the insert or delete the element. 
it also main reson of vectors are prefered over traditional arrays in many solutions.

Effiient Access: vecots elements are stored in the contiguous memory locations,
you can acees element in the consonant time using index or similar to arrays.

insertion and deletion: insertion or deletion elements are removed from the last it takes constant time 
and if the element has removed or add in the starting or middle position it takes linaer time duw to shifting of the element.

*/

// vectors declared:

//vector<datatype> vectorName;

// 1. installing using lists: 
//.  vector<datatype> name({value1, value2,.....});

// 2. Initialization With a Single Value
//vector<dataType> name(size, value); 


//3.   Initialization From Another Vector
//.  vector<dataType> name(other_vec);

// #include <iostream>
// #include <vector>

// int main() {
//     // Traditional Initialization Using List
//     int arr[] = {1, 2, 3, 4, 5}; // Array with elements
//     std::vector<int> vec(arr, arr + 5); // Initializing vector using array

//     // Output elements
//     for (int i = 0; i < vec.size(); i++) {
//         std::cout << vec[i] << " ";
//     }

//     return 0;
// }

// 2.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec(5, 10);

//     for(int i=0; i<vec.size(); i++){
//         cout<<vec[i]<<" ";
//     }

//     return 0;
// }


// # installing from another vector

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> original_vec(5,20);

    // to copy constructor to initialize another vector ;
    vector<int> new_vec(original_vec);

    for(int i=0; i<new_vec.size(); i++){
        cout<<new_vec[i]<<" ";
    }
    return 0;
}
