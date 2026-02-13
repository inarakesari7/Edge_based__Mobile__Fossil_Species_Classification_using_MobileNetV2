# Training Pipeline

The model was trained using the Edge Impulse machine learning platform.

The training workflow follows a TinyML deployment pipeline designed for embedded inference.

---

## Step 1 — Data Upload

The radiolarian microfossil dataset was uploaded to the Edge Impulse project environment.

Data was organized into labeled classes for supervised learning.

---

## Step 2 — Impulse Design

Input block configuration:

- Image size: 96 × 96 pixels
- Color mode: grayscale
- Processing: image preprocessing block

This configuration ensures compatibility with resource-constrained embedded devices.

---

## Step 3 — Feature Extraction

Transfer learning was used with a MobileNetV2 backbone.

This enables efficient training while maintaining high classification performance.

---

## Step 4 — Model Training

The classification model was trained using labeled dataset samples.

Training included:

- automatic feature learning
- validation monitoring
- performance evaluation metrics

---

## Step 5 — Model Evaluation

Model performance was evaluated using:

- accuracy
- precision
- recall
- F1 score

Evaluation results reported in the research paper were obtained directly from the Edge Impulse evaluation system.

---

## Step 6 — Quantization

Post-training quantization was applied to convert the model to int8 precision.

Benefits:

- reduced memory footprint
- faster inference
- improved suitability for embedded hardware

---

## Step 7 — Deployment Export

The trained and quantized model was exported as an Arduino inference library.

This library enables direct deployment on microcontroller or mobile edge platforms.

---

## Summary Pipeline

Dataset → Impulse Design → Transfer Learning → Training → Evaluation → Quantization → Deployment Export
