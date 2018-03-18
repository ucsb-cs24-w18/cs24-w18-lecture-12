//stackExamples.cpp
//reverse a string using the stack data structure

#include <iostream>
#include <stack>

using namespace std;

string reverse(string input){
	string result ="";
	stack<char> st; //Use the STL stack container class

	for(auto item:input)  //range based for loop
	{
		st.push(item);
	}

	while(!st.empty()){
		result+= st.top();
		st.pop();
	}


	return result;
}


int main(int argc, char* argv [])
{
	
	string input(argv[1]);
	cout<<"Original string "<<input<<endl;
	string result = reverse(input);
	cout<<"Reversed string "<<result<<endl;
}