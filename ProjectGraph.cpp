#include <iostream>
#include <vector>
#include <string>

using namespace std; 

int main(){
    struct Variable {
        string name;
        bool selfDepent;
    };
    struct Loop {
        string condition;
        vector<Variable> variables;
    };
    struct Func {
        string name;
        vector<Variable> input;
        vector<Variable> variables;
        vector<Loop> loops;
        vector<Variable> Func_return;
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


    Loop loop_while;
    loop_while.condition = "left < right";

    loop_while.variables.push_back(area);
    
    
    Func maxArea;
    maxArea.name = "maxArea";
    maxArea.variables.push_back(result);
    maxArea.loops.push_back(loop_while);
    maxArea.input.push_back(input_func);
    maxArea.Func_return.push_back(result);

}