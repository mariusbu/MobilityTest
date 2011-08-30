#ifndef LOCATION_H
#define LOCATION_H

#include <QObject>

namespace QtMobility {
    class QGeoPositionInfoSource;
    class QGeoPositionInfo;
};

class Location : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString coordinate READ coordinate NOTIFY positionUpdated)
public:
    explicit Location(QObject *parent = 0);
    ~Location();

    QString coordinate() const;

Q_SIGNALS:
    void positionUpdated(const QtMobility::QGeoPositionInfo &update);

private:
    QtMobility::QGeoPositionInfoSource *m_geoPositionInfoSource;
};

#endif // LOCATION_H
