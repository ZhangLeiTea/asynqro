#include "gtest/gtest.h"

#ifdef ASYNQRO_QT_SUPPORT
#    include <QCoreApplication>
#endif

int main(int argc, char **argv)
{
#ifdef ASYNQRO_QT_SUPPORT
    QCoreApplication a(argc, argv);
#endif
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
