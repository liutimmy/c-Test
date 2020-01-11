#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
      int sum = 0, val =1;
      while (val <= 10){
          sum+=val;
          val++;
      } 
      std::cout << "sum 1 to 10 inclusive is "
                << sum << endl;
      return 0;
}