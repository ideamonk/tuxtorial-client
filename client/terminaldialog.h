#ifndef TERMINALDIALOG_H
#define TERMINALDIALOG_H

#include <QDialog>

namespace Ui {
    class TerminalDialog;
}
class QTermWidget;

class TerminalDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TerminalDialog(QWidget *parent = 0);
    ~TerminalDialog();

private:
    Ui::TerminalDialog *ui;
    QTermWidget *termWidget;
    void closeEvent (QCloseEvent *ev);

signals:
    void StepFinishSuccess();
    void StepFinishFail();
    void StepFinishNoRelease();


private slots:
    void on_TerminalDialog_destroyed();
public slots:
    void TerminalClosed();
};

#endif // TERMINALDIALOG_H