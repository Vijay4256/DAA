{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
//Given an unsorted array of integers, design an algorithm and implement it using a program to find whether two elements exist such that their sum is equal to the given key element. (Time Complexity = O(n log n))\
#include<bits/stdc++.h>\
using namespace std;\
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
        int key;\
        cin>>key;\
        \
        sort(arr,arr+n);\
        int l=0,r=n-1,f=0;\
        while(l<r)\
        \{\
            if(arr[l]+arr[r]==key)\
                \{\
                    cout<<arr[l]<<" "<<arr[r]<<endl;\
                    f=1;\
                    break;\
                \}\
            else if(arr[l]+arr[r]<key)\
                l++;\
            else\
                r--;\
        \}\
        if(!f)\
            cout<<"No Such Element Exist"<<endl;\
    \}\
    return 0;\
\}}