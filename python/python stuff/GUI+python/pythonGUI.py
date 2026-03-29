# gui are basikally a way to make a software possible to run in windows,mac,ios,linux,android etc
'''sometimes we code a app on windows may not work on ios/ andrid or othes OS.
so use GUI.
GUI is also used to design software, apps, web-devlopment

GUI supports many languages(primarily c/c++), including python.
here we will learn abt gui+ python.
b4 learning install "pyside6" , usin "pip install pyside6" in the powershell window.'''

# we will write a code (blindly) for now and explain it later
from PySide6.QtWidgets import QApplication, QWidget
import sys
app=QApplication(sys.argv)

window=QWidget()
window.show

app.exec()

#  a window shall pop-up