#ifndef ALGORITHM_COMPETITION_CHARACTER01_H
#define ALGORITHM_COMPETITION_CHARACTER01_H

class character01 {
//1.1.1动态链表实现约瑟夫问题
private:
    struct node{
        int data;
        node* next;
    };
public:
    void Dynamicachieve();

//1.1.2静态链表实现约瑟夫问题
private:
    static const int maxlen=105;
    struct nodearr{
        int id,nextid;
        int data;
    }nodearrs[maxlen];
public:
    void Arrayachieve();
//1.1.3
};


#endif //ALGORITHM_COMPETITION_CHARACTER01_H
