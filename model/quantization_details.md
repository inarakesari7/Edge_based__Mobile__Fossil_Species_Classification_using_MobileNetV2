# Quantization Details

Post-training quantization was applied to the trained model.

The model was converted from floating-point precision to 8-bit integer (int8) representation.

---

## Purpose of Quantization

Quantization enables efficient deployment on embedded systems by reducing:

- memory usage
- computational complexity
- inference latency
- power consumption

---

## Deployment Benefits

The quantized model is suitable for:

- microcontroller-based inference
- mobile device deployment
- offline classification systems

---

## Accuracy Impact

Model performance after quantization remained comparable to the original floating-point model, ensuring reliable classification accuracy while significantly reducing resource requirements.
