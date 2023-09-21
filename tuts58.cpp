#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//! Pure virtual function is a function that doesn’t 
//! perform any operation and the function is
//!  declared by assigning the value 0 to it. 

//* this is abstract base class.
class Youtube_channel{ 
    protected:
    string title;
    float rating;
    public:
    Youtube_channel(string s, float r){
        title = s;
        rating = r;
    }
    //todo: do-nothing function. or virtual function.
    virtual void display() = 0;
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

// class ee : public Youtube_channel{
//     int id;
//     public :
//     ee(string s, float r, int y) : youtube_channel(s, r){
//         id = y;
//     }
//     display(){
//         cout << "the id is " << id << endl;

//     }
// };
int main(){
    string title;
    float video_width, rating;
    int words;
    int id;

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

