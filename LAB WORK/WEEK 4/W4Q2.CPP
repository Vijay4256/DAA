{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
//Implementing quick sort\
\
\
#include <bits/stdc++.h>\
\
\
using namespace std;\
\
// int partition(int a[], int l, int h, int &com, int &swp) \{\
// 	int pivot = a[l];\
// 	int i = l + 1;\
// 	int j = h;\
\
// 	do \{\
// 		while (i < h && a[i] <= pivot) \{\
// 			i++;\
// 			com++;\
// 		\}\
// 		while (j > l && a[j] > pivot) \{\
// 			j--;\
// 			com++;\
// 		\}\
// 		if (i < j) \{\
// 			swap(a[i], a[j]);\
// 			swp++;\
// 		\}\
// 	\} while (i < j);\
	\
// 	swap(a[l], a[j]);\
// 	swp++;\
\
// 	return j;\
// \}\
\
int partition(int a[], int l, int h, int &com, int &swp) \{\
	int j = l;\
	for(int i = l; i < h; i++) \{\
		if(a[i] <= a[h]) \{\
			swp++;\
			swap(a[i], a[j++]);\
		\}\
		com++;\
	\}\
	swap(a[h], a[j]);\
	swp++;\
	return j;\
\}\
\
void quickSort(int a[], int l, int h, int &c, int &swp) \{\
\
	if (l < h) \{\
		int p = partition(a, l, h, c, swp);\
\
		quickSort(a, l, p - 1, c, swp);\
		quickSort(a, p + 1, h, c, swp);\
	\}\
\}\
\
int main() \{\
	int t; cin >> t;\
	while (t--) \{\
		int n; cin >> n;\
		int a[n];\
		for(int i = 0; i < n; i++) \{\
			cin >> a[i];\
		\}\
\
		int com = 0, swp = 0;\
		quickSort(a, 0, n - 1, com, swp);\
\
		for(int i = 0; i < n; i++)\{\
			cout << a[i] << " ";\
		\}cout << endl;\
		cout << "comparisons = " << com << endl;\
		cout << "swaps = " << swp << endl;\
	\}\
\
	return 0;\
\}}