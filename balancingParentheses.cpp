//============================================================================
// Name        : BalancingParentheses.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <stack>         


int main() {

string s="((()";
int cont=0;
		stack<char>stack;

		for(int i=0;i<s.size();i++){

			if(s.at(i)=='('){
				stack.push(s.at(i));
			}else if(!stack.empty() and s.at(i)==')' and stack.top()=='('){
					stack.pop();
			}else{
				cont++;
			}
		}
		cout<<cont+stack.size();
}
