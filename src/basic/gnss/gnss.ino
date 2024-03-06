#include <GNSS.h>

#define STRING_BUFFER_SIZE 128

static SpzGnss Gnss;

void setup() {
  int error_flag = 0;

  Serial.begin(115200);
  sleep(3);

  Gnss.setDebugMode(PrintInfo);

  int result;
  result = Gnss.begin();

  if (result != 0) {
    Serial.println("Gnss begin error");
    error_flag = 1;
  } else {
    Gnss.select(GPS);
    Gnss.select(GLONASS);
    Gnss.select(QZ_L1CA);
  }

  result = Gnss.start(COLD_START);
  if (result != 0) {
    Serial.println("Gnss start error");
    error_flag = 1;
  } else {
    Serial.println("Gnss setup OK");
  }

  if (error_flag == 1) {
    exit(0);
  }
}

void loop() {
  if (Gnss.waitUpdate(-1)) {
    SpNavData NavData;
    Gnss.getNavData(&NavData);

    char StringBuffer[STRING_BUFFER_SIZE];
    if (NavData.posDataExist == 0) {
      Serial.printf("numSat: %2d ", NavData.numSatellites);
      Serial.print("No Position");
    } else {
      Serial.print(NavData.latitude, 6);
      Serial.print(",");
      Serial.print(NavData.longitude, 6);
    }

    Serial.println("");
  } else {
    Serial.println("data not update");
  }
}
