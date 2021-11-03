#pragma once
#ifndef Header_H
#define Header_H
#include<regex>
#include<string>
#include<iostream> 
#include <vector>
#include<map>
#include<algorithm>
using namespace std;

struct node
{
	string data;
	struct node* left;
	struct node* right;
	struct node* next_line;

};

class tree
{
private:
	node *root;

public:
	tree(string s = "\0")
	{
		/*root = new  node();
		root.data = s;
		root.left = NULL;
		root.right = NULL;
		root.next_line = NULL;
		*/
		root = NULL;

	}
	void addline(string data, string left, string right)
	{
		node *temp = root; //for loop
		node *newnode = new node; // for data
		node *nodright = new node;
		node *nodleft = new node;


		if (root == NULL)
		{

			newnode->data = data;


			nodright->data = right;
			nodright->left = NULL;
			nodright->right = NULL;
			nodright->next_line = NULL;



			nodleft->data = left;
			nodleft->left = NULL;
			nodleft->right = NULL;
			nodleft->next_line = NULL;



			root = newnode;
			root->right = nodright;
			root->left = nodleft;
			root->next_line = NULL;

		}

		else
		{

			while (temp->next_line != NULL)
				temp = temp->next_line;




			newnode->data = data;


			nodright->data = right;
			nodright->left = NULL;
			nodright->right = NULL;
			nodright->next_line = NULL;



			nodleft->data = left;
			nodleft->left = NULL;
			nodleft->right = NULL;
			nodleft->next_line = NULL;

			temp->next_line = newnode;
			newnode->next_line = NULL;
			newnode->left = nodleft;
			newnode->right = nodright;




		}




	}

	void display()
	{
		node *temp = root;
		if (temp == NULL)
		{
			cout << "no data" << endl;
			return;
		}
		do
		{
			cout << temp->left->data << "-----------" << temp->data << "-----------" << temp->right->data << endl;
			temp = temp->next_line;


		} while (temp != NULL);




	}



};





string clean(string s)
{
	string S="";
	int i = 0;
	int strlen = s.length();
	while (i < strlen)
	{
		if (s[i] == '{')
		{

		 // cout<<i<<"  "<<endl;
			while (s[i] != '}')
			{
				i++;
			}
			
			i++;
			
		}
		/*if(s[i]=='\n')
			S.append(" ");*/
		else
		S+=s[i];
		i++;

	}
	//cout << "stroo = " << S << endl;
	return S;


}






vector<string> split(string s)
{

	string s1="";
	vector<string> v;
	//vector<string> v1;
	/**/


	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			v.push_back(s1);
			if (v[v.size() - 1] == " " || v[v.size() - 1] == "" || v[v.size() - 1] == "\r" || v[v.size() - 1] == "\0")
				v.pop_back();
			s1="";
		}
		else if (s[i] == '\n')
		{
			v.push_back(s1);
			if (v[v.size() - 1] == " " || v[v.size() - 1] == "" || v[v.size() - 1] == "\r" || v[v.size() - 1] == "\0")
				v.pop_back();
			s1 = "";
			v.push_back("$$3");
		}
		else
		{
			s1 += s[i];
		}

		


	}















	//for (int i = 0; i<s.size(); i++)
	//{
	//	if (s[i] == ' ' || s[i] == '\0' || s[i] == '\n')
	//	{
	//		if (s1 != "" || s1 != "\n" || s1 != "\0"||s1 !=" ")
	//		{
	//			v.push_back(s1);
	//			if (v[v.size()-1] == "\0" )
	//			{
	//				v.pop_back();

	//			}
	//			else if (v[v.size() - 1] == "\r" || v[v.size() - 1] == "\n")
	//			{
	//				v.pop_back();
	//				v.push_back("$$$");
	//			}
	//			
	//			
	//			s1 = "";
	//			continue;
	//		}
	//		i++;
	//	}
	//	//if(s[i] != '\0')
	//	s1 += s[i];
	// // cout<<s1<<endl;

	//}
	//
	//
	//v.push_back(s1);
/*vector<string>::iterator it;
	it = v.begin();
	while (it != v.end())
	{

	if (*it == "read")
	cout << *it << " -> READ_KW" << endl;
	else if (*it == "write")
	cout << *it << " -> WRITE_KW" << endl;
	else if (it == "" || *it == "/" || *it == "+" || *it == "-")
	cout << *it << " -> OPERATOR" << endl;
	else if (*it == "<" || *it == ">" || *it == "=" || *it == "<>")
	cout << *it << " -> CONDATION" << endl;
	else if (*it == "if" || *it == "else" || *it == "then" || *it == "end")
	cout << *it << " -> CONTROL" << endl;
	else if (*it == "repet" || *it == "until")
	cout << *it << " -> LOOP" << endl;
	else if (*it == ";")
	cout << *it << " -> END LINE" << endl;
	else if (*it == ":=")
	cout << *it << " -> ASSINMANT" << endl;
	else
	cout << *it << " -> ID" << endl;


	it++;
	}*/

v.push_back("####");
vector<string>::iterator it;
	it = v.begin();
	int i=0;
	while (it != v.end())
	{
	
	/*	if (*it == "\0")
		{
			
			cout<<"hhhhhhhhhhhhhhhhhh"<<endl;
			v.swap(it,"kjk");
			it++;
			continue;

		}*/
	cout<<*it<<endl;

	it++;
	//i++;
	
	}
	

	return v;



}

/*
// regex_match example
#include <iostream>
#include <string>
#include <regex>


{

	if (std::regex_match("subject", std::regex("(sub)(.*)")))
		std::cout << "string literal matched\n";

	const char cstr[] = "subject";
	std::string s("subject");
	std::regex e("(sub)(.*)");

	if (std::regex_match(s, e))
		std::cout << "string object matched\n";

	if (std::regex_match(s.begin(), s.end(), e))
		std::cout << "range matched\n";

	std::cmatch cm;    // same as std::match_results<const char*> cm;
	std::regex_match(cstr, cm, e);
	std::cout << "string literal with " << cm.size() << " matches\n";

	std::smatch sm;    // same as std::match_results<string::const_iterator> sm;
	std::regex_match(s, sm, e);
	std::cout << "string object with " << sm.size() << " matches\n";

	std::regex_match(s.cbegin(), s.cend(), sm, e);
	std::cout << "range with " << sm.size() << " matches\n";

	// using explicit flags:
	std::regex_match(cstr, cm, e, std::regex_constants::match_default);

	std::cout << "the matches were: ";
	for (unsigned i = 0; i<cm.size(); ++i) {
		std::cout << "[" << cm[i] << "] ";
	}

	std::cout << std::endl;

	return 0;
}

// regex_search example
#include <iostream>
#include <string>
#include <regex>

int main ()
{
std::string s ("this subject has a submarine as a subsequence");
std::smatch m;
std::regex e ("\\b(sub)([^ ]*)");   // matches words beginning by "sub"

std::cout << "Target sequence: " << s << std::endl;
std::cout << "Regular expression: /\\b(sub)([^ ]*)/" << std::endl;
std::cout << "The following matches and submatches were found:" << std::endl;

while (std::regex_search (s,m,e)) {
for (auto x:m) std::cout << x << " ";
std::cout << std::endl;
s = m.suffix().str();
}

return 0;
}
#include <iostream>
#include <string>
#include <regex>

int main ()
{
std::string str("1231");
std::regex r("^(\\d)");
std::smatch m;
std::regex_search(str, m, r);
for(auto v: m) std::cout << v << std::endl;



*/



#endif