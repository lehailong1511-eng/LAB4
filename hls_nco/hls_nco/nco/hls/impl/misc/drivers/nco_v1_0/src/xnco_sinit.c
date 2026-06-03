// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2025.2.1 (64-bit)
// Tool Version Limit: 2025.11
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2026 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#ifdef SDT
#include "xparameters.h"
#endif
#include "xnco.h"

extern XNco_Config XNco_ConfigTable[];

#ifdef SDT
XNco_Config *XNco_LookupConfig(UINTPTR BaseAddress) {
	XNco_Config *ConfigPtr = NULL;

	int Index;

	for (Index = (u32)0x0; XNco_ConfigTable[Index].Name != NULL; Index++) {
		if (!BaseAddress || XNco_ConfigTable[Index].Control_BaseAddress == BaseAddress) {
			ConfigPtr = &XNco_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XNco_Initialize(XNco *InstancePtr, UINTPTR BaseAddress) {
	XNco_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XNco_LookupConfig(BaseAddress);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XNco_CfgInitialize(InstancePtr, ConfigPtr);
}
#else
XNco_Config *XNco_LookupConfig(u16 DeviceId) {
	XNco_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XNCO_NUM_INSTANCES; Index++) {
		if (XNco_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XNco_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XNco_Initialize(XNco *InstancePtr, u16 DeviceId) {
	XNco_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XNco_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XNco_CfgInitialize(InstancePtr, ConfigPtr);
}
#endif

#endif

