//https://dmoj.ca/problem/ac19p4
//2021
#include<bits/stdc++.h>
using namespace std;

bool sortbysecond(const pair<int,int> &a, const pair<int,int> &b) { 
    if (a.second == b.second) {
        return (a.first < b.first);
    }
    return (a.second < b.second); 
} 

int main() {
    vector< pair <int,int> > point;
    int N, x, y;
    
    int numX = 0, numY = 0; //don't need numY
    //cout << area(4, 5, 7, 10)<< endl;
    cin >> N;
    
    for (int i = 0; i < N; i++){
        cin >> x >> y;
        point.push_back(make_pair(x,y));
    }

    sort(point.begin(), point.end(), sortbysecond);
    
    int current;
    for (int i = 0; i < N-1; i++){ // if the second last, and the last are different, only the second last one gets deleted
        if (point[i].second == point[i+1].second){ //compares current to the next
            current = point[i].second;
            numY++;
        } else{
            if(point[i].second != current){
                point.erase(point.begin()+i);
                i--;
                N--;
            }
        }
    }
    
    if (point.size() < 4){ //technically if there are less than three points on the board there are no solutions. also if they all have the same second/first... 
        //possible = false;
        //cout << "0" << endl;
    } else{
        if (point[N-1].second != point[N-2].second){ //for the last, different element
            point.erase(point.end());
            N--;
        }
    }
    
    sort(point.begin(), point.end());
    
    int flow;
    for (int i = 0; i < N-1; i++){ // if the second last, and the last are different, only the second last one gets deleted
        if (point[i].first == point[i+1].first){ //compares current to the next
            flow = point[i].first;
            numX++;
        } else{
            if(point[i].first != flow){ 
                point.erase(point.begin()+i);
                i--;
                N--;
            }
        }
    }
    
    bool possible = true;
    if (point.size() < 4){ //technically if there are less than three points on the board there are no solutions. also if they all have the same second/first... 
        cout << "0" << endl;
        possible = false;
    } else{
        if (point[N-1].first != point[N-2].first){ //for the last, different element
            point.erase(point.end());
            N--;
        }
    }
    
    vector <int> Xs; //different Xs
    vector <int> pos; //location of the first different X
    
    Xs.push_back(point[0].first);
    pos.push_back(0);
    
    for (int i = 2; i < N; i++){
        if (point[i].first != Xs[Xs.size()-1]){
            Xs.push_back(point[i].first);
            pos.push_back(i);
        }
    }
    
    int highest_area = 0;
    
    for (int leftX = 0; leftX < Xs.size()-1; leftX++){ //loop for each leftmost x value
        int Ys = pos[leftX+1]-pos[leftX]; //the number of ys of that particular x value
        for (int firstY = 0; firstY < Ys-1; firstY++){ //within each x value there can be multiple y values.
            //cout << "My first Y value is " << firstY << endl;
            for (int secondY = firstY+1; secondY < Ys; secondY++){
                int a = point[pos[leftX] + firstY].second; //these are the converted Y-values
                int b = point[pos[leftX] + secondY].second;
                
                //create some variables to search
                bool foundA = false;
                bool foundB = false;
                
                for (int rightX = Xs.size()-1; rightX > leftX; rightX--){
                    int index = pos[rightX]; 
                    while(point[index].first == Xs[rightX]){ //as long as we have the same X value
                        if (point[index].second == a) {
                            foundA = true;
                        } else{
                            if (point[index].second == b){
                                foundB = true;
                            }
                        }
                        index++;
                    }
                    if (foundA && foundB){
                        int myArea = (Xs[rightX]-Xs[leftX])*(b-a);
                        
                        if (myArea > highest_area){
                            highest_area = myArea;
                        }
                    }
                    foundA = false;
                    foundB = false;
                }
            }
        }
    }
    
    if (possible){
        cout << highest_area << endl;
    }
    
    return 0;
}
