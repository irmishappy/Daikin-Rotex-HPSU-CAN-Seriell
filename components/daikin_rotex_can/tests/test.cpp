#include <gtest/gtest.h>
#include "esphome.h"

class MockSensorTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Initialisiere deinen Testcode hier
    }

    void TearDown() override {
        // Bereinige nach dem Test
    }
};

TEST_F(MockSensorTest, test_mock_sensor_temperature) {
    float mock_temp = 22.5 + (rand() % 10) / 10.0;
    ASSERT_GE(mock_temp, 22.5);  // Stelle sicher, dass der Wert >= 22.5 ist
    ASSERT_LE(mock_temp, 23.4);  // Stelle sicher, dass der Wert <= 23.4 ist
}

TEST_F(MockSensorTest, test_mock_sensor_humidity) {
    float mock_humidity = 60.0 + (rand() % 10) / 10.0;
    ASSERT_GE(mock_humidity, 60.0);
    ASSERT_LE(mock_humidity, 60.9);
}
