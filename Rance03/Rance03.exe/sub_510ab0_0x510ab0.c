// 函数: sub_510ab0
// 地址: 0x510ab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 u> 3)
    return 

if ((*(**(*(arg1 + 0x28) + (arg3 << 2)) + 0x3c))() == 0)
    sub_4a1cf0(arg4)
    return 

float xmm0_1 = 1f
int32_t eax_7 = *(*(*(arg4 i+ 0x50) + 0x58) + 0x90)

if (eax_7 s> 0)
    int32_t var_28_1 = eax_7
    void* eax_8 = sub_4a56f0(*(arg4 i+ 0x54))
    
    if (eax_8 == 0)
        xmm0_1 = 1f
    else
        xmm0_1 = sub_4a28f0(eax_8, 1f)

void* eax_9 = *(arg4 i+ 0x50)
float xmm0_3 = *(arg4 i+ 0xb8) * xmm0_1
float var_14 = 0f
void* eax_10 = *(eax_9 + 0x58)
float var_18 = xmm0_3
int32_t eax_11 = *(eax_10 + 0x90)
void* eax_12

if (eax_11 s> 0)
    int32_t var_28_2 = eax_11
    eax_12 = sub_4a56f0(*(arg4 i+ 0x54))

float xmm0_4

if (eax_11 s<= 0 || eax_12 == 0)
    xmm0_4 = 1f
else
    xmm0_4 = sub_4a28a0(eax_12, xmm0_3)

int32_t eax_13 = *(arg1 + 0x28)
float xmm1_2 = *(arg4 i+ 0xb4) * xmm0_4
float var_8 = 0f
int32_t* ebx_1 = *(eax_13 + (arg3 << 2))
void* eax_14 = *(arg4 i+ 0x50)
float var_c = xmm1_2
int32_t eax_16 = *(*(eax_14 + 0x58) + 0x90)
void* eax_17

if (eax_16 s> 0)
    int32_t var_28_3 = eax_16
    eax_17 = sub_4a56f0(*(arg4 i+ 0x54))

float xmm0_5

if (eax_16 s<= 0 || eax_17 == 0)
    xmm0_5 = (zx.o(0)).d
else
    xmm0_5 = sub_4a29e0(eax_17, xmm0_4)

int32_t eax_20 = *(*(*(arg4 i+ 0x50) + 0x58) + 0x90)
void* eax_21

if (eax_20 s> 0)
    int32_t var_28_4 = eax_20
    eax_21 = sub_4a56f0(*(arg4 i+ 0x54))

float xmm0_6

if (eax_20 s<= 0 || eax_21 == 0)
    xmm0_6 = (zx.o(0)).d
else
    xmm0_6 = sub_4a2990(eax_21, xmm0_5)

int32_t eax_24 = *(*(*(arg4 i+ 0x50) + 0x58) + 0x90)
void* eax_25

if (eax_24 s> 0)
    int32_t var_28_5 = eax_24
    eax_25 = sub_4a56f0(*(arg4 i+ 0x54))

float xmm2

if (eax_24 s<= 0 || eax_25 == 0)
    xmm2 = (zx.o(0)).d
else
    xmm2 = sub_4a2940(eax_25, xmm0_6)

float xmm3_1 = *(arg4 i+ 0xc4) + xmm0_5
void* esi_1 = *ebx_1
float xmm0_9 = *(arg4 i+ 0xbc) + xmm2
float* eax_27 = &var_18
float xmm3_3 = *(arg4 i+ 0xc0) + xmm0_6

if (xmm0_3 f<= 0)
    eax_27 = &var_14

float xmm0_11 = *eax_27
float* eax_28 = &var_c

if (xmm1_2 f<= 0)
    eax_28 = &var_8

float xmm0_13 = *eax_28
int32_t var_40 = *(arg4 i+ 0x88)
int32_t ecx_13
int32_t xmm0_14
ecx_13, xmm0_14 = sub_4a1cf0(arg4)
int32_t var_44 = ecx_13
int32_t ecx_15
int32_t xmm0_15
ecx_15, xmm0_15 = sub_4a1c10(arg4)
int32_t var_48 = ecx_15
(*(esi_1 + 0x50))(xmm0_15, xmm0_14, var_40, xmm0_13, xmm0_11, xmm0_9, xmm3_3, xmm3_1, arg4 i+ 0x3b4)
arg4 = fconvert.s(arg2)
