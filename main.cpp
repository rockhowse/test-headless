#include <QtCore>
#include <QCoreApplication>
#include <QTimer>

#include <iostream>
using namespace std;

#include "Runner.h"

/**
 * Simple application that prints to the console then exits.
 *
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Runner r;
    QTimer::singleShot(0, &r, SLOT(run()));

    return a.exec();
}

/**
 * Need to use the Runner to call exit() or the main application loop never returns.
 *
 * @brief Runner::run
 */
void Runner::run() {
    qDebug("The Cake Is a Lie!");
    QCoreApplication::exit(0);
}
