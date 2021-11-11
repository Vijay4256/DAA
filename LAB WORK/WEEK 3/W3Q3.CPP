{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
//Given an unsorted array of positive integers, design an algorithm and implement it using a program to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity = O(n log n))\
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
            \
        sort(arr,arr+n);\
        int found=0;\
        for(int i=0;i<n-1;i++)\
            if(arr[i]==arr[i+1])\
            \{\
                found=1;\
                break;\
            \}\
        if(found)\
            cout<<"YES";\
        else\
            cout<<"NO";\
        cout<<endl;\
    \}\
    return 0;\
\}}