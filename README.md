## Arduino-Controlled-Automated-Speed-Bump

The term "speed bump" is already well-known, used to "forcibly" slow down vehicles in areas around schools, hospitals, or residential neighborhoods, as well as in close proximity to some pedestrian crossings or dangerous intersections, in order to avoid traffic accidents.

## Project Task: Automatic Speed Bump

The task is to create a functional model of an automatic speed bump.

The device works by using two photoresistors (placed on the road where the car passes) to measure the speed of the vehicle. The photoresistors need to be connected to the analog pin of the microcontroller via an additional 10kOhm resistor in a voltage divider configuration.

If the car crosses the distance between the two sensors in less than 1200 milliseconds, the system concludes that the car is moving too fast and the automatic speed bump is triggered. The mechanism for the speed bump is located below road level and is operated by a servo motor.

The speed bump can be in one of two possible positions: flush with the road or raised above the road. When the system detects that the car is speeding, it responds by raising the speed bump and keeping it raised for 3 seconds before lowering it back to road level. Additionally, an LED, also connected to the microcontroller, signals the driver that the automatic speed bump is being raised. This LED remains lit as long as the speed bump is raised.

Besides the visual warning, the system also alerts the driver with an audio signal indicating the speed bump is about to be raised. The audio signal is generated using a speaker connected to a digital output of the microcontroller. To enable remote monitoring, messages about the status of the speed bump are displayed on a computer via a serial port connection.

## User Interface Examples

<img src="https://github.com/user-attachments/assets/d9759167-59d1-4397-9cdf-41b3c00e89f6" &nbsp; &nbsp;/>

<br>
Figure 1 Display of the 3D model of the project / model
<br><br>


<img src="https://github.com/user-attachments/assets/c924b4c9-7ff8-4b33-a3b3-d9d1489f426c"  />

<br>
Figure 2 Display example when the speed bump is lowered.

<br><br>

<img src="https://github.com/user-attachments/assets/91ff6aff-6633-4ea1-bc5f-3926ad8fad9e"  />
<br>

Figure 3 Display example when the speed bump is raised.
<br><br>

<img src="https://github.com/user-attachments/assets/26ed7460-bd1f-4248-a20e-6c9494728584" />
<br>
Figure 4 Side view of the speed bump
<br><br>

In Figure 4, we can see a side view of the speed bump. The height of this speed bump is no different from that of a standard speed bump. Its function remains the same: when a vehicle approaches the speed bump, it slows down, gradually crosses over it, and then continues on its path at the previous speed.<br><br>

<img src="https://github.com/user-attachments/assets/dc9ee431-f5bc-4f8c-a2b3-b4b59d9e3284" />

<br>
Figure 5 Display of the Project Implementation with Arduino Uno Microcontroller

<br><br>

<img src="https://github.com/user-attachments/assets/69ea6cf1-b2ce-4765-83a1-5f59930cbf18"  />
<br>

Figure 6 Display of the Photoresistor as a Speed Sensor






