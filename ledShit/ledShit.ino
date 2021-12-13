//#include <HID-Project.h>
int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int brightPin = 3;

int r = 255;
int g = 0;
int b = 0;
void lightSetRGB(int red, int green, int blue)
{
  analogWrite(redPin, 255-red);
  analogWrite(greenPin, 255-green);
  analogWrite(bluePin, 255-blue);
}

void setup()
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(brightPin, OUTPUT);

  //lightSetRGB(255, 50, 0);
  analogWrite(brightPin, 255);
  fagButton();
}
void loop()
{
  Serial.print("r: ");
  Serial.print(r);
  Serial.print("  g: ");
  Serial.print(g);
  Serial.print("  b: ");
  Serial.println(b);
//   lava(2.5, 1, 100);
//  gayLight(85);
//  blink_(100);
  lightSetRGB(r, g, b);

  gayLight(100);

//  g = constrain(g - noise(g), 0, 255);

}


void fagButton()
{
//  Consumer.write(MEDIA_REWIND);
//  Consumer.write(MEDIA_PLAY_PAUSE);
}

void blink_(int delay_)
{
  analogWrite(brightPin, 0);
  delay(delay_);
  analogWrite(brightPin, 255);
  delay(delay_);
}


void porple(int delay_, int interval)
{
  
}

void groen(int delay_, int interval, int wVal)
{
  int w = 0;

  //if(w >= 255) {

  //}
    while(w < wVal+1) {
      w+= interval;
        delay(delay_);
      lightSetRGB(w, 200, constrain(w * 1.3, 5, 255));
      Serial.println(w);
    }
        while(1<w) {
      w -= interval;
        delay(delay_);
      lightSetRGB(w, 200, constrain(w * 1.3, 5, 255));
      Serial.println(w);
    }

}
void lava(int delay_, int interval, int wVal)
{
  int w = 0;

  //if(w >= 255) {

  //}
    while(w < wVal+1) {
      w+= interval;
        delay(delay_);
      lightSetRGB(240, 50, constrain(w * 1.3, 0, 50));
      Serial.println(w);
    }
        while(1<w) {
      w -= interval;
        delay(delay_);
      lightSetRGB(240, 50, constrain(w * 1.3, 0, 50));
      Serial.println(w);
    }

}

void rainbowLight(float interval)
{
  if(r == 255 && 0 < g <= 255 && b == 0) {
    g+=interval;
  }
  if(0 < r <= 255 && g == 255 && b == 0) {
    r-=interval;
  }
  if(r == 0 && g == 255 && 0 < b <= 255) {
    b+=interval;
  }
  if(r == 0 && 0 < g <= 255 && b == 255) {
    g-=interval;
  }
  if(0 < r <= 255 && g == 0 && b == 255) {
    r+=interval;
  }
  if(r == 255 && g == 0 && 0 < b <= 255) {
    b-=interval;
  }

}

void gayLight(float delay_)
{

  r = 242;
  g = 3;
  b = 3;
  lightSetRGB(r, g, b);
  delay(delay_);

  r = 242;
  g = 53;
  b = 0;
  lightSetRGB(r, g, b);
  delay(delay_);

  r = 255;
  g = 100;
  b = 0;
  lightSetRGB(r, g, b);
  delay(delay_);

  r = 0;
  g = 200;
  b = 36;
  lightSetRGB(r, g, b);
  delay(delay_);

  r = 0;
  g = 73;
  b = 242;
  lightSetRGB(r, g, b);
  delay(delay_);

  r = 111;
  g = 7;
  b = 128;
  lightSetRGB(r, g, b);
  delay(delay_);
}


//int fluctuate(int i, variance)
//{
//  return(i+=noise(variance));
//}
