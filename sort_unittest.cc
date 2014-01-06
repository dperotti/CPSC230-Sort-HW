#include "sort.h"
#include "gtest/gtest.h"
#include <ctime>        
#include <cstdlib>      
#include <algorithm>


using namespace std;
TEST(Bubble, RandomList) {
   srand ( unsigned ( std::time(0) ) );
   vector<int> numbers;
   for (int i=0; i< 20; i++){
      numbers.push_back(i);
      if (i == 10){
        numbers.push_back(i);
        numbers.push_back(i);
        numbers.push_back(i);
      }
   }
   vector<int> myvector(numbers);
   
   random_shuffle ( myvector.begin(), myvector.end() ); 
   vector<int> myvector2(myvector);
   EXPECT_EQ(numbers, bubbleSort(myvector));
   EXPECT_EQ(myvector, myvector2);
   random_shuffle ( myvector.begin(), myvector.end() ); 
   EXPECT_EQ(numbers, bubbleSort(myvector));
   

   }
TEST(Bubble, SortedList) {
   vector<int> numbers;
   for (int i=0; i< 20; i++){
      numbers.push_back(i);
      if (i == 10){
        numbers.push_back(i);
        numbers.push_back(i);
        numbers.push_back(i);
      }
   }
   EXPECT_EQ(numbers, bubbleSort(numbers));   
   }

TEST(Selection, RandomList) {
   srand ( unsigned ( std::time(0) ) );
   vector<int> numbers;
   for (int i=0; i< 20; i++){
      numbers.push_back(i);
      if (i == 10){
        numbers.push_back(i);
        numbers.push_back(i);
        numbers.push_back(i);
      }
   }
   vector<int> myvector(numbers);
   
   random_shuffle ( myvector.begin(), myvector.end() );
   vector<int> myvector2(myvector); 
   EXPECT_EQ(numbers, selectionSort(myvector));
   EXPECT_EQ(myvector, myvector2);
   random_shuffle ( myvector.begin(), myvector.end() ); 
   EXPECT_EQ(numbers, selectionSort(myvector));
   

   }
TEST(Selection, SortedList) {
   vector<int> numbers;
   for (int i=0; i< 20; i++){
      numbers.push_back(i);
      if (i == 10){
        numbers.push_back(i);
        numbers.push_back(i);
        numbers.push_back(i);
      }
   }
   EXPECT_EQ(numbers, selectionSort(numbers));   
   }



TEST(MergeSort, RandomList) {
   srand ( unsigned ( std::time(0) ) );
   vector<int> numbers;
   for (int i=0; i< 20; i++){
      numbers.push_back(i);
      if (i == 10){
        numbers.push_back(i);
        numbers.push_back(i);
        numbers.push_back(i);
      }
   }
   vector<int> myvector(numbers);
   
   random_shuffle ( myvector.begin(), myvector.end() ); 
   vector<int> myvector2(myvector);
   EXPECT_EQ(numbers, mergeSort(myvector));
   EXPECT_EQ(myvector, myvector2);
   random_shuffle ( myvector.begin(), myvector.end() ); 
   EXPECT_EQ(numbers, mergeSort(myvector));
   
   }
TEST(MergeSort, SortedList) {
   vector<int> numbers;
   for (int i=0; i< 20; i++){
      numbers.push_back(i);
      if (i == 10){
        numbers.push_back(i);
        numbers.push_back(i);
        numbers.push_back(i);
      }
   }
   EXPECT_EQ(numbers, mergeSort(numbers));   
   }



