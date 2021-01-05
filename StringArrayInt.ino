char stringaIngresso[] = "22, 1773, 14, 15, 1096, 4, 445, 456, 5654, 43, 30";

char *stringaDestinazione[50]; //definire in base a lunghezza
char *valore = NULL;

int ultimoValore = 0;
int sommaValore = 0;
int massimoValore = 0;
int minimoValore = 0;
int totaleElementi = 0;
int mediaValore = 0;

void setup() {

  Serial.begin(9600);

  byte posizione = 0;
  valore = strtok(stringaIngresso, ", ");  // definisci stringa e separatore della stringa
  while (valore != NULL)
  {
    stringaDestinazione[posizione] = valore;
    posizione++;
    valore = strtok(NULL, ", ");  // capire!!! compensa ", " finale
  }

  minimoValore = (stringaDestinazione[0]);
  // restitusce tutti i valori
  for (int n = 0; n < posizione; n++) // qui pposizione è uscirta dal while e ha un valore massimo della stringa
  {
    Serial.println(stringaDestinazione[n]);
  }

  // restitusce somma e valori tabulati
  Serial.println("valori tabulati ");
  for (int i = 0; i <= (posizione - 1); i++)
  {
    int el = atoi(stringaDestinazione[i]);
    sommaValore = sommaValore + el;

    Serial.print(i);
    Serial.print("\t");
    Serial.println(el);

    if (el > massimoValore)
    {
      massimoValore = el;
    }

    if (minimoValore < el)
    {
      minimoValore = minimoValore;
    }

    else
    {
      minimoValore = el;
    }
  }

  Serial.print("sommaValore ");
  Serial.println(sommaValore);

  // restitusce totaleElementi
  totaleElementi = (posizione + 1);
  Serial.print("totaleElementi = ");
  Serial.println(totaleElementi);

  // restitusce ultimo valore
  ultimoValore = atoi(stringaDestinazione[posizione - 1]);
  Serial.print("ultimoValore = ");
  Serial.println(ultimoValore);

  // restituscemedia valore
  mediaValore = (sommaValore / totaleElementi);
  Serial.print("mediaValore = ");
  Serial.println(mediaValore);

  // restitusce massimo
  Serial.print("massimoValore = ");
  Serial.println(massimoValore);

  // restitusce minimo
  Serial.print("minimoValore = ");
  Serial.println(minimoValore);

}

void loop() {


}
