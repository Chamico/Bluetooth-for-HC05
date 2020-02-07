# -*- coding: utf-8 -*-

from MainWindow import Ui_Dialog
import PyQt5

import sys
from PyQt5.QtWidgets import QApplication, QMainWindow
from PyQt5.QtGui import QImage, QPixmap

import BLUETOOTH
class MyWindow(QMainWindow, Ui_Dialog):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.setupUi(self)
        self.pushButton.clicked.connect(self.pushButtonDo)

    num = 0

    def pushButtonDo(self):
        self.num += 1
        self.setWindowTitle("pushbutton has been clicked {0} times".format(self.num))

      


        return None

if __name__ == "__main__":
    app = QApplication(sys.argv)
    mainWindow = MyWindow()
    mainWindow.show()
    sys.exit(app.exec_())
