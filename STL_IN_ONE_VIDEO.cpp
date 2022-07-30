#include<bits/stdc++.h>
using namespace std;

void explainPair(){
   pair<int,int> p={1,2};
   cout<<"First Element "<<p.first<<" "<<"Second Element "<<p.second<<endl;

   pair <int,pair<int,int>> p1={1,{2,3}};
   cout<<"First "<<p.first<<"Second First "<<p1.second.first<<" Second Second "<<p1.second.second;
   cout<<endl;
   pair<int,int> arr[]={{1,4},{7,8}};
   cout<<"0 ka first "<<arr->first<<endl; //1
   cout<<"0 ka Second "<<arr->second<<endl; //4
   cout<<"0 ka first "<<arr[0].first<<endl; //1
   cout<<"0 ka Second "<<arr[0].second<<endl; //4
   cout<<"1 ka first "<<arr[1].first<<endl; //7
   cout<<"1 ka second "<<arr[1].second<<endl; //8
}


void explainVector(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);  // 1 2
    
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int>v1(5);  // 0 0 0 0 0 ->elements or it will assign garbage value to all the elements basically depends on compiler

    vector<int> v2(5,100); //100 100 100 100 100 ->elements  
    // v2(size,element)

    //Suppose we want to copy vector v2 to a new vector v3, we will do this
    vector<int> v3(v2);


    //accesing vector
    cout<<v[0]<<" "<<v.at(1)<<endl;  //  1  2
    cout<<v.back()<<endl; //2
    
    //iterator
    vector<int>::iterator it=v.begin();
    //it points to the memory
    cout<<*(it)<<endl; //1
    it++;
    cout<<*(it)<<endl; //2

    vector<int>::iterator it1=v.end(); //end doesn't point to the last element instead it points to the memory location after the last element, so to print last element we have to do it-- e.g.,
    //it points to the memory
    cout<<*(it1)<<endl; //garbage value or address after the last element 
    it1--;  //decrementing iterator
    cout<<*(it1)<<endl; //2  //last element
    //if we are using it.back() it means it points to the last element.
    // v.rend and v.rbegin are also there but they are rarely used. 
    cout<<endl;

    //An example
    vector<int> newvec;
    newvec.push_back(0);
    newvec.push_back(1);
    newvec.push_back(2);
    newvec.push_back(3);
    newvec.push_back(4);

    for(vector<int>::iterator i=newvec.begin();i!=newvec.end();i++){
        cout<<*(i)<<" ";
    } cout<<endl;

    //Now, instead of writing this (vector<int>::iterator) iterator thing we can use "auto" keyword and it will automatically detect what we want or assign the respective datatype automatically e.g,
    for(auto itt=newvec.begin();itt<=newvec.begin()+3;itt++){
        cout<<*(itt)<< " ";
    } cout<<endl;
    
    //One more example(used forEach loop)
    for(auto it: newvec){
        cout<<it<<" ";
    }cout<<endl; 

    //deleting or erasing an element from vector
    //newvec is declared above which is {0,1,2,3,4};
    /*
    newvec.erase(newvec.begin()+1); //it will delete element 1 as its index it 1.
    //printing the vector newvec;
    for(auto it: newvec){
        cout<<it<<" ";
    }cout<<endl;
    */
    //we can also delete in a sequence like this: v.erase(v.begin(),v.begin()+4); [start,end)

    //Inserting an element in an vector
    newvec.insert(newvec.begin(),-1);   //insert the element at the beginning
    for(auto it : newvec){
        cout<<it<<" ";
    }cout<<endl;

    newvec.insert(newvec.begin()+1,2,-2);
     
    for(auto it : newvec){
        cout<<it<<" ";
    }cout<<endl;

    //suppose we want to insert a vector into a vector
    vector<int> c(2,50); // 50 50
    newvec.insert(newvec.begin(),c.begin(),c.end());
     
    for(auto it : newvec){
        cout<<it<<" ";
    }cout<<endl;

    //SIZE OF A VECTOR
    cout<<newvec.size()<<endl; //10 AS NEWVEC ={50 50 -1 -2 -2 0 1 2 3 4}

    //pop_back
    newvec.pop_back(); //prints 10

    //swapping vectors
    //v.swap(v1);
    //v.clear() erases the entire vector
    //v.empty() returns true or false, if vector is empty or not
}

void explainList(){
    //it gives all the features as vector, additionally it gives frontal operations like push_front,pop_front and emplace_front;

    list<int> l;
    l.push_back(1);
    l.emplace_back(2);
    for(auto it: l){
        cout<<it<<" ";
    }cout<<endl;
    //here
    l.push_front(0);
    l.emplace_front(-1);
    for(auto it: l){
        cout<<it<<" ";
    }cout<<endl;
}

//inserting in vector is costly so we use list as it provides frontal operations and also, its(in list)inner implementation consists something like doubly linked list

void explainDeque(){
    //same as vector
}

void explainStack(){
    stack<int> st;
    
}

int main(){
    // explainPair();
    // explainVector();
    // explainList();
    //explainDeque(); 
    explainStack();
    return 0;
}