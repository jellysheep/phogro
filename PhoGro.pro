
# define executable application project
TEMPLATE    =   app

# set necessary Qt modules
QT          +=  qml quick widgets

# set include search path
INCLUDEPATH +=  src/

# set project header files
HEADERS     +=  src/Model/Category.hpp \
                src/Model/Image.hpp \
                src/Model/Project.hpp

HEADERS     +=  src/View/CategoryView.hpp \
                src/View/ImageView.hpp \
                src/View/ProjectView.hpp

HEADERS     +=  src/Presenter/CategoryPresenter.hpp \
                src/Presenter/ImagePresenter.hpp \
                src/Presenter/ProjectPresenter.hpp

HEADERS     +=  src/Interfaces/ICategoryView.hpp \
                src/Interfaces/IImageView.hpp \
                src/Interfaces/IProjectView.hpp \
                src/Interfaces/ICategoryPresenter.hpp \
                src/Interfaces/IImagePresenter.hpp \
                src/Interfaces/IProjectPresenter.hpp

# set project source files
SOURCES     +=  src/main.cpp

# set project resources
RESOURCES   +=  UI/qml.qrc

# set debug build flags
QMAKE_LFLAGS_DEBUG      +=  --coverage
QMAKE_CXXFLAGS_DEBUG    +=  -g -O0 --coverage
QMAKE_CXXFLAGS_DEBUG    +=  -Wall -Wextra -pedantic

# set release build flags
QMAKE_CXXFLAGS_RELEASE  +=  -O2

# set executable name
TARGET      =   phogro

# include employment rules
include(deployment.pri)
