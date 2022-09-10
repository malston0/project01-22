/**
  * @project 0 (self replicating program)
  * @Makayla Alston
  * @collaborators
  * @September 4,2022
 */

 #include <iostream>
 #include <cstring>
 #include <vector>
 using namespace std;


int main()
{
   vector <string> content;
   "trigger";
   content.push_back("#include <iostream>");
   content.push_back("#include <cstring>");
   content.push_back("#include <vector>");
   content.push_back("using namespace std;");
   content.push_back("int main()");
   content.push_back("{");
   content.push_back("vector <string> content;");
   content.push_back("trigger:");
   content.push_back("for (int index = 0; index < content.size(); index++)");
   content.push_back("{");
   content.push_back("cout << content[index] << endl;");
   content.push_back ("if (content[index] ==");
   content.push_back("trigger");
   content.push_back(")");
   content.push_back("{");
   content.push_back ("for (int index2 = 0; index2 < content.size(); index2++)");
   content.push_back("{");
   content.push_back("cout <<");
   content.push_back("content.push_back(");
   content.push_back(" << index2 << ");
   content.push_back(");");
   content.push_back(" << endl;");
   content.push_back("}");
   content.push_back("}");
   content.push_back("}");
   content.push_back("}");
   for (int index = 0; index < content.size(); index++)
   {
      cout << content[index] << endl;
      if (content[index] == "trigger")
      {
         for (int index2 = 0; index2 < content.size(); index2++)
         {
            cout << "content.push_back(" << content[index2] << ");" << endl;
         }
      }
   }
}
