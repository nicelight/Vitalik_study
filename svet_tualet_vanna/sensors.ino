void sensors(void){
   if (digitalRead(IK_TUALET) == RUKA) {
    svet_tualet = 10;
    while (!digitalRead(IK_TUALET) == RUKA);
    delay(20);
  }//if TUALET


  if (digitalRead(IK_VANNA) == RUKA) {
    svet_vanna = 10;
    while (!digitalRead(IK_VANNA) == RUKA);
    delay(20);
  } //if VANNA
  
}//sensors()

