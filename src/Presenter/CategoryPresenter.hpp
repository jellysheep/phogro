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

#include <QObject>

#include "Model/Category.hpp"
#include "Interfaces/ICategoryView.hpp"
#include "Interfaces/ICategoryPresenter.hpp"

namespace Presenter {

class CategoryPresenter : public QObject, public Interfaces::ICategoryPresenter {
    Q_OBJECT
    Q_INTERFACES(Interfaces::ICategoryPresenter)

private:
    Model::Category *categoryModel;
    Interfaces::ICategoryView *categoryView;

};

} /* namespace Presenter */

#endif /* !defined CATEGORY_PRESENTER_HPP_INCLUDED */
