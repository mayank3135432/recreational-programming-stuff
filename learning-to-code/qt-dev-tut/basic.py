# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'basic.ui'
#
# Created by: PyQt5 UI code generator 5.15.10
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_Dialog(object):
    def setupUi(self, Dialog):
        Dialog.setObjectName("Dialog")
        Dialog.resize(400, 300)
        self.openfirefox = QtWidgets.QPushButton(Dialog)
        self.openfirefox.setGeometry(QtCore.QRect(50, 130, 80, 28))
        self.openfirefox.setObjectName("openfirefox")
        self.terminal = QtWidgets.QPushButton(Dialog)
        self.terminal.setGeometry(QtCore.QRect(270, 130, 80, 28))
        self.terminal.setObjectName("terminal")

        self.retranslateUi(Dialog)
        QtCore.QMetaObject.connectSlotsByName(Dialog)

    def retranslateUi(self, Dialog):
        _translate = QtCore.QCoreApplication.translate
        Dialog.setWindowTitle(_translate("Dialog", "Dialog"))
        self.openfirefox.setText(_translate("Dialog", "firefox"))
        self.terminal.setText(_translate("Dialog", "terminal"))
