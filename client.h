#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>
#include "crudclient.h"

QT_BEGIN_NAMESPACE
namespace Ui { class client; }
QT_END_NAMESPACE

class client : public QWidget
{
    Q_OBJECT

public:
    client(QWidget *parent = nullptr);
    ~client();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_edit_clicked();

    void on_pushButton_dell_clicked();

    void on_pushButton_ref_clicked();

    void on_pushButton_3_clicked();

    void on_Trie_NOM_clicked();

    void on_Trie_NOM_2_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pb_pdf_2_clicked();

    void on_pb_pdf_3_clicked();

    void on_pushButton_2_clicked();

    void on_pb_pdf_clicked();

    void on_comboBox_1_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::client *ui;
    crudclient ccl;
};
#endif // CLIENT_H
