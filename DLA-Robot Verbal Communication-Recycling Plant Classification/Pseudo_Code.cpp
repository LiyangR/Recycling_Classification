#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <fstream>
#include <sstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

/*sigma = sqrt((1/(N-1))sum((x[i]-xavg)^2))
variance =  sigma^2
weight = 1/variance
standard error of mean = sigma/sqrt(N)
weighted avg = sum(weight[i]*avg)/sum(weight)
standard deviation of weighted avg = 1/sqrt(sum(weight))*/

class neuron{ //using 3 inputs in an array to test
  vector<double> weights;
  vector<int> inputs;
  vector<int> outputs;
  vector<int> derivedOutputs;
  void initWeights(){
    cout<<"Enter 3 initial weights: ";
    cin>>weights;
    cout<<endl;
  }
  void adjustWeights(){
    for()
  }
  void out(){
    for(int i=0; i<inputs.size; i++){
      derivedOutputs[i]=sum(weights*inputs[i]);
    }
  }
}
