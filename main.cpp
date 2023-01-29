
#include <iostream>
using namespace std;


int* insertfirst(int arr[],int x,int n){
    int i;
    for (i = n; i >= 0; i--){
        arr[i] = arr[i - 1];}
    arr[0] = x;
    return arr;
}

int* insertlast(int arr[],int x,int n){
    int i;
    for (i = 0; i < n; i++){
        arr[i] = arr[i];}
    arr[n-1] = x;
    return arr;
}

int *insertpos(int arr[],int x, int pos,int n){
    int i;
    n++;
    for (i = n; i >= pos; i--){
        arr[i] = arr[i - 1];}
    arr[pos - 1] = x;
    return arr;
}
int *traverse(int arr[],int n){
    int i;
    for (i = 0; i <n; i++){
        cout << arr[i] << " ";}
    cout << endl;
    return arr;
}
int *deletefirst(int arr[], int n ){
    int i;
    for (i = 0; i <= n; i++){
        arr[i] = arr[i + 1];}

    return arr;
}
int *deletelast(int arr[],int n){
    int i;
    for (i = 0;i<n; i++){
        arr[i] = arr[i];}
    return arr;
}
int *deletepos(int arr[], int x, int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            for(j=i; j<(n-1); j++)
                arr[j] = arr[j+1];
             }
    }
    return arr;
}

int main()
{
    int arr[100];
    int i,N, n;
    cout<<"Input Total Number of data:";
    cin>>N;
    n=N;
    for(i=0;i<N;i++){
        cout<<"data "<< i+1<<"=";
        cin>>arr[i];
    }
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
start:
    char choose;
    cout<<"Insert data = i"<< " - "<<"delete data=d"<<endl;
    cout<<"Enter i or D =";
    cin>>choose;
    
    if(choose=='i'){
        int num ;
        cout<<"enter the number:";
        cin>>num;
        char insert;
        cout<<"insert first=f  last=l  possition=p:";
        cin>>insert;
        switch (insert) {
               
            case 'f':
                n++;
                insertfirst(arr,num,n );
                break;
                
            case 'l':
                n++;
                insertlast(arr,num,n );
                break;
                
            case 'p':
                int pos;
                cout<<"possition:";
                cin>>pos;
                n++;
                insertpos(arr,num,pos,n );
                break;
        }
        goto select;
        }
    if(choose=='d'){
        char del;
        cout<<"delete first=f  last=l  possition=p:";
        cin>>del;
        switch (del) {
            case 'f':
                n--;
                deletefirst(arr,n );
                break;
                
            case 'l':
                n--;
                deletelast(arr,n );
                break;
                
            case 'p':
                int pos;
                cout<<"possition:";
                cin>>pos;
                deletepos(arr,pos,n );
                break;
        }
        goto select;
    }
        select:
        char select;
        cout<<"if you see the array- y"<<endl<< "go to home = h"<<endl<<"Reopen=r"<<endl<<"Enter:";
        cin>>select;
        if (select=='y'){traverse(arr,n); goto select; }
        if(select=='h'){main();}
        if(select=='r'){goto start;}
    return 0;
}


