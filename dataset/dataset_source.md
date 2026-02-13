# Dataset Source

This project uses a radiolarian microfossil image dataset.

Source: Zenodo  
DOI: https://doi.org/10.5281/zenodo.6565553  

License: Creative Commons Attribution 4.0

The dataset is not included in this repository due to size constraints.  
It can be downloaded directly from Zenodo using the DOI link above.

---

## Data Description

The dataset contains microscopy images of radiolarian fossil specimens used for classification tasks.

Images were processed to ensure compatibility with embedded inference systems.

---

## Preprocessing Pipeline

The following preprocessing steps were applied:

- Conversion to grayscale
- Resizing to 96 × 96 pixels
- Normalization to standard range
- Patch extraction
- Data augmentation

These preprocessing steps were performed prior to model training in Edge Impulse.
