#include<bits/stdc++.h>
#include<iostream>

// vectors

void explainvector(){
    vector<int>v; // cointainer made of size v
    v.push_back(1); // It pushes value 1, in vector v = {1}
    v.emblace_back(2); // it extends the size of array, v={1,2}
}
// Vectors in pair done
vector<pair<int,int>>vec;
v.push_back({1,2});
v.emplace_back(1,2); // no need to add curly braces as it automatically assumes that vector is present & just adds up.

vector<int>v(5,100); // This implies a cointainer of size 5 is created with all 100s
vector<int>v(5); // This implies that a vector is created of size 5 & it is currently empty or random values are filled.
// acessing it
// vectors are accessed in similar way as we acess arrays.
cout<<v[0]<< endl;
cout<<v[1]<<endl;
cout<<v.back() << " "; // it represents the back element or last element of the set.
// itertor points the memory access , v.begin points memory, so if we're pointing v.memory then it points memory address.
// *(v.begin)= It directly gives the element. V.begin gives the memory & stars points the address.
vector<int>::iterator it = v.begin();
it++; // it points towards memory access.
cout<<*(it) << " "; // by adding * it helps in getting value from that particular memory location.
it=it+2;
cout<<*(it)<<" "; 

// Types of iterators
//{10,20,30,40}
vector<int>::iterator it = v.end(); so end will not point towards 40. it will point just after the adress just after 40. but if you want to acess 40 through it then replace it by it--;
// applying loop for getting printouts
for (vector<int>::iterator it=v.begin(); it!=v.end(); it++)
{
    cout<< *(it) << endl;
}
// one short form of above

Just replace ; - vector<int>::iterator by auto, // This auto will automatically assign vector , ALso IF YOU WRITE AUTO THEN COMPILER WILL AUTOMATICALLY ASSIGN DATA ACCORDING TO THE DATA TYPE.
// deletion in the vector
//10,20,12,23
v.erase(v.begin()+1); // This points to the deletion of 20
// (10,20,12,23,25) If we want to erase multiple element then we have to give starting & ending point but note that during deletion starting is inclusive to be deleted but end is not , it just represents the range like this [start,end)
v.erase(v.begin()+2,v.begin()+4) // After deleting {10,20,35}


// Insert function (It takes a lot time)
vector<int>v(2,100); // (100,100)
v.insert(v.begin(),300); // (300,100,100) It implies that at beginning 300 is inserted.
v.insert(v.begin()+1,2,5); // This implies that @ position after 300 , 2 5s are inserted t.e (300,5,5,100,100)


cout<< v.size(); // It will tell how many elements are there in the vector
v.pop_back (); // It will remove the last element
v1.swap(v2); // It swaps the two vectors
v.clear(); // erases the entire vector
cout << v.empty(); // It tells whether vector is empty or not

// List
void explainList(){
    list<int>ls;
    ls.pushback(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4}
    ls.emplace_front(); // {2,4}
} // Rest everything is same as vector

// Stack ( It works on LIFO) Last in first out // Indexing not happens here
 void explainstack (){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(4); // {4,2,1} Remember LIFO
    st.emplace (5); // {5,4,2,1} Emplace & push same
    cout<< st.top(); // 5 will come
    cout<< st.size () ; // tell the no. of elements
    cout<<st.empty(); // answer will come false as elements are there
    stack<int>st1,st2;
    st1.swap(st2);  // Abpve 2 functions will help in the swaping of the stack
 }
 // Queue works in FIFO, First in First out
 queue<int>q;
 q.push(1);
 q.push(2);
 q.emplace(4); // {1,2,4}
 q.back() +=5 // It implies add 5 to the back element, here 4 will be the back element unlike in the case of stack, hence 4 will change to 9 , {1,2,9}
 cout<<q.back()<<q.front(); // prints 9 & 1 respectively
 q.pop(); // first element goes, here its 1, {2,9}
 // Rest everything similar to stack

 // Priority queue (here data is not stored in the linear fashion, A tree is always maintained)
 // ( Guy which has more value stays at the top)
 // MAX HEAP
 void explainPQ () {
  priority_queue<int>pq;
  pq.push(5);
  pq.push(2);
  pq.push(8);
  pq.emplace(10); // {10,8,5,2}
  cout<<pq.top(); // prints 10
  pq.pop (); // {8,5,2}
 }
 // Now if we want to have minimum on top then,
 // Referred as Minimum HEAP
 priority_queue<int,vector<int>,greated<int>>pq; {
    pq.push(5);
    pq.push(2);
    pq.push(8); // {2,5,8};

    // rest all same as above
 }
  // SET, It stores everything in the sorted order & its unique
  void explainset() {
    set<int>st;
    set.insert(1);
    set.emplace(2);
    st.insert(2);
    st.insert(4); // {1,2,4} It only takes unique input & sorted form
    auto it = st.find(3); // This will basically find the itertaor of element t.e the adress
    auto it = st.find(5); // Since 5 is not here in the set then it will return the iterator of last element that is 4
    st.erase (4); // 4 will be removed

    int cnt= st.count(1);
    auto it= st.find(3);
    st.erase(it); // It will take constant time


    auto it= st.lower_bound(2);
    auto it = st.upper_bound (3);
  }

  void explainmultiset(){
    // It will only obey sorted not unique
    // hence here for erasing we directly call the address
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.erase(1);// Then all 1's will get erased
    int cnt= ms.count(1);
    ms.erase(ms.find(1)); // Points out to the adress then erases it
    ms.erase(ms.find(1),ms.find(1)+1); // same as above just for next 1 

    // rest all same

    unordered set<int>st;
    // it is not sorted only follows unique rest all are same
  }

  //MAP ( IT STORES UNIQUE KEYS IN SORTED FORM)
  // KEYS ARE UNIQUE,LET'S SAY 3 GUYS WITH NAME RAJ, BUT THEIR KEYS T.E THEIR ROLL NUMBERS WILL BE UNIQUE
   void explainMAP (){
    map<int,int>mpp;
    map<int,pair<int,int>mpp;
    map<pair<int,int>,int>mpp;

    mpp[1]=2; // This implies store 2 with assigned key as 1, t.e {1,2}
    mpp.emplace({3,1}); // store
    mpp.insert({2,4}); // store
    mpp[{2,3}]=10;// HERe key is {2,3} & value corresponds to it is 10
    // for printing
    for ( auto it : mpp)
    {
        cout<<it.first<<" " << it.second << endl;
    }
    cout<< mpp[1]; // you get address of 1
    cout<< mpp[5]; // null value
    
  auto it = mp.find(3);
  cout<< *(it)second;
  auto it = mpp.find(5);
  cout<< *(it).second;  // nothing will come

  auto it= mpp.lower_bound(2);
  auto it = mpp.upper_bound (3);
  

  // MULTIMAP SIMILAR
  // HERE YOU CAN STORE DUPLICATE KEYS
   }

// ALGORITHM

void explainextra (){
  sort(a,a+n); // It will automatically sort the arrays, no need to apply any sort algo, it also works similar to [)
  sort(v.begin(),v.end());   // for vectors
  sort(a+2,a+4); // let's say {1,6,5,3} we want to sort it then by using this it will get orted, only that portion
  sort(a,a+n,greater<int>) // It will automatically sort arrays in the desending order.
  pair<int,int> a[] = {{1,2},{2,1},{4,1}};

// if we want to sort in our way then we write comperator operator

//case for above 190
// our case
// sort it according to second element
// if second element is same, then sort
// if according to 1st element but in descending
 sort(a,a+n,comp);
 // (4,1),{2,1}, {1,2}

 // Writing comp, (component)
  bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false; // if its false then it will swap
    // they are same
    if(p1.first > p2.first) return true;
    return false;
  }
  int num=7;
  int cnt = _builtinpopcount(); // it returns the set bit

  // for all types of permutations
  // for printing all permuattions of string
  string s="123";
  sort(s.begin(),s.end());
  do {
    cout<<s<<endl;
  } while (next_permuatation(s.begin(),s.end())); // it will print 123 , find its next permuations {321}, print it & continue
  {
    int maxi = *max_element(a,a+n);
  }
  




}
