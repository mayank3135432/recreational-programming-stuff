from PyQt5.QtCore import QSize, Qt
from PyQt5.QtWidgets import QApplication, QWidget, QMainWindow

import sys

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init()

        self.setWindowTitle("My App");

        self.setCentralWidget(button)


app = QApplication(sys.argv)

window = QMainWindow()
window.show()

app.exec() 