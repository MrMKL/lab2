#include<iostream>
#include<fstream>
#include<math.h>
#include <cstdlib>
#include"Class_A.h"
#include"Class_B.h"

using namespace std;


int main() {
  
  A Player_A;
  B Player_B;
  
  int k;
  int a, b;
  float m[6];
  ifstream infile("file.in",  ios::in);
  if(!infile) {
   cerr << "Failed opening" << endl;
   exit(1); 
  }
  while(infile >> k >> a >> b >> m[0] >> m[1] >> m[2] >> m[3] >> m[4] >> m[5]) {
    ofstream outfile("file.out", ios::out);
    if(!outfile) {
      cerr << "Failed opening" << endl;
      exit(1);
     }
     

     
    outfile << a << " " << b << " " << endl;
    for(int p = 0; p < 6; ++p) {
      outfile << Player_A.R(a, k, m[p], Player_A.elo(b, a)) << " ";
      outfile << Player_B.R(b, k, (1.0 - m[p]), Player_B.elo(a, b)) << endl;
      a = Player_A.rating(Player_A.R(a, k, m[p], Player_A.elo(b, a)));
      b = Player_B.rating(Player_B.R(b, k, (1.0 - m[p]), Player_B.elo(a, b)));    
    }


    
   
    
  } 
}

