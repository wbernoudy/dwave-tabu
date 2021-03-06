//  Copyright 2018 D-Wave Systems Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#ifndef __TABU_SEARCH_H__
#define __TABU_SEARCH_H__

#include <vector>
#include <map>
#include "bqpUtil.h"

class TabuSearch
{
    public:
        TabuSearch(std::vector<std::vector<double> > Q, std::vector<int> initSol, int tenure, int scaleFactor, long int timeout);
        double bestEnergy();
        std::vector<int> bestSolution();

    private:
        BQP bqp;
        int sf;
};

#endif
