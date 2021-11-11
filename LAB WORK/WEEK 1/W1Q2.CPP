{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 // Binary Search\
#include<bits/stdc++.h>\
using namespace std;\
void binary_search(vector<int> &arr,int n,int key)\
\{\
    int l=0,r=n-1,comp=0;\
    while(l<=r)\
    \{\
        int mid=l+(r-l)/2;\
        if(key==arr[mid])\
        \{\
            break;\
        \}\
        else if(key<arr[mid])\
            r=mid-1;\
        else\
            l=mid+1;\
        comp++;\
    \}\
    if(l>r)\
        cout<<"Not Present "<<comp<<endl;\
    else\
        cout<<"Present "<<comp+1<<endl;\
\}\
int main()\
\{\
    int t;\
    cin>>t;\
    while(t--)\
    \{\
        int n;\
        cin>>n;\
        vector<int> arr(n);\
        for(int &i:arr)\
            cin>>i;\
        int key;\
        cin>>key;\
        binary_search(arr,n,key);\
    \}\
    return 0;\
\}}