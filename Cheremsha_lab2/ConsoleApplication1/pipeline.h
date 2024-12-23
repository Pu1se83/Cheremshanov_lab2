#pragma once

#ifndef PIPELINE_H_
#define PIPELINE_H_

#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

class Pipeline
{

private:
    static int MaxIDPipe;
    int PipeID = 0;
    int LengthOfPipe = 0;
    short int Diameter = 0;
    string PipeName = "None";
    bool RepairIndicator = 0;

public:
    Pipeline();
    int GetID() const { return PipeID; };
    friend void ChangeRepair(Pipeline& pipe, bool repair);
    friend istream& operator >> (istream& in, unordered_map<int, Pipeline>& pipes);
    friend ostream& operator << (ostream& out, const Pipeline& pipe);
    friend ofstream& operator << (ofstream& out, const Pipeline& pipe);
    friend ifstream& operator >> (ifstream& in, unordered_map<int, Pipeline>& pipes);
    friend void filter_pipes_by_name(unordered_map<int, Pipeline>& pipes);
    friend void filter_pipes_by_repair(unordered_map<int, Pipeline>& pipes);
};

ostream& operator << (ostream& out, const unordered_map<int, Pipeline>& pipes);
ofstream& operator << (ofstream& out, const unordered_map<int, Pipeline>& pipes);
#endif