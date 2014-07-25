/**
 * \file
 * \authors Max Mertens
 *
 * Copyright (c) 2014, Max Mertens. All rights reserved.
 * This file is licensed under the "BSD 3-Clause License".
 * Full license text is under the file "LICENSE" provided with this code.
 */

#if !defined PROJECT_VIEW_HPP_INCLUDED
#define PROJECT_VIEW_HPP_INCLUDED

#include <QObject>

#include "Interfaces/IProjectView.hpp"
#include "Interfaces/IProjectPresenter.hpp"

namespace View {

class ProjectView : public QObject, public Interfaces::IProjectView {
    Q_OBJECT
    Q_INTERFACES(Interfaces::IProjectView)

private:
    Interfaces::IProjectPresenter *categoryPresenter;

};

} /* namespace View */

#endif /* !defined PROJECT_VIEW_HPP_INCLUDED */
