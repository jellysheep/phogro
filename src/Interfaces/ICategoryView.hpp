/**
 * \file
 * \authors Max Mertens
 *
 * Copyright (c) 2014, Max Mertens. All rights reserved.
 * This file is licensed under the "BSD 3-Clause License".
 * Full license text is under the file "LICENSE" provided with this code.
 */

#include <QtPlugin>

#if !defined ICATEGORY_VIEW_HPP_INCLUDED
#define ICATEGORY_VIEW_HPP_INCLUDED

namespace Interfaces {

class ICategoryView {
};

} /* namespace Interfaces */

Q_DECLARE_INTERFACE(Interfaces::ICategoryView,
    "Interfaces::ICategoryView")

#endif /* !defined ICATEGORY_VIEW_HPP_INCLUDED */
