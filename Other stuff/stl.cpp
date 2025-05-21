#include<iostream>
#include <vector>
#include <list>
using namespace std;

//ek library batayi thi par wo mere pe chl hi nhi rhi bsdwali
void explainvector(){

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);  //faster than push back

    vector<pair<int,int>>vec;

    vec.push_back({1,2});

    v.emplace_back(1,2);

    vector<int> v1(5,100);

    vector<int> v(5);          //iss baar 5 instance of 100 nhi , koi aur garbage value hogi

    vector<int> v2(v1);



    //Accessing elements


    cout<<v[0]; 

    //2nd way is using an iterator

    
    vector<int>::iterator it =v.begin();
    
    it++;
    cout<<*(it)<<" ";
    
    it =it+2;
    cout<<*(it)<<"";

    vector<int>::iterator it =v.end();        //{10,20,20,34}   end wond point to 34 but trather after 34 isiliye it--
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    cout<<v.back()<<"";   //  {1,2,3}  will point to 3





    //printing the contents of a vector

    for(vector<int>::iterator ite =v.begin();ite !=v.end(),ite++) {
        cout<<*(ite)<<"";
    }


    for(auto it= v.begin(); it!=v.end();it++){
        cout<<*(it)<<
    }   

    for(auto it:v){
        cout<<it<<"";
    }


    //{1,2,3,4.5.6}

    v.erase(v.begin()+1);

    v.erase(v.begin()+2,v.begin()+4);   // like-- [Start,end)  +4 waala not included

    //insert func

    vector<int>v(2,100);

    v.insert(v.begin(),200);

    v.insert(v.begin()+1,2,10); //2 instances of 10 dale

    vector<int> copy(2,49);

    v.insert(v.begin(),copy.begin(),copy.end());



    //,,,,,,,

    cout<< v.size();

    //{12,20}
    v.pop_back();  //{12}

    v1.swap(v2);

    v.clear(); //erases in entire vec

    cout<<v.empty(); //it will give out true if a vec is empty


}







void explainlist(){

    list<int> lis;

    lis.push_back(2);
    lis.emplace_back(4);

    lis.push_front(1);             //in vector we were using insert  REMEMBER
              
                                // AN INSERT in a vecot is costly
                                //push_front is relatively cheapser

    //and so on saare vector jaise functions  


}



void explainDeque(){



}



void explainStack(){

    //IT IS LIFO    
    //main 3 fnc   push pop and top      -- all these operations are big O(1)
}


void expQueue(){


 //FIFO

 //    also O(1)


}

void explaiPQ(){



//largest element or string at top

}


void explainSet(){

//stores everything in a sorted order and unique

}



void explainmultiset(){
    
}


void explainUSet(){




}


void explainMap(){


}

void explainMultimap(){

    //everything same as map ,only it can store multiple keys
    //only mpp[key] cannot be used here 
}


void explainUnorderedMap(){

    //same as set and unordered_Set difference
}




//KAAM KE ALGORITHMS ------------------------------------------------>>>


bool comp( pair<int,int> p1 , pair<int,int> p2){      //writing our own comperator   //andar () ke data type daalo jo compare kr rhe
    if (p1.second <p2.second) return true;
    if (p1.second >p2.second) return false;
    //if they are same  

    if (p1.first >p2.first) return true;
    if (p1.first >p2.first) return false;



}


void Algo_s(){

    //----to sort array or any other container using STL, no need for bubble sort or any other such shit

    sort (a, a+n);
    sort(v.begin(),v.end());

    sort (a+2,a+4);

    sort(a,a+n, greater<int>); //sort in descending order   //greater is an inbuilt comparetor


    //given

    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    //sort it according to second element 
    //if second elemnet is same , then sort accrding to
    //first element but in descending
 

    sort (a,a+n,comp);   //comp upar function humne bnaya hai



    //To retun the no. of set bits , ie given no e binary me kitne 1 hai , as 32 bit no on 7 , then saare 29 zero aur 3 ,1


    int num=7;
    int cnt = __builtin_popcount();

    long long num = 126358546561;
    int cnt =__builtin_popcountll();

    //to get all permutation


    string s ="123";
    //sort with STL
    sort(s.begin(), s.end());   //alwys sort wrna if 213 , then sirf 3 permutaion dega 6 ki jagah  //permutation dictionary order me honge 
                                // 123 , 132, 213, ....


    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));




    //to get the max element

    int maxi =*max_element(a,a+n);










}








int main(){

    int a=10;
    cout<<"Hello";
    return 0;


    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>> p2 ={1,{2,3}};

    cout<<p.first<<""<< p2.second.second << p2.second.first;

    pair<int,int> arr[] ={{1,2},{2,5},{3,4}};

    cout<<arr[1].second;







}