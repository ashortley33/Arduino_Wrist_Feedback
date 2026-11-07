# Arduino_Wrist_Feedback

  Upper limb impairments affect up to 80% of stroke survivors making everyday tasks more difficult (Wang et al., 2022). Home rehabilitation allows patients to continue practice outside of therapy, but access to immediate guidance and feedback may be limited. Our Vibration Feedback Sleeve project aims to provide wrist position feedback during at home rehabilitation after a stroke. Our goal is to build a low-cost sleeve that gives immediate vibration feedback without requiring a screen or continuous visual attention. 
  
  This is the first version of the system, where I manually entered the angles to control the three LEDs. I personally assembled the early prototype using an Arduino Mega, breadboard, IMU sensor, jumper wires, LEDs, and resistors. The IMU is connected, but the current program does no read measurements from it yet. 
  
  I configured the LED's as outputs and wrote a loop to check whether the angle was below, within, or above the target range. If the angle is below the target, it turns the right LED on, if the angle is above the target, it turns the left LED on, and an angle from 15 through 25 turns the green LED on. I tested the three states by changing the entered angle and checking which LED turned on. 
  
  This prototype gives us the foundation to build upon as we improve the system. The planned version will use two IMU sensors, one on the forearm and one on the hand, to calculate the wrist angle. It will compare that angle with the target range and provide corresponding vibration feedback.


References
Wang, X., Fu, Y., Ye, B., Babineau, J., Ding, Y., & Mihailidis, A. (2022). Technology-based compensation assessment and detection of upper extremity activities of stroke survivors: Systematic review. Journal of Medical Internet Research, 24(6). https://doi.org/10.2196/34307
