
#include <iostream>

#include<vector>

#include<algorithm>
#include"stdio.h"
using namespace std;
//数组尾部元素的添加与删减。
void main31(){

  vector<int> v1;

    cout<<"sizeof(v1):"<<sizeof(v1)<<endl;

    v1.push_back(1);

    v1.push_back(2);

    v1.push_back(3);

    cout<<"sizeof(v1):"<<sizeof(v1)<<endl;



    cout<<"头部元素 "<<v1.front()<<endl;

   //修改头部元素。函数当左值 ，应该返回一个引用。
    v1.front() = 11;


    while(v1.size()>0){

        cout<<"尾部元素："<<v1.back();//获取尾部元素。

        v1.pop_back();//清除尾部元素。

    }






}
//vector 初始化。
void main32(){

    vector<int> v1;

    v1.push_back(1);

    v1.push_back(2);

    v1.push_back(3);

    v1.push_back(7);

    vector<int> v2 = v1;

    vector<int> v3(v1.begin(),v1.begin()+2);

}

void printV(vector<int> &v){

    for(int i = 0;i<v.size();i++){


        cout<<v[i]<<"";

    }


}




//vector 的遍历  通过数组的方式。
void main33(){

    vector<int> v1(10);//提前把内存准备好。

    for(int i=0;i<10;i++){

        v1[i] = i+1;

    }

//    for(int i=0;i<10;i++){


//        printf("%d ",v1[i]);

//  }、

     printV(v1);

}

//push_back 的强化记忆

void main34(){


    vector<int> v1(10);//提前把内存准备好初始化为0

    v1.push_back(100);

    v1.push_back(12);

    printV(v1);



}
//1 迭代器。
//it.begin 指向首元素，it.end指向最后一个元素的后面一位。
void main35(){

    vector<int> v1(10);

    for(int i=0;i<10;i++){

        v1[i] =i+1;
    }
    //正向遍历。
    for(vector<int>::iterator it=v1.begin();it!=v1.end();it++){

        cout<<*it<<" ";

    }

    //逆序遍历。
    for(vector<int>::reverse_iterator rit = v1.rbegin();rit!=v1.rend();rit++)

            cout<<*rit<<"";

}
void main36(){

    vector<int> v1(10);

    for(int i=0;i<10;i++){

        v1[i]=i+1;
    }
    //区间删除
    v1.erase(v1.begin(),v1.begin()+3);

     printV(v1);
     cout<<endl;

     //指定位置删除。
     v1.erase(v1.begin());//删除头部元素。

     printV(v1);

     cout<<endl;

     //根据元素的值

     v1[1] =2;

     v1[6] =2;

     printV(v1);

     cout<<endl;

     for(vector<int>::iterator it = v1.begin();it!=v1.end();/*it++*/)
     //当删除迭代器所指向的元素的时候，erase删除函数会让it自动向下移动。
     {

        if(*it == 2){

            it=v1.erase(it);
        }

        else{


            it++;//把it++放在这里。
        }
     }

     printV(v1);

}


int main()
 {
   // main31();

   //main32();

   // main33();

   //main34();

     //main35();

    main36();

    return 0;
}

