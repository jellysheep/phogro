/**
 * \file
 * \authors Max Mertens
 *
 * Copyright (c) 2014, Max Mertens. All rights reserved.
 * This file is licensed under the "BSD 3-Clause License".
 * Full license text is under the file "LICENSE" provided with this code.
 */

#include <QtPlugin>

#if !defined ICATEGORY_PRESENTER_HPP_INCLUDED
#define ICATEGORY_PRESENTER_HPP_INCLUDED

namespace Interfaces {

class ICategoryPresenter {
};

} /* namespace Interfaces */

Q_DECLARE_INTERFACE(Interfaces::ICategoryPresenter,
    "Interfaces::ICategoryPresenter")

#endif /* !defined ICATEGORY_PRESENTER_HPP_INCLUDED */
