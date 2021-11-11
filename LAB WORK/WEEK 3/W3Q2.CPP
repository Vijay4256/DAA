{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
// Selection Sort\
#include<bits/stdc++.h>\
using namespace std;\
void selectionSort(int arr[],int n)\
\{\
    int swap=0,comp=0;\
    for(int i=0;i<n-1;i++)\
    \{\
        int min=i;\
        for(int j=i+1;j<n;j++)\
        \{\
            comp++;\
            if(arr[j]<arr[min])\
            \{\
                min=j;\
            \}\
        \}\
        int temp=arr[min];\
        arr[min]=arr[i];\
        arr[i]=temp;\
        swap++;\
    \}\
    for(int i=0;i<n;i++)\
        cout<<arr[i]<<" ";\
    cout<<endl;\
    cout<<"comparisons = "<<comp<<endl;\
    cout<<"swaps = "<<swap<<endl;\
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
        selectionSort(arr,n);\
    \}\
    return 0;\
\}}