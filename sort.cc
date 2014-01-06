#include<iostream>
#include<vector>
#include"sort.h"
using namespace std;

void mSort(vector<int> &, vector<int> &, int, int);
void merge(vector<int> &, vector<int> &, int, int, int);

vector<int> bubbleSort(vector<int> vec)
{
	//Create New Vector
	vector<int> vect;
	for (unsigned int i = 0; i < vec.size(); i++)
	{
		vect.push_back(vec[i]);
	}
	
	//Sort
	bool swapped = true;
	while(swapped == true)
	{
		swapped = false;
		for(unsigned int n = 0; n < vect.size()-1; n++)
		{
			
			//If First Element is Greater than Second
			if(vect[n] > vect[n+1])
			{
				int x = vect[n];
				vect[n] = vect[n+1];
				vect[n+1] = x;
				swapped = true;
			}
			
		}
	}
	return vect;
}

vector<int> selectionSort(vector<int> vec)
{
	vector<int> vect;
	for (unsigned int i = 0; i < vec.size(); i++)
	{
		vect.push_back(vec[i]);
	}

	//Sort
	unsigned int i;
	unsigned int x;
	unsigned int iMin;

	for(x = 0; x < vect.size()-1; x++) 
	{
		iMin = x;
		for(i = x+1; i < vect.size(); i++) 
		{ 
			if(vect[i] < vect[iMin]) 
			{
				iMin = i;
			}
		}
		if(iMin != x) 
		{
			swap(vect[x], vect[iMin]);
		}
	}
	return vect;
}
vector<int> mergeSort(vector<int> vec)
{
	//Create New Vector
	vector<int> vect;
	for (unsigned int i = 0; i < vec.size(); i++)
	{
		vect.push_back(vec[i]);
	}
	vector<int> vectB(vect.size(), 0);
	mSort(vect, vectB, 0, vect.size()-1);

	return vect;
}

void mSort(vector<int> &vect, vector<int> &vectB, int left, int right)
{
	int mid;

	if (right > left)
	{
		mid = (right + left) / 2;
		mSort(vect, vectB, left, mid);
		mSort(vect, vectB, mid+1, right);
 
		merge(vect, vectB, left, mid+1, right);
	}
}
 
void merge(vector<int> &vect, vector<int> &vectB, int left, int mid, int right)
{
	int i, left_end, num_elements, vectB_pos;
 
	left_end = mid - 1;
	vectB_pos = left;
	num_elements = right - left + 1;
	while((left <= left_end) && (mid <= right))
	{

		if(vect[left] <= vect[mid])
		{
			vectB[vectB_pos] = vect[left];
			vectB_pos = vectB_pos + 1;
			left = left +1;
		}
		else
		{

			vectB[vectB_pos] = vect[mid];
			vectB_pos = vectB_pos + 1;
			mid = mid + 1;
		}
	}
 
	while(left <= left_end)
	{
		vectB[vectB_pos] = vect[left];
		left = left + 1;
		vectB_pos = vectB_pos + 1;
	}


	while(mid <= right)
	{
		vectB[vectB_pos] = vect[mid];
		mid = mid + 1;
		vectB_pos = vectB_pos + 1;
	}

	for(i=0; i <= num_elements-1; i++)
	{
		vect[right] = vectB[right];
		right = right - 1;
	}

}
