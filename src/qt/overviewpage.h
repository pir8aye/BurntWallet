#ifndef OVERVIEWPAGE_H
#define OVERVIEWPAGE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

namespace Ui {
    class OverviewPage;
}
class WalletModel;
class TxViewDelegate;

/** Overview ("home") page widget */
class OverviewPage : public QWidget
{
    Q_OBJECT

public:
    explicit OverviewPage(QWidget *parent = 0);
    ~OverviewPage();

    void setModel(WalletModel *model);

public slots:
    void setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance);
    void setNumTransactions(int count);

signals:
    void transactionClicked(const QModelIndex &index);

protected:
<<<<<<< HEAD
   // void resizeEvent(QResizeEvent *event) override;
=======
    void resizeEvent(QResizeEvent *event) override;
>>>>>>> 04e9b128eee74bb6a864a18f130b750eaf852c2f

private:
    Ui::OverviewPage *ui;
    WalletModel *model;
    qint64 currentBalance;
    qint64 currentStake;
    qint64 currentUnconfirmedBalance;

    TxViewDelegate *txdelegate;
    unsigned int numDisplayedTransactions();

private slots:
    void displayUnitChanged();
};

#endif // OVERVIEWPAGE_H
