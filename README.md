# plant_monitoring_aws_PIC18F57Q43
Monitoreo de la humedad de una planta para advertir sobre su riego mediante correo electrónico usando una instancia EC2 de AWS.

## Recolección de datos.
El sensado se realizó con un higrómetro resistivo FC28, en la entrada analógica del board Curiosity Nano PIC18F57Q43. Mediante una interrupción del TMR0, se ejecuta una instrucción que lee el valor del sensor cada 10 minutos (configurable con los prescalers), y la envía hacia un módulo Tiny Sigfox en hexadecimal ( ver `main.c`, `tmr0.c`, `adcc.c`). 

![](https://github.com/sadelcarpio/plant_monitoring_aws/blob/main/imgs/project.jpeg)

## Callback de Sigfox
A través de un GET request en el backend de Sigfox (Custom Callback) se envía la data en hexadecimal (reformateada como int16) hacia nuestra instancia en EC2.

![](https://github.com/sadelcarpio/plant_monitoring_aws/blob/main/imgs/sigfox.jpeg)

## Flujo de node-red
En la EC2 se instala nodejs y dependencias para node-red, además de mongodb para el guardado de los datos sensados. Se usaron los módulos `node-red-node-email` y `node-red-node-mongodb`.

![](https://github.com/sadelcarpio/plant_monitoring_aws/blob/main/imgs/flow.jpeg)

## Registro en base de datos
Se creó una base de datos en mongodb (`use registro_higrometro`) y una colección para almacenar los datos (`db.createCollection("sigfox")`). Con ello y los valores por defecto puede almacenarse mediante el flujo creado.

## Notificación

El objetivo final del flujo es enviar un correo electrónico con el nodo `email`, con un remitente y destinatario fijos (si el remitente es un correo de gmail necesitará permitir acceso a apps no seguras desde la configuración de google).

![](https://github.com/sadelcarpio/plant_monitoring_aws/blob/main/imgs/output.jpeg)

## Mejoras, recomendaciones

- [ ] Solucionar el timeout de conexión a la instancia de EC2 para no depender de la conexión de una máquina local.
- [ ] Aprovechar el modo de bajo consumo del PIC con el comando SLEEP()
- [ ] Aprovechar el modo de bajo consumo del módulo TinyFox
- [ ] Redireccionar los datos a un servicio que pueda ejecutar herramientas analíticas sobre la data.
