//
// Created by lin on 2021/12/26.
//

#ifndef MINI_MLCS_MINI_MLCS_H
#define MINI_MLCS_MINI_MLCS_H

#include "basic_mlcs.h"
struct diversity_index{
    double diversity;
    int index;
};

struct Point_vec{
    vector<int> p;
    string s;
};


struct cmp{
    bool operator()(struct diversity_index a,struct diversity_index b){
        return a.diversity > b.diversity;
    }
};

void mini_dag_1_2_3(vector<string> res, int lower_mlcs, vector<vector<vector<int>>> ST, vector<char> sigma,
               vector<vector<vector<int>>> DT, vector<vector<vector<int>>> UT,vector<int> index);
void printMLCSs(vector<vector<struct Point_vec>> D,int k);
void mini_mlcs(vector<string> res, int delta, int lower_mlcs);
void computer_sequence(vector<string> T,int d,vector<int> &index);
int compute_lower_mlcs(vector<vector<vector<int>>> ST, vector<char> sigma, vector<string> T, int t);

//void mini_DAG(vector<string> res, int lower_mlcs, vector<vector<vector<int>>> ST, vector<char> sigma, vector<int> index, vector<vector<int>> a,vector<int> m);
//int DAG_len(vector<string> res, int lower_mlcs, vector<vector<vector<int>>> ST, vector<char> sigma);
//void mini_DAG_1_1(vector<string> res, int lower_mlcs, vector<vector<vector<int>>> ST, vector<char> sigma);
//void compute_upper_bound(vector<string> T,int d,vector<int> &m,vector<vector<int>> &a, int t,int r,int e);
//void mini_DAG_1(vector<string> res, int lower_mlcs, vector<vector<vector<int>>> ST, vector<char> sigma,int q);
//int deal_with_theorem3(vector<string> T,vector<int> index,vector<vector<int>> &a,int i,int t,vector<int> r_index,int r,int true_l_mlcs);
//int computer_level(vector<string> res);

#endif //MINI_MLCS_MINI_MLCS_H
