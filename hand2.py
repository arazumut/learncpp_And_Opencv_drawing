import cv2
import numpy as np

# VideoCapture ile kameradan video akışını başlat
cap = cv2.VideoCapture(0)

# Renkler ve kalem kalınlığı ayarları
drawing = False  # Çizim durumu
ix, iy = -1, -1  # Çizim başlangıç noktası

# Mouse callback fonksiyonu
def draw_circle(event, x, y, flags, param):
    global ix, iy, drawing, img

    # Produced By K. Umut Araz

    if event == cv2.EVENT_LBUTTONDOWN:
        drawing = True
        ix, iy = x, y
    elif event == cv2.EVENT_MOUSEMOVE:
        if drawing:
            cv2.line(img, (ix, iy), (x, y), (0, 255, 0), 5)
            ix, iy = x, y
    elif event == cv2.EVENT_LBUTTONUP:
        drawing = False
        cv2.line(img, (ix, iy), (x, y), (0, 255, 0), 5)
        ix, iy = x, y

cv2.namedWindow('Drawing')
cv2.setMouseCallback('Drawing', draw_circle)

while True:
    ret, frame = cap.read()
    if not ret:
        break

    # Çizim görüntüsünü oluştur
    img = np.zeros_like(frame)

    # Çizim ve video akışını birleştir
    combined = cv2.addWeighted(frame, 0.7, img, 0.3, 0)

    # Cilt rengi tespiti
    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    lower_skin = np.array([0, 20, 70], dtype=np.uint8)
    upper_skin = np.array([20, 255, 255], dtype=np.uint8)
    mask = cv2.inRange(hsv, lower_skin, upper_skin)
    
    # Maskeyi morfolojik işlemlerle temizle
    mask = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, np.ones((5,5), np.uint8))
    mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, np.ones((5,5), np.uint8))
    
    # Maskeyi frame'e uygula
    result = cv2.bitwise_and(frame, frame, mask=mask)

    # Pencerelerde göster
    cv2.imshow('Drawing', combined)
    cv2.imshow('Frame', frame)
    cv2.imshow('Mask', mask)
    cv2.imshow('Result', result)

    # 'q' tuşuna basarak çıkış yap
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
