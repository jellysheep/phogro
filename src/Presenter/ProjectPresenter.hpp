/**
 * \file
 * \authors Max Mertens
 *
 * Copyright (c) 2014, Max Mertens. All rights reserved.
 * This file is licensed under the "BSD 3-Clause License".
 * Full license text is under the file "LICENSE" provided with this code.
 */

#if !defined PROJECT_PRESENTER_HPP_INCLUDED
#define PROJECT_PRESENTER_HPP_INCLUDED

#include "Model/Project.hpp"
#include "Interfaces/IProjectView.hpp"

namespace Presenter {

class ProjectPresenter {
private:
    Model::Project *projectModel;
    Interfaces::IProjectView *projectView;
};

} /* namespace Presenter */

#endif /* !defined PROJECT_PRESENTER_HPP_INCLUDED */
