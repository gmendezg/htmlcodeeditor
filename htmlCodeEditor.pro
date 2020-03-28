QT += widgets
requires(qtConfig(filedialog))

HEADERS         = highlighter.h \
                  mainwindow.h \
                  xmlhighlighter.h
SOURCES         = highlighter.cpp \
                  mainwindow.cpp \
                  main.cpp \
                  xmlhighlighter.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/richtext/syntaxhighlighter
INSTALLS += target
