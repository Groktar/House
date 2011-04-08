/**Headers.*/
 #include <stdio.h>
 #include <QtGui/QApplication>
 #include "mainwindow.h"



/**Main function.*/
int main(int argc, char *argv[]) {
 QApplication a(argc, argv);
 MainWindow w;
 w.show();

 fprintf(stdout, "Just a test by now\n");

 return a.exec();
}
