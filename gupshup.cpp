#include<bits/stdc++.h>
using namespace std;

class client;

struct comp1 {
    bool operator( client& a, client& b ) {
        {
            if (b.msgs.empty()) return false;
            if (a.msgs.empty() || a.msgs.top() > b.msgs.top())
                return false;

        }
    }
};

struct comp2 {
    
}


class client{
    public:
    queue<int> msgq;
    float tips;
    float left;
    float over;
};

priority_queue<client, vector<client>, comp1> guaranteed;
priority_queue<client, vector<client>, comp2> ovrflow;


int main()
{


    return 0;
}