
# define executable application project
TEMPLATE    =   app

# set necessary Qt modules
QT          +=  qml quick widgets

# add include search path
INCLUDEPATH +=  src/

# add project header files
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

# add project source files
SOURCES     +=  src/main.cpp

# add project resources
RESOURCES   +=  UI/qml.qrc

# set executable name
TARGET      =   phogro

# include employment rules
include(deployment.pri)
