#include <iostream>
#include <vector>
#include <string>

using namespace std; 

int main(){

    int a;

    struct Variable {
        string name;
        bool selfDepent;
    };

    struct Elsif {
        string condition;
        vector<Variable> true_variables;
        vector<Variable> false_variables;
    };

    struct Loop {
        string condition;
        vector<Variable> variables;
        vector<Elsif> elsifs;
    };

    struct Func {
        string name;
        vector<Variable> input;
        vector<Variable> variables;
        vector<Loop> loops;
        vector<Variable> Func_return;
        vector<Elsif> elsifs;
    };



    Variable result;
    result.name = "int result";
    result.selfDepent = true;


    Variable area;
    area.name = "int area";
    area.selfDepent = false;


    Variable input_func;
    input_func.name = "vector<int>& height";
    input_func.selfDepent = false;

    Variable left;
    left.name = "left";
    left.selfDepent = false;

    Variable right;
    right.name = "right";
    right.selfDepent = false;


    Elsif elsifs;
    elsifs.condition = "height[left] < height[right]";
    elsifs.true_variables.push_back(left);
    elsifs.false_variables.push_back(right);
    
    Loop loop_while;
    loop_while.condition = "left < right";
    loop_while.variables.push_back(area);
    loop_while.elsifs.push_back(elsifs);


    


    Func maxArea;
    maxArea.name = "maxArea";
    maxArea.variables.push_back(result);
    maxArea.variables.push_back(left);
    maxArea.variables.push_back(right);
    maxArea.loops.push_back(loop_while);
    maxArea.input.push_back(input_func);
    maxArea.Func_return.push_back(result);

}