// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2025.2.1 (64-bit)
// Tool Version Limit: 2025.11
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2026 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
// control
// 0x00 : reserved
// 0x04 : reserved
// 0x08 : reserved
// 0x0c : reserved
// 0x10 : Data signal of sine_sample
//        bit 15~0 - sine_sample[15:0] (Read)
//        others   - reserved
// 0x14 : Control signal of sine_sample
//        bit 0  - sine_sample_ap_vld (Read/COR)
//        others - reserved
// 0x20 : Data signal of step_size
//        bit 15~0 - step_size[15:0] (Read/Write)
//        others   - reserved
// 0x24 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNCO_CONTROL_ADDR_SINE_SAMPLE_DATA 0x10
#define XNCO_CONTROL_BITS_SINE_SAMPLE_DATA 16
#define XNCO_CONTROL_ADDR_SINE_SAMPLE_CTRL 0x14
#define XNCO_CONTROL_ADDR_STEP_SIZE_DATA   0x20
#define XNCO_CONTROL_BITS_STEP_SIZE_DATA   16

