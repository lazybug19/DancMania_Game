
import serial
import pyautogui

arduino = serial.Serial(port='COM15', baudrate=9600)
val=arduino.read().decode().strip()
 
while (True):
  val = arduino.read().decode().strip()
  
  if(val == 'W'):
    pyautogui.keyDown('w')
    print(val)
    
  elif(val == 'w'):
    pyautogui.keyUp('w')
    print(val)
   

  elif(val=='A'):
    pyautogui.keyDown('a')
    print(val)
    

  elif(val=='a'):
    pyautogui.keyUp('a')
    print(val)
  
  
  elif(val=='S'):
    pyautogui.keyDown('s')
    print(val)

  
  elif(val=='s'):
    pyautogui.keyUp('s')
    print(val)

  
  elif(val=='J'):
    pyautogui.keyDown('j')
    print(val)

  elif(val=='j'):
    pyautogui.keyUp('j')
    print(val)


  
 