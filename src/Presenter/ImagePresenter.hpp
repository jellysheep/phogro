/**
 * \file
 * \authors Max Mertens
 *
 * Copyright (c) 2014, Max Mertens. All rights reserved.
 * This file is licensed under the "BSD 3-Clause License".
 * Full license text is under the file "LICENSE" provided with this code.
 */

#if !defined IMAGE_PRESENTER_HPP_INCLUDED
#define IMAGE_PRESENTER_HPP_INCLUDED

#include <QObject>

#include "Model/Image.hpp"
#include "Interfaces/IImageView.hpp"
#include "Interfaces/IImagePresenter.hpp"

namespace Presenter {

class ImagePresenter : public QObject, public Interfaces::IImagePresenter {
    Q_OBJECT
    Q_INTERFACES(Interfaces::IImagePresenter)

private:
    Model::Image *imageModel;
    Interfaces::IImageView *imageView;

};

} /* namespace Presenter */

#endif /* !defined IMAGE_PRESENTER_HPP_INCLUDED */
