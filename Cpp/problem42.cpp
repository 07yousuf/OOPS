#include<bits/stdc++.h>
using namespace std;
class Publication{
    public:
    string title;
    float price;
    
    void getdata(string a, float b){
        title = a;
        price = b;
    }
    void putdata(){
        cout<<"Book Name: "<<title<<endl<<"Book price: "<<price<<endl;
    }
};
class book:public Publication{
    public:
    int page_count;
    void getdata(int a){
        page_count = a;
    }
    void putdata(){
        cout<<"Total Page: "<<page_count<<endl;
    }
};
class tape : public Publication{
    public:
    float playing_time_minute;

    void getdata(float a){
        playing_time_minute =a;

    }
    void putdata(){
        cout<<"Audiocasstte Duration: "<<playing_time_minute<<endl;
    }
};
int main()
{
    book sample1;
    sample1.Publication::getdata("ANSI C",985);
    sample1.book::getdata(1100);
    tape sample2;
    sample2.tape::getdata(110.35);
    sample1.Publication::putdata();
    sample1.book::putdata();
    sample2.putdata();

}