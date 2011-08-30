#ifndef SENSORS_H
#define SENSORS_H

#include <QObject>

namespace QtMobility {
    class QAccelerometer;
    class QAmbientLightSensor;
    class QCompass;
    class QMagnetometer;
    class QOrientationSensor;
    class QProximitySensor;
    class QRotationSensor;
    class QTapSensor;
};

class Sensors : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QObject *accelerometer READ accelerometer CONSTANT)
    Q_PROPERTY(QObject *ambientLightSensor READ ambientLightSensor CONSTANT)
    Q_PROPERTY(QObject *compass READ compass CONSTANT)
    Q_PROPERTY(QObject *magnetometer READ magnetometer CONSTANT)
    Q_PROPERTY(QObject *orientationSensor READ orientationSensor CONSTANT)
    Q_PROPERTY(QObject *proximitySensor READ proximitySensor CONSTANT)
    Q_PROPERTY(QObject *rotationSensor READ rotationSensor CONSTANT)
    Q_PROPERTY(QObject *tapSensor READ tapSensor CONSTANT)
public:
    explicit Sensors(QObject *parent = 0);
    ~Sensors();

    QObject *accelerometer() const;
    QObject *ambientLightSensor() const;
    QObject *compass() const;
    QObject *magnetometer() const;
    QObject *orientationSensor() const;
    QObject *proximitySensor() const;
    QObject *rotationSensor() const;
    QObject *tapSensor() const;

private:
    QtMobility::QAccelerometer *m_accelerometer;
    QtMobility::QAmbientLightSensor *m_ambientLightSensor;
    QtMobility::QCompass * m_compass;
    QtMobility::QMagnetometer *m_magnetometer;
    QtMobility::QOrientationSensor *m_orientationSensor;
    QtMobility::QProximitySensor *m_proximitySensor;
    QtMobility::QRotationSensor *m_rotationSensor;
    QtMobility::QTapSensor *m_tapSensor;
};

#endif // SENSORS_H
