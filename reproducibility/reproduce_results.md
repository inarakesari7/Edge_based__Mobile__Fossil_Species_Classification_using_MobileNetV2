# Reproducing Experimental Results

This document describes the steps required to reproduce the model training and evaluation results reported in the research paper.

---

## Step 1 — Download Dataset

Download the radiolarian microfossil dataset from Zenodo:

https://doi.org/10.5281/zenodo.6565553

Ensure the dataset structure matches the labeled classification format.

---

## Step 2 — Upload Dataset to Edge Impulse

Create or open an Edge Impulse project.

Upload dataset samples into labeled classes.

Ensure image preprocessing settings:

- grayscale images
- resolution 96 × 96 pixels

---

## Step 3 — Configure Impulse

Configure input processing block:

- image data
- resize to 96 × 96
- normalization enabled

---

## Step 4 — Train Model

Use transfer learning with MobileNetV2.

Train classification model using default or optimized training parameters.

Monitor training performance and validation metrics.

---

## Step 5 — Evaluate Model

Evaluate using Edge Impulse test dataset.

Record:

- classification accuracy
- precision
- recall
- F1 score

Results should match reported values within expected training variance.

---

## Step 6 — Apply Quantization

Enable post-training quantization.

Export optimized int8 model.

---

## Step 7 — Deployment (Optional)

Export Arduino deployment library.

Run inference on embedded or mobile device.

---

## Expected Results

Radiolarian classification accuracy: ~91.84%  
F1 score: ~0.91  
Overall classification accuracy: ~99.795%
