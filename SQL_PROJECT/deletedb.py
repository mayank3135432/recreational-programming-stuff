from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from PyQt5.uic import loadUiType
import sys
import mysql.connector as con

ui,_=loadUiType('deletedb.ui')

class MainApp(QWidget,ui):
    def __init__(self):
        QWidget.__init__(self)
        self.colnames = ()
        self.setupUi(self)
        self.fill_combobox()
        
        self.fillanothercombobox()
        self.b2.clicked.connect(self.fulfill)
        self.b1.clicked.connect(self.deletedb)

    
    def fulfill(self):
        self.fillanothercombobox()
        self.fill_details_on_combobox_selected()
    def fill_combobox(self):
        try:
            mydb = con.connect(host="localhost",user="root",password="admin",db="AIRPORT")
            cursor = mydb.cursor()
            cursor.execute("show tables")
            result = cursor.fetchall()
            self.cb1.clear()
            if result:
                for tables in result:
                    self.cb1.addItem(str(tables[0]))
            if(self.cb1.currentText() != ""):
                cursor.execute("select * from "+ self.cb1.currentText() +"")
                result = cursor.fetchall()
                self.cb2.clear()
                if result:
                    for tables in result:
                        self.cb2.addItem(str(tables[0]))      

        except Exception as e:
            print(e)
            print("Error in fill combo box ")

    def fillanothercombobox(self):
        try:
            mydb = con.connect(host="localhost",user="root",password="admin",db="AIRPORT")
            cursor = mydb.cursor()
            mystr = self.cb1.currentText()
            cursor.execute("select * from "+ mystr +"")
            result = cursor.fetchall()
            self.cb2.clear()
            self.colnames = cursor.column_names
            print(type(self.colnames),self.colnames)
            if result:
                if mystr != 'CONTAINS':
                    for tables in result:
                        self.cb2.addItem(str(tables[0]))
                else:
                    for tables in result:
                        self.cb2.addItem(str(tables[0]))
                        self.cb3.addItem(str(tables[1]))
        except Exception as e:
            print(e)
            print("Error in another fill combo box ")


    def fill_details_on_combobox_selected(self):
        try:
            mydb = con.connect(host="localhost",user="root", password="admin",db="AIRPORT")
            cursor = mydb.cursor()
            em = self.cb1.currentText()
            if(str(em) != 'CONTAINS'):
                print(em)
                cursor.execute("select * from "+ em +";")
                result = cursor.fetchall()
                if result:
                    for EMPLOYEE in result:
                        self.cb2.setItemText(0,str(EMPLOYEE[0]))
            else:
                print(em)
                cursor.execute("select * from "+ em +";")
                result = cursor.fetchall()
                if result:
                    for EMPLOYEE in result:
                        self.cb2.setItemText(0,str(EMPLOYEE[0]))
                        self.cb3.setItemText(0,str(EMPLOYEE[1]))                        
        except Exception as e:
            print(e)
            print("Error in fill details on combo box select ")


    def deletedb(self):
        try:
            mydb = con.connect(host="localhost",user="root",password="admin",db="AIRPORT")
            cursor = mydb.cursor()
            em = self.cb1.currentText()
            pk = self.cb2.currentText()
            if str(em) == 'CONTAINS':
                pk3 = self.cb3.currentText()
                cursor.execute("delete from "+ em +" where "+ self.colnames[0] +" = '"+ pk +"' and "+ self.colnames[1] +" = '"+ pk3 +"'")
            else:
                cursor.execute("delete from "+ em +" where "+ self.colnames[0] +" = '"+ pk +"' ")
                
            mydb.commit()
            self.fill_combobox()
            QMessageBox.information(self,"Delete Form","Contact Details Deleted successfully !")

        except Exception as e:
            print(e)
            print("Error in deletedb ")




def main():
    app = QApplication(sys.argv)
    window = MainApp()
    window.show()
    app.exec_()


if __name__ == '__main__':
    main() 