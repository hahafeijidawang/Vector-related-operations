
#include <iostream>

#include<vector>

#include<algorithm>
#include"stdio.h"
using namespace std;
//����β��Ԫ�ص�������ɾ����
void main31(){

  vector<int> v1;

    cout<<"sizeof(v1):"<<sizeof(v1)<<endl;

    v1.push_back(1);

    v1.push_back(2);

    v1.push_back(3);

    cout<<"sizeof(v1):"<<sizeof(v1)<<endl;



    cout<<"ͷ��Ԫ�� "<<v1.front()<<endl;

   //�޸�ͷ��Ԫ�ء���������ֵ ��Ӧ�÷���һ�����á�
    v1.front() = 11;


    while(v1.size()>0){

        cout<<"β��Ԫ�أ�"<<v1.back();//��ȡβ��Ԫ�ء�

        v1.pop_back();//���β��Ԫ�ء�

    }






}
//vector ��ʼ����
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




//vector �ı���  ͨ������ķ�ʽ��
void main33(){

    vector<int> v1(10);//��ǰ���ڴ�׼���á�

    for(int i=0;i<10;i++){

        v1[i] = i+1;

    }

//    for(int i=0;i<10;i++){


//        printf("%d ",v1[i]);

//  }��

     printV(v1);

}

//push_back ��ǿ������

void main34(){


    vector<int> v1(10);//��ǰ���ڴ�׼���ó�ʼ��Ϊ0

    v1.push_back(100);

    v1.push_back(12);

    printV(v1);



}
//1 ��������
//it.begin ָ����Ԫ�أ�it.endָ�����һ��Ԫ�صĺ���һλ��
void main35(){

    vector<int> v1(10);

    for(int i=0;i<10;i++){

        v1[i] =i+1;
    }
    //���������
    for(vector<int>::iterator it=v1.begin();it!=v1.end();it++){

        cout<<*it<<" ";

    }

    //���������
    for(vector<int>::reverse_iterator rit = v1.rbegin();rit!=v1.rend();rit++)

            cout<<*rit<<"";

}
void main36(){

    vector<int> v1(10);

    for(int i=0;i<10;i++){

        v1[i]=i+1;
    }
    //����ɾ��
    v1.erase(v1.begin(),v1.begin()+3);

     printV(v1);
     cout<<endl;

     //ָ��λ��ɾ����
     v1.erase(v1.begin());//ɾ��ͷ��Ԫ�ء�

     printV(v1);

     cout<<endl;

     //����Ԫ�ص�ֵ

     v1[1] =2;

     v1[6] =2;

     printV(v1);

     cout<<endl;

     for(vector<int>::iterator it = v1.begin();it!=v1.end();/*it++*/)
     //��ɾ����������ָ���Ԫ�ص�ʱ��eraseɾ����������it�Զ������ƶ���
     {

        if(*it == 2){

            it=v1.erase(it);
        }

        else{


            it++;//��it++�������
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
