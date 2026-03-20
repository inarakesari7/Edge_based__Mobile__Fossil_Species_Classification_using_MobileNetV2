MIT License
# Edge-based Fossil Species Classification using MobileNetV2

This repository contains the implementation and reproducibility resources for the research work:

**Edge-based Fossil Species Classification using MobileNetV2**

The project presents a TinyML-based pipeline for performing radiolarian fossil classification directly on edge or mobile devices without requiring internet connectivity.

The system enables real-time fossil identification in field environments by deploying a lightweight deep learning model optimized for embedded hardware.

---

## Objective

Traditional fossil classification workflows require laboratory analysis and expert interpretation. This project demonstrates a deployable machine learning system capable of performing classification locally on resource-constrained devices.

The proposed system:

- Trains a lightweight convolutional neural network (MobileNetV2)
- Applies post-training quantization for efficient inference
- Enables offline classification on embedded platforms
- Supports deployment on mobile or microcontroller devices

---

## Dataset

Radiolarian microfossil dataset  
Source: Zenodo  
DOI: https://doi.org/10.5281/zenodo.6565553  

License: Creative Commons Attribution 4.0

### Preprocessing

- Grayscale conversion
- Resize to 96×96 pixels
- Normalization
- Patch extraction
- Data augmentation

Dataset is not included in this repository due to size constraints.

---

## Model Details

Architecture: MobileNetV2  
Input size: 96×96 grayscale  
Precision: int8 quantized  
Parameters: ~3.5 million  
Model size: < 4 MB  

### Performance

Radiolarian accuracy: 91.84%  
F1 score: 0.91  
Overall classification accuracy: 99.795%

---

## Training Pipeline

Training was performed using Edge Impulse.

Pipeline:

1. Dataset upload
2. Impulse design (96×96 grayscale)
3. Transfer learning using MobileNetV2
4. Model evaluation
5. Post-training quantization
6. Export Arduino deployment library

Detailed documentation available in:
training/edge_impulse_training_pipeline.md

## Deployment

The trained model can be deployed to embedded or mobile platforms using the exported inference library.

Full deployment instructions:
deployment/how_to_deploy.md

The repository contains an example Arduino inference template.

## Repository Structure
paper/ → Research manuscript
dataset/ → Dataset description and source
training/ → Training workflow documentation
model/ → Model architecture and quantization details
deployment/ → Example inference firmware and instructions
reproducibility/ → Steps to reproduce results

## Reproducibility

To reproduce results:

1. Download dataset from Zenodo
2. Train model using Edge Impulse pipeline
3. Apply quantization
4. Evaluate model

Full instructions:
reproducibility/reproduce_results.md

## Authors

Anurag Mohod  
Ishaan Narakesari  
Dr. Anshu Gupta  

## License
This project is licensed under the MIT License - see the LICENSE file for details.

## Citation

If you use this work in research, please cite the associated paper.
