{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 
\
// Implementing Merge sort
\

\

\
#include <bits/stdc++.h>
\
#define pii pair<int, int>
\

\
using namespace std;
\

\
pii merge(int a[], int l, int m, int h) \{
\
	int i = l;
\
	int j = m + 1;
\
	int k = 0;
\
	int com = 0;
\
	int inv = 0;
\
	int b[h - l + 1];
\
	while (i <= m && j <= h) \{
\
		if (a[i] < a[j]) \{
\
			if(i != k) inv++;
\
			b[k] = a[i];
\
			i++;
\
		\}else \{
\
			if(j != k) inv++;
\
			b[k] = a[j];
\
			j++;
\
		\}
\
		com++;
\
		k++;
\
	\}
\

\
	while (i <= m) \{
\
		if(i != k) inv++;
\
		b[k] = a[i];
\
		i++;
\
		k++;
\
	\}
\

\
	while (j <= h) \{
\
		if(j != k) inv++;
\
		b[k] = a[j];
\
		j++;
\
		k++;
\
	\}
\
	
\
	for (i = l; i <= h; i++)
\
		a[i] = b[i - l];


\
	return \{com, inv\};
\
\}
\

\
void mergeSort(int a[], int l, int h, int &c, int &in) \{
\

\
	if (l < h) \{
\
		int mid = (l + h) / 2;
\

\
		mergeSort(a, l, mid, c, in);
\
		mergeSort(a, mid + 1, h, c, in);
\
		
\
		pii p = merge(a, l, mid, h);
\
		c += p.first;
\
		in += p.second;
\
	\}
\
\}
\

\
int main() \{
\
	int t; cin >> t;
\
	while (t--) \{
\
		int n; cin >> n;
\
		int a[n];
\
		for(int i = 0; i < n; i++) \{
\
			cin >> a[i];
\
		\}
\

\
		int com = 0, inv = 0;
\
		mergeSort(a, 0, n - 1, com, inv);
\

\
		for(int i = 0; i < n; i++)\{
\
			cout << a[i] << " ";
\
		\}cout << endl;
\
		cout << "comparisons = " << com << endl;
\
		cout << "inversions = " << inv << endl;
\
	\}
\

\
	return 0;
\
\}}