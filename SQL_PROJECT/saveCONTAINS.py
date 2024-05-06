from PyQt5.QtCore import *

from PyQt5.QtGui import *

from PyQt5.QtWidgets import *

from PyQt5.uic import loadUiType

import sys

import mysql.connector as con

ui,_=loadUiType('/path/to/saveCONTAINS.ui')


class MainApp(QWidget,ui):
    def __init__(self):
        QWidget.__init__(self)
        self.setupUi(self)
        self.b1.clicked.connect(self.savedb)
        self.fill_combobox();


    def fill_combobox(self):
        try:
            mydb = con.connect(host="localhost",user="root", password="your password",db="AIRPORT")
            cursor = mydb.cursor()
            cursor.execute("select * from AIRLINE")
            result = cursor.fetchall();
            self.cb1.clear() #clear combobox
            if result:
                for AIRLINE in result:
                    self.cb1.addItem(str(AIRLINE[0]))

            cursor = mydb.cursor()
            cursor.execute("select * from AIRPORT")
            result = cursor.fetchall();
            self.cb2.clear() #clear combobox
            if result:
                for AIRPORT in result:
                    self.cb2.addItem(AIRPORT[0])
        except Exception as e:
            print(e)
            print("Error in fill combo box ")


    def savedb(self):
        try:
            mydb = con.connect(host="localhost",user="root", password="your password",db="AIRPORT")
            cursor = mydb.cursor()
            AIRLINE_ID = self.cb1.currentText()
            AP_NAME = self.cb2.currentText()
            print(type(self.cb1), self.cb1.currentText()) # for debugging
            cursor.execute("insert into CONTAINS values('"+ AIRLINE_ID +"', '"+ AP_NAME +"')");
            mydb.commit()
            QMessageBox.information(self,"DB Insert","Details saved successfully")
        except Exception as e:
            print(e)
            QMessageBox.information(self,"DB Insert","Error in save db")

    

def main():
    app = QApplication(sys.argv)
    window = MainApp()
    window.show()
    app.exec_()

if __name__ == '__main__':
    main()