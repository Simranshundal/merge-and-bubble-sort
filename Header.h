//code for merge and bubble sort coded by Simran Hundal

#pragma once
#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int>& v, int low, int hi, int mid) {
	vector<int> temp(v.size());
	int i = low;
	int k = i;
	int j = mid + 1;
	while (i <= mid && j <= hi) {
		if (v[i] < v[j]) {
			temp[k] = v[i];
			k++;
			i++;
		}
		else {
			temp[k] = v[j];
			k++;
			j++;
		}
	}
	while (i <= mid) {
		temp[k] = v[i];
		k++;
		i++;
	}
	while (j <= hi) {
		temp[k] = v[k];
		k++;
		j++;
	}
	for (int i = low; i < k; i++)
	{
		v[i] = temp[i];
	}

}

void mergesort(vector<int>& v, int low, int hi) {
	
	if (low < hi) {
		int mid = (low + hi) / 2;
		mergesort(v, low, mid);
		mergesort(v, (mid + 1), hi);

		merge(v, low, hi, mid);
	}

}

void bubblesort(vector<int> v) {
	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = 0; j < v.size() - i - 1; j++)
		{
			if (v[j] > v[j +1])
			{
				swap(v[j], v[j + 1]);

			}
		}
	}


}
