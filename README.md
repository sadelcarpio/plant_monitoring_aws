# plant_monitoring_aws_PIC18F57Q43
Monitoreo de la humedad de una planta para advertir sobre su riego mediante SMS usando una instancia EC2 de AWS.

## Recolección de datos.
El sensado se realizó con un higrómetro resistivo FC28, en la entrada analógica del board Curiosity Nano PIC18F57Q43. Mediante una interrupción del TMR0, se ejecuta una instrucción que lee el valor del sensor cada 10 minutos (configurable con los prescalers), y la envía hacia un módulo Tiny Sigfox en hexadecimal ( ver `main.c`, `tmr0.c`, `adcc.c`). 


