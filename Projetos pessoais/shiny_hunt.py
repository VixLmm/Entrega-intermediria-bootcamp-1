import pyautogui 
import time
try:
    while True:
        time.sleep(0.5)
        pyautogui.keyDown('f')
except KeyboardInterrupt:
    print("\nAutoclicker encerrado.")