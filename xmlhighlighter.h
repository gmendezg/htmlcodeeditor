


#ifndef XMLHIGHLIGHTER_H
#define XMLHIGHLIGHTER_H

#include <QObject>
#include <QSyntaxHighlighter>
#include <QTextCharFormat>
#include <QRegularExpression>

QT_BEGIN_NAMESPACE
class QTextDocument;
QT_END_NAMESPACE

//! [0]
class XMLHighlighter : public QSyntaxHighlighter
{
    Q_OBJECT
public:
     XMLHighlighter(QTextDocument *parent = nullptr);
protected:
        void highlightBlock(const QString & text);
private:
    struct HighlightingRule
    {
        QRegExp pattern;
        QTextCharFormat format;
    };
    QVector<HighlightingRule> highlightingRules;

    QTextCharFormat valueFormat;
    QRegExp valueStartExpression;
    QRegExp valueEndExpression;
};

#endif // XMLHIGHLIGHTER_H
