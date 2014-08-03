#ifndef RUNNER_H
#define RUNNER_H

// runner.h
#include <QObject>
class Runner : public QObject {
    Q_OBJECT
public slots:
    void run() ;
};

#endif // RUNNER_H
