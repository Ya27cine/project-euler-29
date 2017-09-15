#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

/*** methodes : **/
int euler_29(int, int, int, int);
int is_repet(vector<int>, int);

int main()
{
    cout<<"Resultat : "<< euler_29(2,2,5,5);
    return 0;
}

int is_repet(vector<int> vect, int value)
{
  if( find(vect.begin(), vect.end(), value) != vect.end())
         return 1;
  return 0;
}

int euler_29(int init_a, int init_b, int limit_a, int limit_b)
{
     vector<int> res;
     int nb_repet = 0;

     for(int a(init_a); a <=  limit_a; a++)
        for( int b(init_b); b <= limit_b; b++){
            int new_value = pow(a,b);
            if( not is_repet(res, new_value) )
                    res.push_back( new_value );
        }

    return res.size();
}







































































































































































