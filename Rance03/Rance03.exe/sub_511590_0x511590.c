// 函数: sub_511590
// 地址: 0x511590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float edx_3 = arg2

if (edx_3 u> 3)
    return 

float xmm0_1 = 1f
float ebp_1 = arg3
int32_t* ebx_1 = *(*(arg1 + 0x28) + (edx_3 << 2))
int32_t eax_4 = *(*(*(ebp_1 i+ 0x50) + 0x58) + 0x90)

if (eax_4 s> 0)
    int32_t var_30_1 = eax_4
    void* eax_5 = sub_4a56f0(*(ebp_1 i+ 0x54))
    
    if (eax_5 == 0)
        xmm0_1 = 1f
    else
        xmm0_1 = sub_4a28f0(eax_5, 1f)

void* eax_6 = *(ebp_1 i+ 0x50)
float xmm0_3 = *(ebp_1 i+ 0xb8) * xmm0_1
float var_18 = 0f
void* eax_7 = *(eax_6 + 0x58)
float var_14 = xmm0_3
float var_1c = xmm0_3
int32_t eax_8 = *(eax_7 + 0x90)
void* eax_9

if (eax_8 s> 0)
    int32_t var_30_2 = eax_8
    eax_9 = sub_4a56f0(*(ebp_1 i+ 0x54))

float xmm0_4

if (eax_8 s<= 0 || eax_9 == 0)
    xmm0_4 = 1f
else
    xmm0_4 = sub_4a28a0(eax_9, xmm0_3)

void* eax_10 = *(ebp_1 i+ 0x50)
float xmm1_3 = *(ebp_1 i+ 0xb4) * xmm0_4
float var_c = 0f
void* eax_11 = *(eax_10 + 0x58)
float var_8 = xmm1_3
float var_10 = xmm1_3
int32_t eax_12 = *(eax_11 + 0x90)
void* eax_13

if (eax_12 s> 0)
    int32_t var_30_3 = eax_12
    eax_13 = sub_4a56f0(*(ebp_1 i+ 0x54))

float xmm0_5

if (eax_12 s<= 0 || eax_13 == 0)
    xmm0_5 = (zx.o(0)).d
else
    xmm0_5 = sub_4a29e0(eax_13, xmm0_4)

void* eax_14 = *(ebp_1 i+ 0x50)
arg2 = xmm0_5
int32_t eax_16 = *(*(eax_14 + 0x58) + 0x90)
void* eax_17

if (eax_16 s> 0)
    int32_t var_30_4 = eax_16
    eax_17 = sub_4a56f0(*(ebp_1 i+ 0x54))

float xmm0_6

if (eax_16 s<= 0 || eax_17 == 0)
    xmm0_6 = (zx.o(0)).d
else
    xmm0_6 = sub_4a2990(eax_17, xmm0_5)

void* eax_18 = *(ebp_1 i+ 0x50)
arg3 = xmm0_6
int32_t eax_20 = *(*(eax_18 + 0x58) + 0x90)
void* eax_21

if (eax_20 s> 0)
    int32_t var_30_5 = eax_20
    eax_21 = sub_4a56f0(*(ebp_1 i+ 0x54))

float xmm2_1

if (eax_20 s<= 0 || eax_21 == 0)
    xmm2_1 = (zx.o(0)).d
else
    xmm2_1 = sub_4a2940(eax_21, xmm0_6)

float xmm3_2 = *(ebp_1 i+ 0xc4) + arg2
int32_t esi_1 = *ebx_1
float xmm0_9 = *(ebp_1 i+ 0xbc) + xmm2_1
float* eax_23 = &var_1c
float xmm3_4 = *(ebp_1 i+ 0xc0) + arg3

if (var_14 f<= 0)
    eax_23 = &var_18

float xmm0_11 = *eax_23
float* eax_24 = &var_10

if (var_8 f<= 0)
    eax_24 = &var_c

float xmm0_13 = *eax_24
int32_t var_48_1 = *(ebp_1 i+ 0x88)
int32_t ecx_11
int32_t xmm0_14
ecx_11, xmm0_14 = sub_4a1cf0(ebp_1)
int32_t var_4c_1 = ecx_11
int32_t ecx_13
int32_t xmm0_15
ecx_13, xmm0_15 = sub_4a1c10(ebp_1)
int32_t var_50_1 = ecx_13
(*(esi_1 + 0x18))(xmm0_15, xmm0_14, var_48_1, xmm0_13, xmm0_11, xmm0_9, xmm3_4, xmm3_2, 
    ebp_1 i+ 0x3b4)
(*(*ebx_1 + 0x24))(sub_4a2720(ebp_1))
(*(*ebx_1 + 0x28))(*(ebp_1 i+ 0xb0))
int32_t eax_27 = sub_4a1bb0(ebp_1)
arg3 = 3.57331108e-43f
float esi_4 = eax_27 + *(ebp_1 i+ 0xa0)
arg2 = esi_4
int32_t eax_28 = sub_4a1b50(ebp_1)
var_c = 3.57331108e-43f
float edi_2 = eax_28 + *(ebp_1 i+ 0x9c)
var_8 = edi_2
int32_t eax_29 = sub_4a1af0(ebp_1)
int32_t ebx_2 = *ebx_1
float* ecx_21 = &arg2
var_14 = 3.57331108e-43f
float edx_1 = eax_29 + *(ebp_1 i+ 0x98)
var_10 = edx_1

if (esi_4 s>= 0xff)
    ecx_21 = &arg3

float* eax_30 = &var_8

if (edi_2 s>= 0xff)
    eax_30 = &var_c

float* eax_31 = &var_10

if (edx_1 s>= 0xff)
    eax_31 = &var_14

(*(ebx_2 + 0x30))(*eax_31, *eax_30, *ecx_21)
int32_t esi_5 = *ebx_1
int32_t eax_32 = sub_4a2850(ebp_1)
int32_t eax_33 = sub_4a2800(ebp_1)
(*(esi_5 + 0x34))(sub_4a27b0(ebp_1), eax_33, eax_32)
(*(*ebx_1 + 0x38))(*(ebp_1 i+ 0xf0), zx.d(*(ebp_1 i+ 0xf4)))
(*(*ebx_1 + 0x14))()
