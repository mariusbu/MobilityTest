#include "sensors.h"
#include <QAccelerometer>
#include <QAmbientLightSensor>
#include <QCompass>
#include <QMagnetometer>
#include <QOrientationSensor>
#include <QProximitySensor>
#include <QRotationSensor>
#include <QTapSensor>

Sensors::Sensors(QObject *parent) :
    QObject(parent),
    m_accelerometer(new QtMobility::QAccelerometer(this)),
    m_ambientLightSensor(new QtMobility::QAmbientLightSensor(this)),
    m_compass(new QtMobility::QCompass(this)),
    m_magnetometer(new QtMobility::QMagnetometer(this)),
    m_orientationSensor(new QtMobility::QOrientationSensor),
    m_proximitySensor(new QtMobility::QProximitySensor(this)),
    m_rotationSensor(new QtMobility::QRotationSensor(this)),
    m_tapSensor(new QtMobility::QTapSensor(this))
{
    m_accelerometer->start();
    m_ambientLightSensor->start();
    m_compass->start();
    m_magnetometer->start();
    m_orientationSensor->start();
    m_proximitySensor->start();
    m_rotationSensor->start();
    m_tapSensor->start();
}

Sensors::~Sensors()
{
}

QObject *Sensors::accelerometer() const
{
    return m_accelerometer->reading();
}

QObject *Sensors::ambientLightSensor() const
{
    return m_ambientLightSensor->reading();
}

QObject *Sensors::compass() const
{
    return m_compass->reading();
}

QObject *Sensors::magnetometer() const
{
    return m_magnetometer->reading();
}

QObject *Sensors::orientationSensor() const
{
    return m_orientationSensor->reading();
}

QObject *Sensors::proximitySensor() const
{
    return m_proximitySensor->reading();
}

QObject *Sensors::rotationSensor() const
{
    return m_rotationSensor->reading();
}

QObject *Sensors::tapSensor() const
{
    return m_tapSensor->reading();
}
