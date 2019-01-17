void autos(void) {
  //// автомат включения света в туалете
  switch (svet_tualet) {
    case 0:
      svetTualetMs = ms;
      break;

    case 10:
      if ((ms - svetTualetMs) > 1000) {
        svetTualetMs = ms;
        digitalWrite(RELE_SVET_TUALET, 1);
        Serial.print(" tualet vklychen");
        svet_tualet = 11; //GO
      } //ms
      break;

    case 11:
      if ((ms - svetTualetMs) > vremya_zadergki_tualet ) {
        svetTualetMs = ms;
        digitalWrite(RELE_SVET_TUALET, 0);
        Serial.print("tualet viklychen");
        svet_tualet = 0; //GO

      } //ms
      break;
  } //switch(svet_tualet)

  // автомат включения света в ванной
  switch (svet_vanna) {
    case 0:
      svetVannaMs = 0;
      break;

    case 10:
      if ((ms - svetVannaMs) > 100) {
        svetVannaMs = ms;
        digitalWrite(RELE_SVET_VANNA, 1);
        Serial.print(" vanna vklychen");
        svet_vanna = 11; //GO
      } //ms
      break;

    case 11:
      if ((ms - svetVannaMs) > vremya_zadergki_vanna ) {
        svetVannaMs = ms;
        digitalWrite(RELE_SVET_VANNA, 0);
        Serial.print("vanna viklychen");
        svet_vanna = 0; //GO
      } //ms
      break;
  }//switch(svet_vanna)
}//autos()

