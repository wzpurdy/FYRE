// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FYRE_QT_FYREADDRESSVALIDATOR_H
#define FYRE_QT_FYREADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class FyreAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FyreAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Fyre address widget validator, checks for a valid fyre address.
 */
class FyreAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FyreAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // FYRE_QT_FYREADDRESSVALIDATOR_H
