/**
 * \file
 * \authors Max Mertens
 *
 * Copyright (c) 2014, Max Mertens. All rights reserved.
 * This file is licensed under the "BSD 3-Clause License".
 * Full license text is under the file "LICENSE" provided with this code.
 */

#include <QtPlugin>

#if !defined IPROJECT_PRESENTER_HPP_INCLUDED
#define IPROJECT_PRESENTER_HPP_INCLUDED

namespace Interfaces {

class IProjectPresenter {
};

} /* namespace Interfaces */

Q_DECLARE_INTERFACE(Interfaces::IProjectPresenter,
    "Interfaces::IProjectPresenter")

#endif /* !defined IPROJECT_PRESENTER_HPP_INCLUDED */
