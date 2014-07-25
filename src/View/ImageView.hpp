/**
 * \file
 * \authors Max Mertens
 *
 * Copyright (c) 2014, Max Mertens. All rights reserved.
 * This file is licensed under the "BSD 3-Clause License".
 * Full license text is under the file "LICENSE" provided with this code.
 */

#if !defined IMAGE_VIEW_HPP_INCLUDED
#define IMAGE_VIEW_HPP_INCLUDED

#include "Interfaces/IImagePresenter.hpp"

namespace View {

class ImageView {
private:
    Interfaces::IImagePresenter *categoryPresenter;
};

} /* namespace View */

#endif /* !defined IMAGE_VIEW_HPP_INCLUDED */
