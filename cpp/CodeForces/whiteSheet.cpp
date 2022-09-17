#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
#include <ctype.h>
#include <set>
#include <iterator>
using namespace std;

struct Rect {
    int x1,y1,x2,y2;
    int area() { return abs((y2-y1)*(x2-x1)); }
};

int intersect(Rect p, Rect q){
    int xOverlap = max(0,min(p.x2,q.x2)-max(p.x1,q.x1));
;
    int yOverlap = max(0,min(p.y2,q.y2)-max(p.y1,q.y1));
    return abs(xOverlap*yOverlap);
}


int main(){
    Rect w, b1, b2;

    cin >> w.x1 >> w.y1 >> w.x2 >> w.y2;
    cin >> b1.x1 >> b1.y1 >> b1.x2 >> b1.y2;
    cin >> b2.x1 >> b2.y1 >> b2.x2 >> b2.y2;

    cout << w.area() << " " << intersect(w, b1) << " " << intersect(w, b2) << "  " << intersect(b1, b2) << endl;





}




