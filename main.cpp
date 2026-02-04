#include <QApplication>
#include <QPushButton>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    // QApplication a(argc, argv);

    // MainWindow w;
    // w.show();

    QApplication app (argc, argv);

    // QWidget window;
    // window.setFixedSize(100,100);

    // QPushButton button("tmp", &window);
    // button.setText("some button");
    // button.setToolTip("some tooltip");

    // QFont font ("Courier");
    // QPushButton button2("tmp", &window);
    // button2.setIcon(QIcon::fromTheme("face-smile"));
    // button2.setToolTip("smile");
    // button2.setFont(font);
    // button2.setGeometry(10,10,30,30);

    // window.show();

    MainWindow ui_buttons;
    ui_buttons.show();
    // window.show();

    return app.exec();
}

// // main.cpp
// #include <QApplication>
// #include <QMainWindow>
// #include <QVBoxLayout>
// #include <QPushButton>
// #include <QMessageBox>
// #include <QFile>
// #include <QTextStream>

// int main(int argc, char *argv[]) {
//     QApplication app(argc, argv);
//     QMainWindow window;
//     QVBoxLayout layout;
//     QPushButton button("Click me!");
//     layout.addWidget(&button);
//     connect(button, &QPushButton::clicked, window, &QMainWindow::showMessage);
//     QFile file("example.txt");
//     if (file.open(QFile::ReadOnly)) {
//         QTextStream stream(&file);
//         QString text = stream.readAll();
//         QMessageBox::information(window, "File contents", text);
//     } else {
//         QMessageBox::critical(window, "Error", "Failed to open file");
//     }
//     window.setLayout(&layout);
//     window.show();
//     return app.exec();
// }