#include<iostream>
#include<string>
#include<vector>

using namespace std;

class vertix{
public: 
  string label; 
  int weight; 
  vertix* link; 
};

int main(){


  
  int vertices,weight; 
  string label; 
  
  cout<< "Enter the number of vertices: "; 
  cin >> vertices; 
  vector<vertix*> graph; 

  for(int i = 1; i<=vertices; i++){
    cout<<"Enter the label for vertix"<< i << " (i.e. A, B, C)" << endl;
    cin>> label;
    vertix* new_vert = new vertix(); 
    new_vert->label = label; 
    cout<<"Enter the weight for vertix"<< i << " (i.e. A, B, C)" << endl;;
    cin >> weight; 
    new_vert->weight = weight; 
    graph.push_back(new_vert); 
  }
  graph[1]->link = new vertix()

  for(int i = 1; i<=vertices; i++){
    cout<<"Enter the l
  }
  
}
