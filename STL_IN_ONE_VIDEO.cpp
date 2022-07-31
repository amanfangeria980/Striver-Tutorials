#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 2};
    cout << "First Element " << p.first << " "
         << "Second Element " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << "First " << p.first << "Second First " << p1.second.first << " Second Second " << p1.second.second;
    cout << endl;
    pair<int, int> arr[] = {{1, 4}, {7, 8}};
    cout << "0 ka first " << arr->first << endl;     // 1
    cout << "0 ka Second " << arr->second << endl;   // 4
    cout << "0 ka first " << arr[0].first << endl;   // 1
    cout << "0 ka Second " << arr[0].second << endl; // 4
    cout << "1 ka first " << arr[1].first << endl;   // 7
    cout << "1 ka second " << arr[1].second << endl; // 8
}

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // 1 2

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    vector<int> v1(5); // 0 0 0 0 0 ->elements or it will assign garbage value to all the elements basically depends on compiler

    vector<int> v2(5, 100); // 100 100 100 100 100 ->elements
    // v2(size,element)

    // Suppose we want to copy vector v2 to a new vector v3, we will do this
    vector<int> v3(v2);

    // accesing vector
    cout << v[0] << " " << v.at(1) << endl; //  1  2
    cout << v.back() << endl;               // 2

    // iterator
    vector<int>::iterator it = v.begin();
    // it points to the memory
    cout << *(it) << endl; // 1
    it++;
    cout << *(it) << endl; // 2

    vector<int>::iterator it1 = v.end(); // end doesn't point to the last element instead it points to the memory location after the last element, so to print last element we have to do it-- e.g.,
    // it points to the memory
    cout << *(it1) << endl; // garbage value or address after the last element
    it1--;                  // decrementing iterator
    cout << *(it1) << endl; // 2  //last element
    // if we are using it.back() it means it points to the last element.
    //  v.rend and v.rbegin are also there but they are rarely used.
    cout << endl;

    // An example
    vector<int> newvec;
    newvec.push_back(0);
    newvec.push_back(1);
    newvec.push_back(2);
    newvec.push_back(3);
    newvec.push_back(4);

    for (vector<int>::iterator i = newvec.begin(); i != newvec.end(); i++)
    {
        cout << *(i) << " ";
    }
    cout << endl;

    // Now, instead of writing this (vector<int>::iterator) iterator thing we can use "auto" keyword and it will automatically detect what we want or assign the respective datatype automatically e.g,
    for (auto itt = newvec.begin(); itt <= newvec.begin() + 3; itt++)
    {
        cout << *(itt) << " ";
    }
    cout << endl;

    // One more example(used forEach loop)
    for (auto it : newvec)
    {
        cout << it << " ";
    }
    cout << endl;

    // deleting or erasing an element from vector
    // newvec is declared above which is {0,1,2,3,4};
    /*
    newvec.erase(newvec.begin()+1); //it will delete element 1 as its index it 1.
    //printing the vector newvec;
    for(auto it: newvec){
        cout<<it<<" ";
    }cout<<endl;
    */
    // we can also delete in a sequence like this: v.erase(v.begin(),v.begin()+4); [start,end)

    // Inserting an element in an vector
    newvec.insert(newvec.begin(), -1); // insert the element at the beginning
    for (auto it : newvec)
    {
        cout << it << " ";
    }
    cout << endl;

    newvec.insert(newvec.begin() + 1, 2, -2);

    for (auto it : newvec)
    {
        cout << it << " ";
    }
    cout << endl;

    // suppose we want to insert a vector into a vector
    vector<int> c(2, 50); // 50 50
    newvec.insert(newvec.begin(), c.begin(), c.end());

    for (auto it : newvec)
    {
        cout << it << " ";
    }
    cout << endl;

    // SIZE OF A VECTOR
    cout << newvec.size() << endl; // 10 AS NEWVEC ={50 50 -1 -2 -2 0 1 2 3 4}

    // pop_back
    newvec.pop_back(); // prints 10

    // swapping vectors
    // v.swap(v1);
    // v.clear() erases the entire vector
    // v.empty() returns true or false, if vector is empty or not
}

void explainList()
{
    // it gives all the features as vector, additionally it gives frontal operations like push_front,pop_front and emplace_front;

    list<int> l;
    l.push_back(1);
    l.emplace_back(2);
    for (auto it : l)
    {
        cout << it << " ";
    }
    cout << endl;
    // here
    l.push_front(0);
    l.emplace_front(-1);
    for (auto it : l)
    {
        cout << it << " ";
    }
    cout << endl;
}

// inserting in vector is costly so we use list as it provides frontal operations and also, its(in list)inner implementation consists something like doubly linked list

void explainDeque()
{
    // same as vector
}

void explainStack()
{
    // stack works on LIFO system (Last In First Out)
    stack<int> st;
    // pushing from start
    st.push(0);               // 0
    st.push(1);               // 1 0
    st.push(-1);              // -1 1 0
    st.push(2);               // 2 -1 1 0
    st.push(5);               // 5 2 -1 1 0
    cout << st.top() << endl; // returns 5
    // also st[0] doesn't work in stack or what we call as index accessing is not allowed in stack
    st.pop(); // deletes first element which is 5
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl; // 0
    // for swapping two stacks s1.swap(s2);
    // all operations have O(1) complexity in stack
}

void explainQueue()
{
    queue<int> q;
    // it works on FIFO system(First in First Out)
    q.push(0); // 0
    q.push(1); // 0 1
    q.push(2); // 0 1 2
    q.push(3); // 0 1 2 3
    q.push(4);  //0  1 2 3 4 
    q.emplace(5);   // 0  1 2 3 4 5
    // q.back() is the last element;
    cout<<q.back()<<endl;
    q.back()+=5;
    cout<<q.back()<<endl;  //queue becomes - {0 1 2 3 4 10}
    cout<<q.front()<<endl; //0
    q.pop(); //pops the first element which is 0
    cout<<q.front()<<endl;  //1 2 3 4 10
    ///rest of the operations are similar to stack 
}

void explainPriorityQueue(){
    priority_queue<int> pq;
    //In this largest element stays at the top
    pq.push(1); //1
    pq.push(-1); //1 -1
    pq.push(3); //3 1 -1
    pq.push(4); //4 3 1 -1
    pq.emplace(5); //5 4 3 1 -1
    cout<<pq.top()<<endl; //returns the element at the first  //5
    pq.emplace(8); //8 5 4 3 1 -1
    cout<<pq.top()<<endl;
    pq.pop(); //deletes the first element which is 8 
    cout<<pq.top()<<endl; //prints 5 as queue becomes 5 4 3 1 -1

    //to make a minimum heap
    priority_queue<int,vector<int>,greater<int>> pqm;
    pqm.push(1); // 1 
    pqm.push(2); // 1 2
    cout<<pqm.top()<<endl;


    //push,pop -> O(logn)
    //top -> O(1);
}

void explainSet(){
    //it stores the elements in unique and sorted order
    set<int>s;
    s.insert(1); //{1}
    s.insert(3); //{1,3}
    s.emplace(3); //{1,3} it will not insert 2 as its already there in set and as it stores unique element so it will not store it again
    s.insert(0); //{0,1,3}

    auto it=s.find(3);  //it returns an iterator which points to three
    auto it1=s.find(2); //now as element 2 is not in the set, the iterator will point to the s.end() (i.e., location after the last element in the set)

    s.erase(3); //takes elements as an input and erases the element and it take O(logn) time
    int counter=s.count(1); //returns 1 as the set s has one unique element 1
    cout<<counter<<endl;
    counter=s.count(5); //returns 0 as the set s doesn't have any element 5
    cout<<counter<<endl;

    //one more way to delete an element
    it=s.find(3);
    s.erase(it); //takes constant time or O(1) complexity
    // we can also do this
    // {1,2,3,4,5}
    // auto it1=s.find(2);
    // auto it2=s.find(4);
    // s.erase(it1,it2); //[start,end)
    //{1,4,5}

    //also learn lower_bound and upper_bound
    //everything in set happens in O(logn) complexity
}
void explainMultiSet(){
    multiset<int>s;
    //everything is similar to set difference being it also stores duplicate values
    //it will also be sorted

    //if we use erase function here then all the elements with same value will be deleted like this
    //s.erase(1);

    //but if we want to delete a particular index element,we can do this (i.e., first find the element using iterator and then delete it)
    // auto it=s.find(1);
    // s.erase(it);

}

void explainUnorderedSet(){
    unordered_set<int> us;
    //it stores unique element
    //it doesn't store elements in sorted order
    //all functions works except lower_bound() and upper_bound();
    //mostly it has complexity of O(N);

}

void explainMap(){
    map<int,int> m;
    map<int,pair<int,int>> m1;
    map<pair<int,int>,int> m2;
    //it stores everything in respect to key value pairs
    // roll and names are the best example roll can not be same it must be unique (key),
    // but names can be same what we call as value
    //map stores unique keys in sorted order
    m[1]=2; //{1,2}
    m.emplace(2,3);
    m.insert({0,5});

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<" ";
    }cout<<endl;

    cout<<m[0]<<endl;  // 5
    m2[{1,2}]=5;
    cout<<m2[{1,2}]<<endl;

    auto it=m.find(2);
    cout<<*(it).second;
}
int main()
{
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPriorityQueue();
    // explainSet();
    // explainMultiSet();
    // explainUnorderedSet();
    explainMap();
    return 0;
}