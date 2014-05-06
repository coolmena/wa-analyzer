/*
The MIT License (MIT)

Copyright (c) 2012 Jose Aguado (jh2odo)

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE
*/
#ifndef MESSAGE_H
#define MESSAGE_H

#include "contact.h"
#include "group.h"

#include <QString>
#include <QTime>
#include <QDebug>

class Message
{
public:
    Message();
    bool isGroup();
    Contact getContact();
    QString getType();
    Group getGroup();
    int getLength();
    QString getId();
    void setContact(Contact contact);
    void setType(QString type);
    void setGroup(Group group);
    void setLength(int length);
    void setId(QString id);
private:
    Contact contact;
    QString type;
    int length;
    QString id;
    Group group;
};

#endif // MESSAGE_H
