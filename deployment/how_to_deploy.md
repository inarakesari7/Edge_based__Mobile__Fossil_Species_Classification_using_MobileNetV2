# Deployment Instructions

The trained model can be deployed to embedded or mobile devices using the exported inference library.

This repository does not include the full SDK because it is automatically generated during deployment export.

---

## Deployment Steps

1. Open the Edge Impulse project used for training.
2. Navigate to the Deployment tab.
3. Select Arduino Library as the deployment format.
4. Choose Quantized (int8) model.
5. Export the deployment package.
6. Add the exported library to the Arduino project.
7. Upload firmware to the target device.

---

## Supported Deployment Targets

The quantized model can be deployed on:

- microcontrollers
- embedded edge devices
- mobile platforms

---

## Hardware Independence

The deployment pipeline is hardware-agnostic.  
The exported inference library can be integrated into different embedded systems depending on available resources.
