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

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> original_vec(5,20);

//     // to copy constructor to initialize another vector ;
//     vector<int> new_vec(original_vec);

//     for(int i=0; i<new_vec.size(); i++){
//         cout<<new_vec[i]<<" ";
//     }
//     return 0;
// }


// use member functions:

/*
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)


*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> g1;
//     for(int i=1; i<=5; i++){
//         g1.push_back(i);
//     }

//     cout<<"output of begin and end: ";
//     for(auto i = g1.begin(); i!=g1.end(); i++){
//         cout<< *i << " ";
//     }
// }

// 1. 
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> vec = {1,2,4,4,5,6,7};
//     for(int i : vec)
//         std::cout << i << " ";
//     return 0;
// }


// 2. insert element into a vectors:
// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> vec;
//     vec.push_back(10);  // Insert element at the end
//     vec.push_back(20);
//     vec.push_back(30);
    
//     for(int i : vec)
//         std::cout << i << " ";  // Output: 10 20 30
//     return 0;
// }


//vector using index and at() method
// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> vec = {5, 10, 15, 20};
//     std::cout << "Using index: " << vec[2] << " ";  // Output: 15
//     std::cout << "Using at(): " << vec.at(2) << " "; // Output: 15
//     return 0;
// }


// vector using range-based for loop and iterators;

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec = {1,2,3,4,5};
//     for(int i:vec){
//         cout<<i<<" "<<endl;
//     }

//     for(auto it = vec.begin(); it != vec.end(); ++it){
//         cout<<*it<<" "<<endl;
//     }

//     return 0;
// }


// // remove element from a vector;
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec = {10,20,30,40,50};
//     vec.pop_back();
//     vec.erase(vec.begin()+1); // remove the element at index 1;
//     for(int i:vec){
//         cout<<i<<" "<<endl;
//     }
//     return 0;
// }


// esize a vector and check its size and capacity
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec(5, 100);  // size = 5 with  elements = 100 five times stored.

//     cout<<"Size : "<<vec.size()<<"\n";
//     cout<<"Capacity : "<<vec.capacity()<<"\n";

//     vec.resize(3); // resize the 3 elements
//     cout<<"New Size : "<<vec.size()<<" ";
    
//     for(int i: vec){
//         cout<<i<<" "<<endl;
//     }
//     return 0;
// }


// clear all elements from a vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec = {10, 20, 30, 40, 50};
//     vec.clear();

//     cout<<"Size after clear : "<<vec.size()<<"\n";
//     return 0;
// }



// sort a vector

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> vec = {10, 20, 5, 15, 3};
//     sort(vec.begin(), vec.end());  // sort in ascending order
//     for(int i:vec){
//         cout<<i<<" "<<vec[i]<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec = {10, 20, 5, 15, 3};
//     sort(vec.begin(), vec.end(), greater<int>()); // sort in descending order.
//     for(int i:vec){
//         cout<<i<<" "<<endl;
//     }

//     return 0;
// }


// reverse a vector
// #include <iostream>
// #include <vector>
// #include <algorithm>  // for reverse()

// int main() {
//     std::vector<int> vec = {1, 2, 3, 4, 5};

//     std::reverse(vec.begin(), vec.end());  // Reverse the vector

//     for(int i : vec)
//         std::cout << i << " ";  // Output: 5 4 3 2 1
//     return 0;
// }


// copy of a vector to another vector?

// #include <iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> vec1 = {1, 2, 3, 4, 5};
//     vector<int> vec2 = vec1; // copy from vec1 to vec2

//     for(int i : vec2){
//         cout<<i<<" "; // Output: 1 2 3 4 5
//     }
// }


// find the maximum and minimum value in the vector

// #include <iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> vec = {10, 30, 40, 5, 15};

//     auto max_it = max_element(vec.begin(), vec.end());
//     auto min_it = min_element(vec.begin(), vec.end());

//     cout<< "Max element: "<<*max_it<<"\n";
//     cout<< "Min element: "<<*min_it<<"\n";
// }


// 12 check if vecotr is empty or not?

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> vec;
//     if(vec.empty()){
//         cout<<"Yes vector is empty"<<endl;
//     }else{
//         cout<<"No vector is empty"<<endl;
//     }

//     vec.push_back(10);
//     cout<<"After adding an element, the vector size has : "<<vec.size()<<" ";

//     return 0;
// }