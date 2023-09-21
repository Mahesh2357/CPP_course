#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Youtube_channel{
    protected:
    string title;
    float rating;
    public:
    Youtube_channel(string s, float r){
        title = s;
        rating = r;
    }
    //* if we cant use virtual keyword , the defult display is run.
    //! i.e., dinchak code...
    
    virtual void display() = 0;
    // virtual void display(){
    //     cout << "dinchak code..." << endl;
    // }
};    

class youtube_video : public Youtube_channel{

    float video_width;
    public:
    youtube_video(string s, float r, float vl) : Youtube_channel(s, r){
        video_width = vl;
    }
    void display(){
        cout << "This is a video with tittle : " << title << endl;
        cout << "The video rating is : " << rating << " out of 5 " << endl;
        cout << "Total video_width: " << video_width << " minutes " << endl;
        cout << endl;
    }
};

class Youtube_channel_text : public Youtube_channel{
    int words;
    public :
    Youtube_channel_text(string s, float r, int w) : Youtube_channel(s, r){
        words = w;
    }
    void display(){
        cout << "This is a video with tittle : " << title << endl;
        cout << "The video rating is : " << rating << "out of 5 " << endl;
        cout << "no. of words in text is " << words << endl;
    }
};
int main(){
    string title;
    float video_width, rating;
    int words;

    title = "my first video";
    rating = 4.6;
    video_width = 33.55;
    youtube_video o1(title, rating, video_width);
    // o1.display();
    cout << endl;
    title = "my second video";
    rating = 4.9;
    words = 6000;
    Youtube_channel_text o2(title, rating, words);
    
    Youtube_channel *tuts[2];
    tuts[0] = &o1;
    tuts[1] = &o2;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

