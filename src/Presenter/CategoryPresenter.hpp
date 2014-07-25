/**
 * \file
 * \authors Max Mertens
 *
 * Copyright (c) 2014, Max Mertens. All rights reserved.
 * This file is licensed under the "BSD 3-Clause License".
 * Full license text is under the file "LICENSE" provided with this code.
 */

#if !defined CATEGORY_PRESENTER_HPP_INCLUDED
#define CATEGORY_PRESENTER_HPP_INCLUDED

#include "Model/Category.hpp"
#include "Interfaces/ICategoryView.hpp"

namespace Presenter {

class CategoryPresenter {
private:
    Model::Category *categoryModel;
    Interfaces::ICategoryView *categoryView;
};

} /* namespace Presenter */

#endif /* !defined CATEGORY_PRESENTER_HPP_INCLUDED */
