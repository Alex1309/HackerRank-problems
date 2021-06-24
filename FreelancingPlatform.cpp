//============================================================================
// Name        : Freelancing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <vector>
#include <map>

long minCost(int numProjects,vector <int>projectId,vector <int>bid){
	
	
	
	pair<long, long> pairt[projectId.size()];

	    // Storing the respective array
	    // elements in pairs.
        for (int i = 0; i < projectId.size(); i++){
            pairt[i].first = projectId[i];
            pairt[i].second = bid[i];
        }

	    // Sorting the pair array.
        sort(pairt, pairt + projectId.size());

	    // Modifying original arrays
        for (int i = 0; i < projectId.size();i++) {
            projectId[i] = pairt[i].first;
            bid[i] = pairt[i].second;
        }

        map<long,long> final;
        for(int i=0;i<numProjects;i++){
            final[i]=-1;
        }
        for(int i=0;i<projectId.size();i++){
            if(final[projectId[i]]==-1){
                final[projectId[i]]=bid[i];
            }
            if(final[numProjects-1]!=-1){
                break;
            }
        }
        map<long, long>::iterator it;
        long sum=0;
        for (it = final.begin(); it != final.end(); it++){
            sum+=(it->second);
        }
    return sum;
}

int main() {


	int n=3;
	vector<int> pr;
	pr.push_back(2);
	pr.push_back(0);
	pr.push_back(1);
	pr.push_back(2);

	vector<int> b;

	b.push_back(8);
	b.push_back(7);
	b.push_back(6);
	b.push_back(9);

	cout <<minCost(n,pr,b);
	cout<<endl;




}
