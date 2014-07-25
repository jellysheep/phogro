/**
 * \file
 * \authors Max Mertens
 *
 * Copyright (c) 2014, Max Mertens. All rights reserved.
 * This file is licensed under the "BSD 3-Clause License".
 * Full license text is under the file "LICENSE" provided with this code.
 */

#if !defined CATEGORY_VIEW_HPP_INCLUDED
#define CATEGORY_VIEW_HPP_INCLUDED

#include <QObject>

#include "Interfaces/ICategoryView.hpp"
#include "Interfaces/ICategoryPresenter.hpp"

namespace View {

class CategoryView : public QObject, public Interfaces::ICategoryView {
    Q_OBJECT
    Q_INTERFACES(Interfaces::ICategoryView)

private:
    Interfaces::ICategoryPresenter *categoryPresenter;

};

} /* namespace View */

#endif /* !defined CATEGORY_VIEW_HPP_INCLUDED */
