#include "location.h"
#include <QGeoPositionInfoSource>
#include <QGeoPositionInfo>

Location::Location(QObject *parent) :
    QObject(parent),
    m_geoPositionInfoSource(QtMobility::QGeoPositionInfoSource::createDefaultSource(this))
{
    connect(m_geoPositionInfoSource, SIGNAL(positionUpdated(QtMobility::QGeoPositionInfo)),
            this, SIGNAL(positionUpdated(QtMobility::QGeoPositionInfo)));
}

Location::~Location()
{
}

QString Location::coordinate() const
{
    return m_geoPositionInfoSource->lastKnownPosition().coordinate().toString();
}
