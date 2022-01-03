#include "profile_picture.h"
#include "ui_mainwindow.h"

profile_picture::profile_picture(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

profile_picture::~profile_picture()
{
    delete ui;
}

void profile_picture::on_button_image_clicked()
{ // Open a QFile dialog in order to let the user pick a profile picture

    QString filename = QFileDialog::getOpenFileName(this,tr("Choose"), "", tr("Images (*.jpg, *.png, *.jpeg, *.gif, *.bmp)"));

    if (QString::compare(filename, QString()) != 0)
    {
        QImage image;
        bool valid = image.load(filename); // if the file of the image is corrupted or invalid, then "valid" will be false

        if (valid)
        {
            image = image.scaledToWidth(ui->label_img->width(), Qt::SmoothTransformation);
            ui->label_img->setPixmap(QPixmap::fromImage(image));
        }
        else
        {
            // Error
            throw std::invalid_argument("Invalid picture");

        }

    }
}

