/**
 * \file
 * \authors Max Mertens
 *
 * Copyright (c) 2014, Max Mertens. All rights reserved.
 * This file is licensed under the "BSD 3-Clause License".
 * Full license text is under the file "LICENSE" provided with this code.
 */

#include <QtPlugin>

#if !defined IIMAGE_VIEW_HPP_INCLUDED
#define IIMAGE_VIEW_HPP_INCLUDED

namespace Interfaces {

class IImageView {
};

} /* namespace Interfaces */

Q_DECLARE_INTERFACE(Interfaces::IImageView,
    "Interfaces::IImageView")

#endif /* !defined IIMAGE_VIEW_HPP_INCLUDED */
