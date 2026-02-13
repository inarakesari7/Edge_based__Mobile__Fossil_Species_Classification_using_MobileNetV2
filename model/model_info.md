# Model Information

## Architecture

The classification model is based on MobileNetV2.

MobileNetV2 is a lightweight convolutional neural network architecture designed for efficient computation on resource-constrained devices.

---

## Input Configuration

- Image resolution: 96 × 96 pixels
- Color format: grayscale
- Input type: normalized image tensor

---

## Model Size

- Total parameters: approximately 3.5 million
- Optimized model size: less than 4 MB after quantization

---

## Classification Task

The model performs classification of radiolarian fossil specimens.

It distinguishes between:

- radiolarian fossil class
- background or non-target samples

---

## Performance Summary

Radiolarian classification accuracy: 91.84%  
F1 score: 0.91  
Overall classification accuracy: 99.795%
