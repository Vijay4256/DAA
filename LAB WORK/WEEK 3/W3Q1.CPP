{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
// Insertion Sort\
#include<bits/stdc++.h>\
using namespace std;\
int insertionSort(int arr[],int n)\
\{\
    int comp=0;\
    for(int i=1;i<n;i++)\
    \{\
        int key=arr[i];\
        int j=i-1;\
        while(arr[j]>key && j>=0)\
        \{\
            comp++;\
            arr[j+1]=arr[j];\
            j--;\
        \}\
        arr[j+1]=key;\
    \}    \
    return comp;\
\}\
int main()\
\{\
    int t;\
    cin>>t;\
    while(t--)\
    \{\
        int n;\
        cin>>n;\
        int arr[n];\
        for(int i=0;i<n;i++)\
            cin>>arr[i];\
            \
        int comp=insertionSort(arr,n);\
        for(int i=0;i<n;i++)\
            cout<<arr[i]<<" ";\
        cout<<endl;\
        cout<<"comparisons = "<<comp<<endl;\
        cout<<"swaps = "<<comp+n-1<<endl;\
    \}\
    return 0;\
\}}