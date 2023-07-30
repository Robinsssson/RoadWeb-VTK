#ifndef __LP_PRINT__H__
#define __LP_PRINT__H__
#include "../DS_Lib/DS_Graph.h"
#include <cmath>

namespace LP
{
    struct Point_XY
    {
        double x, y;
        double ID;
    };
    struct Point_RF
    {
        double r, f;
        double ID;
    };
    class Print
    {
    public:
        Print(DS::Graph graph) : graph(graph) {}
        virtual ~Print() = default;

    private:
        DS::Graph graph;
    };
}

#endif //!__LP_PRINT__H__