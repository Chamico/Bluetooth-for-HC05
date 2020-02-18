#ifndef LINECHART_H
#define LINECHART_H

#include "head.h"

class LineChart : public QObject
{
    Q_OBJECT

private:
    void LineChartInitialPen();
public:
    LineChart();
    ~LineChart();

    void LineChartInitial();


};

#endif // LINECHART_H
