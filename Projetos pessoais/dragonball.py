import pyautogui
import time
time.sleep(1)
try:
    while True:
        pyautogui.keyDown('q')
        time.sleep(0.1)
        pyautogui.keyUp('q')
        time.sleep(0.1)
        pyautogui.keyDown('enter')
        time.sleep(0.1)
        pyautogui.keyUp('enter')
        time.sleep(0.1)
        pyautogui.keyDown('enter')
        time.sleep(0.1)
        pyautogui.keyUp('enter')
except KeyboardInterrupt:
    print("\nAutoclicker encerrado.")