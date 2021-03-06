#ifndef TACTIONMAILER_H
#define TACTIONMAILER_H

#include <TAbstractController>


class T_CORE_EXPORT TActionMailer : public TAbstractController
{
public:
    TActionMailer();
    virtual ~TActionMailer() { }
    virtual QString name() const;
    virtual QString activeAction() const;

protected:
    bool deliver(const QString &templateName = "mail");

private:
    Q_DISABLE_COPY(TActionMailer)
};

#endif // TACTIONMAILER_H
