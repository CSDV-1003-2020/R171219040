#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

// Display the array -- note the size MUST be included
// when passing a std::array to a function
void display(const std::array<int, 5> &arr) {
    std::cout << "[ ";
    for (const auto &i: arr)
        std::cout << i << " ";
    std::cout <<  "]"<< std::endl;
}

void test1() {
    std::cout << "\nTest1 =========================" << std::endl;
    std::array<int, 5> arr1 {1,2,3,4,5};     
    std::array<int, 5> arr2;
    
    display(arr1);
    display(arr2);          // Elements are not initialized (contain 'garbage')
        
    arr2  = {10,20,30,40,50};

    display(arr1);
    display(arr2);
    
    std::cout << "Size of arr1 is: " << arr1.size() << std::endl;        //5
    std::cout << "Size of arr2 is: " << arr2.size() << std::endl;       //5
    
    arr1[0] = 1000;
    arr1.at(1) = 2000;
    display(arr1);

    std::cout << "Front of arr2: " << arr2.front() << std::endl;        //10
    std::cout << "Back of arr2: " << arr2.back() << std::endl;          //50
}
void test2() {
    std::cout << "\nTest2 =========================" << std::endl;
    std::array<int, 5> arr1 {1,2,3,4,5};     
    std::array<int, 5> arr2 {10,20,30,40,50};
    
    display(arr1);
    display(arr2);
    
    arr1.fill(0);
    
    display(arr1);
    display(arr2);
    
    arr1.swap(arr2);
    
    display(arr1);
    display(arr2);
}
void test3() {
    std::cout << "\nTest3 =========================" << std::endl;

    std::array<int, 5> arr1 {1,2,3,4,5};     

    int *ptr = arr1.data();
    std::cout << ptr << std::endl;
    *ptr = 10000;
    
    display(arr1);
}
void test4() {
    std::cout << "\nTest4 =========================" << std::endl;

    std::array<int, 5> arr1 {2,1,4,5,3};     
    display(arr1);
    
    std::sort(arr1.begin(), arr1.end());
    display(arr1);
}

int main()  {    

    test1();
    test2();
    test3();
    test4();
    
    return 0;
}
