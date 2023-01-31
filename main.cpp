
#include <iostream>
using namespace std;


int* insertfirst(int array[],int number,int n){
    int i;
    for (i = n; i >= 0; i--){
        array[i] = array[i - 1];}
    array[0] = number;
    return array;
}

int* insertlast(int array[],int number,int n){
    int i;
    for (i = 0; i < n; i++){
        array[i] = array[i];}
    array[n-1] = number;
    return array;
}

int *insertpos(int array[],int number, int pos,int n){
    int i;
    for (i = n; i >= pos; i--){
        array[i] = array[i - 1];}
    array[pos - 1] = number;
    return array;
}
int *traverse(int array[],int n){
    int i;
    for (i = 0; i <n; i++){
        cout << array[i] << " ";}
    cout << endl;
    return array;
}
int *deletefirst(int array[], int n ){
    int i;
    for (i = 0; i <= n; i++){
        array[i] = array[i + 1];}

    return array;
}
int *deletelast(int array[],int n){
    int i;
    for (i = 0;i<n; i++){
        array[i] = array[i];}
    return array;
}
int *deletepos(int array[], int pos, int n)
{int i;
    for(i=pos-1;i<n;i++){
        array[i]=array[i+1];
    }

    return array;
}

int main()
{
    int array[100];
    int i,N, n;
    cout<<"Input Total Number of data:";
    cin>>N;
    n=N;
    for(i=0;i<N;i++){
        cout<<"data "<< i+1<<"=";
        cin>>array[i];
    }
    for (i = 0; i < n; i++)
        cout << array[i] << " ";
        cout << endl;
start:
    char choose;
    cout<<"Insert data = i"<< endl<<"delete data=d"<<endl;
    cout<<"Enter i or D =";
    cin>>choose;
    
    if(choose=='i'){
        int num ;
        cout<<"enter the number:";
        cin>>num;
        char insert;
        cout<<"insert first=f"<<endl<<"insert last=l"<<endl<<"insert possition=p"<<endl;
        cout<<"Enter 'f' or 'l' or 'p':";
        cin>>insert;
        switch (insert) {
               
            case 'f':
                n++;
                insertfirst(array,num,n );
                break;
                
            case 'l':
                n++;
                insertlast(array,num,n );
                break;
                
            case 'p':
                int pos;
                cout<<"possition:";
                cin>>pos;
                n++;
                insertpos(array,num,pos,n );
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
                deletefirst(array,n );
                break;
                
            case 'l':
                n--;
                deletelast(array,n );
                break;
                
            case 'p':
                int pos;
                cout<<"possition:";
                cin>>pos;
                n--;
                deletepos(array,pos,n );
                break;
        }
        goto select;
    }
        select:
        char select;
        cout<<"if you see the array- y"<<endl<< "go to home = h"<<endl<<"Reopen=r"<<endl<<"Enter:";
        cin>>select;
        if (select=='y'){traverse(array,n); goto select; }
        if(select=='h'){main();}
        if(select=='r'){goto start;}
    return 0;
}


