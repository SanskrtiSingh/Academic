
#include <bits/stdc++.h>
using namespace std;

void merge(int* arr, int startIndex,int endIndex,int mid){
 
 int i=0,j=0,k=startIndex;
 int size1=(mid-startIndex)+1,size2=(endIndex-(mid+1))+1;
 int* temp1=new int [size1];
 int* temp2=new int [size2];
 for(int i=0; i<size1; i++){
    temp1[i]=arr[startIndex+i];
 }
 for(int i=0; i<size2; i++){
    temp2[i]=arr[mid+1+i];
 }

 while(i<size1 && j<size2){
    if(temp1[i]<temp2[j]){
        arr[k++]=temp1[i++];
    }
    else{
        arr[k++]=temp2[j++];
    }
 }
  while(i<size1){
    arr[k++]=temp1[i++];
  }
  while(j<size2){
    arr[k++]=temp2[j++];
  }

  delete [] temp1;
  delete [] temp2;

}

void mergeSort(int*arr,int startIndex,int endIndex){
    if(startIndex>=endIndex) return;
    int mid=(startIndex+endIndex)/2;
    mergeSort(arr,startIndex,mid);
    mergeSort(arr,mid+1,endIndex);
    merge(arr,startIndex,endIndex,mid);


}
int main() {
   int n;
   cin>>n; 
   int* arr=new int[n];
   for(int i=0; i<n; i++){
        cin>>arr[i];
   }
   cout<<"Unsorted array is: "<<endl;
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   mergeSort(arr,0,n-1);
   cout<<endl;
   cout<<"Sorted array is: "<<endl;
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   delete [] arr;
    return 0;
}