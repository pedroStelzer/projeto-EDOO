QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aluno.cpp \
    cadastro.cpp \
    cadastroaluno.cpp \
    cadastroprofessor.cpp \
    cadastroturma.cpp \
    editaraluno.cpp \
    editarprofessor.cpp \
    editarturma.cpp \
    horariosalunos.cpp \
    horariosprofessor.cpp \
    horariosturma.cpp \
    instituicao.cpp \
    main.cpp \
    professor.cpp \
    telalogin.cpp \
    telaprincipal.cpp \
    turma.cpp

HEADERS += \
    aluno.h \
    cadastro.h \
    cadastroaluno.h \
    cadastroprofessor.h \
    cadastroturma.h \
    editaraluno.h \
    editarprofessor.h \
    editarturma.h \
    horariosalunos.h \
    horariosprofessor.h \
    horariosturma.h \
    instituicao.h \
    professor.h \
    telalogin.h \
    telaprincipal.h \
    turma.h

FORMS += \
    cadastro.ui \
    cadastroaluno.ui \
    cadastroprofessor.ui \
    cadastroturma.ui \
    editaraluno.ui \
    editarprofessor.ui \
    editarturma.ui \
    horariosalunos.ui \
    horariosprofessor.ui \
    horariosturma.ui \
    telalogin.ui \
    telaprincipal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
