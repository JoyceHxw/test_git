#include <iostream>
using namespace std;
#include <windows.h>
#include <queue>
#include <vector>
#include <algorithm>
#include "AVLTree.h"
#include "BTree.h"
#include "RBTree.h"
#include "BSTree.h"

// 层序遍历
// template<class T>
// void show(T* root){
//     if(root==nullptr){
//         return;
//     }
//     queue<T*> q;
//     q.push(root);
//     int level=1;
//     while(!q.empty()){
//         cout<<"level "<<level<<": ";
//         int size=q.size();
//         int cnt=0;
//         while(cnt<size){
//             T* node=q.front();
//             cout<<node->key<<" ";
//             q.pop();
//             if(node->left!=nullptr){
//                 q.push(node->left);
//             }
//             if(node->right!=nullptr){
//                 q.push(node->right);
//             }
//             cnt++;
//         }
//         level++;
//         cout<<endl;
//     }
// }

int main(){
    // 按递增顺序插入
    LARGE_INTEGER t1, t2, tc;
    QueryPerformanceFrequency(&tc);
    for(int N=10000; N<=400000; N+=20000){
        cout<<"-------------------------------------------"<<endl;
        BSTree* BS_root=nullptr;
        AVLTree* AVL_root=nullptr;
        BTree* B_root=nullptr;
        RBTree* RB_root=nullptr;
        // QueryPerformanceFrequency(&tc);
        QueryPerformanceCounter(&t1);
        for(int i=1; i<=N; i++){
            if(BS_root==nullptr){
                BS_root=new BSTree(i);
            }
            else{
                BS_root=BS_root->insert(BS_root,i);
            }
        }
        QueryPerformanceCounter(&t2);
        cout << "BS树按顺序插入"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        // QueryPerformanceFrequency(&tc);
        // QueryPerformanceCounter(&t1);
        // for(int i=1; i<=N; i++){
        //     if(AVL_root==nullptr){
        //         AVL_root=new AVLTree(i);
        //     }
        //     else{
        //         AVL_root=AVL_root->insert(AVL_root,i);
        //     }
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "AVL树按顺序插入"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=1; i<=N; i++){
        //     if(B_root==nullptr){
        //         B_root=new BTree(i);
        //     }
        //     else{
        //         B_root=B_root->insert(B_root,i);
        //     }
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "B树按顺序插入"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=1; i<=N; i++){
        //     if(RB_root==nullptr){
        //         RB_root=new RBTree(i);
        //         RB_root->color=BLACK;
        //     }
        //     else{
        //         RB_root=RB_root->insert(RB_root,i);
        //     }
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "RB树按顺序插入"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;


        cout<<"**********"<<endl;
        // 随机查找
        // 伪随机数
        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<1000; i++){
        //     int random=rand()%N+1; //1-N的伪随机数
        //     BS_root->search(BS_root,random);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "BS树随机查找1000个数"<<"用时（us）" << (t2.QuadPart - t1.QuadPart)*1000000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<1000; i++){
        //     int random=rand()%N+1; //1-N的伪随机数
        //     AVL_root->search(AVL_root,random);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "AVL树随机查找1000个数"<<"用时（us）" << (t2.QuadPart - t1.QuadPart)*1000000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<1000; i++){
        //     int random=rand()%N+1; //1-N的伪随机数
        //     B_root->search(B_root,random);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "B树随机查找1000个数"<<"用时（us）" << (t2.QuadPart - t1.QuadPart)*1000000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<1000; i++){
        //     int random=rand()%N+1; //1-N的伪随机数
        //     RB_root->search(RB_root,random);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "RB树随机查找1000个数"<<"用时（us）" << (t2.QuadPart - t1.QuadPart)*1000000 / tc.QuadPart << endl;


        // cout<<"=========="<<endl;
        // 相同顺序删除
        // QueryPerformanceCounter(&t1);
        // for(int i=1; i<=N; i++){
        //     BS_root=BS_root->remove(BS_root,i);
        // }
        // // Sleep(1000);
        // QueryPerformanceCounter(&t2);
        // cout << "BS树按相同顺序删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=1; i<=N; i++){
        //     AVL_root=AVL_root->remove(AVL_root,i);
        // }
        // // Sleep(1000);
        // QueryPerformanceCounter(&t2);
        // cout << "AVL树按相同顺序删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=1; i<=N; i++){
        //     B_root=B_root->remove(B_root,i);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "B树按相同顺序删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=1; i<=N; i++){
        //     RB_root=RB_root->remove(RB_root,i);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "RB树按相同顺序删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;


        cout<<"++++++++++"<<endl;
        // // 相反顺序删除
        QueryPerformanceCounter(&t1);
        for(int i=1; i<=N; i++){
            BS_root=BS_root->remove(BS_root,N-i+1);
        }
        // Sleep(1000);
        QueryPerformanceCounter(&t2);
        cout << "BS树按相反顺序删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=1; i<=N; i++){
        //     AVL_root=AVL_root->remove(AVL_root,N-i+1);
        // }
        // // Sleep(1000);
        // QueryPerformanceCounter(&t2);
        // cout << "AVL树按相反顺序删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=1; i<=N; i++){
        //     B_root=B_root->remove(B_root,N-i+1);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "B树按相反顺序删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=1; i<=N; i++){
        //     RB_root=RB_root->remove(RB_root,N-i+1);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "RB树按相反顺序删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;
    }
    // show<RBTree>(RB_root);

    // 随机插入
    // 不重复的随机数，vector,random_shuffle
    // for(int N=10000; N<=400000; N+=20000){
    //     cout<<"-------------------------------------------"<<endl;
    //     // LARGE_INTEGER t1, t2, tc;
    //     BSTree* BS_root=nullptr;
    //     AVLTree* AVL_root=nullptr;
    //     BTree* B_root=nullptr;
    //     RBTree* RB_root=nullptr;
    //     vector<int>v;
    //     for(int i=0; i<N; i++){
    //         v.push_back(i+1);
    //     }
    //     random_shuffle(v.begin(),v.end());

        // QueryPerformanceFrequency(&tc);
        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<N; i++){
        //     if(BS_root==nullptr){
        //         BS_root=new BSTree(v[i]);
        //     }
        //     else{
        //         BS_root=BS_root->insert(BS_root,v[i]);
        //     }
        // }
        // // Sleep(1000);
        // QueryPerformanceCounter(&t2);
        // cout << "BS树随机插入"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;
        // show(BS_root);

        // QueryPerformanceFrequency(&tc);
        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<N; i++){
        //     if(AVL_root==nullptr){
        //         AVL_root=new AVLTree(v[i]);
        //     }
        //     else{
        //         AVL_root=AVL_root->insert(AVL_root,v[i]);
        //     }
        // }
        // // Sleep(1000);
        // QueryPerformanceCounter(&t2);
        // cout << "AVL树随机插入"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<N; i++){
        //     if(B_root==nullptr){
        //         B_root=new BTree(v[i]);
        //     }
        //     else{
        //         B_root=B_root->insert(B_root,v[i]);
        //     }
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "B树随机插入"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<N; i++){
        //     if(RB_root==nullptr){
        //         RB_root=new RBTree(v[i]);
        //         RB_root->color=BLACK;
        //     }
        //     else{
        //         RB_root=RB_root->insert(RB_root,v[i]);
        //     }
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "RB树随机插入"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

        
        // cout<<"**********"<<endl;
        // 随机查找
        // 伪随机数
        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<1000; i++){
        //     int random=rand()%N+1; //1-N的伪随机数
        //     BS_root->search(BS_root,random);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "BS树随机查找1000个数"<<"用时（us）" << (t2.QuadPart - t1.QuadPart)*1000000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<1000; i++){
        //     int random=rand()%N+1; //1-N的伪随机数
        //     AVL_root->search(AVL_root,random);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "AVL树随机查找1000个数"<<"用时（us）" << (t2.QuadPart - t1.QuadPart)*1000000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<1000; i++){
        //     int random=rand()%N+1; //1-N的伪随机数
        //     B_root->search(B_root,random);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "B树随机查找1000个数"<<"用时（us）" << (t2.QuadPart - t1.QuadPart)*1000000 / tc.QuadPart << endl;

        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<1000; i++){
        //     int random=rand()%N+1; //1-N的伪随机数
        //     RB_root->search(RB_root,random);
        // }
        // QueryPerformanceCounter(&t2);
        // cout << "RB树随机查找1000个数"<<"用时（us）" << (t2.QuadPart - t1.QuadPart)*1000000 / tc.QuadPart << endl;

        
        // cout<<"=========="<<endl;
        // 随机删除
        // 不重复的随机数，vector,random_shuffle
        // random_shuffle(v.begin(),v.end());
        // QueryPerformanceCounter(&t1);
        // for(int i=0; i<N; i++){
        //     BS_root=BS_root->remove(BS_root,v[i]);
        // }
        // // Sleep(1000);
        // QueryPerformanceCounter(&t2);
        // cout << "BS树随机删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

    //     QueryPerformanceCounter(&t1);
    //     for(int i=0; i<N; i++){
    //         AVL_root=AVL_root->remove(AVL_root,v[i]);
    //     }
    //     // Sleep(1000);
    //     QueryPerformanceCounter(&t2);
    //     cout << "AVL树随机删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

    //     QueryPerformanceCounter(&t1);
    //     for(int i=0; i<N; i++){
    //         B_root=B_root->remove(B_root,v[i]);
    //     }
    //     QueryPerformanceCounter(&t2);
    //     cout << "B树随机删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

    //     QueryPerformanceCounter(&t1);
    //     for(int i=0; i<N; i++){
    //         RB_root=RB_root->remove(RB_root,v[i]);
    //     }
    //     QueryPerformanceCounter(&t2);
    //     cout << "RB树随机删除"<<N<<"个数"<<"用时（ms）" << (t2.QuadPart - t1.QuadPart)*1000 / tc.QuadPart << endl;

    // }
}