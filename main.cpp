#include <QtGui/QApplication>
#include "editorwindow.h"
#include "textdialog.h"
#include "tutorialhelper.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //EditorWindow editor;
    TutorialHelper h;
    h.UploadTemp ();


    return a.exec();
}
