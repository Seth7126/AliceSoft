// 函数: sub_5111d0
// 地址: 0x5111d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm0 = 1f
int32_t eax_2 = *(*(*(arg5 i+ 0x50) + 0x58) + 0x90)

if (eax_2 s> 0)
    int32_t var_28_1 = eax_2
    void* eax_3 = sub_4a56f0(*(arg5 i+ 0x54))
    
    if (eax_3 == 0)
        xmm0 = 1f
    else
        xmm0 = sub_4a28f0(eax_3, 1f)

void* eax_4 = *(arg5 i+ 0x50)
float xmm0_2 = *(arg5 i+ 0xb8) * xmm0
float var_14 = 0f
void* eax_5 = *(eax_4 + 0x58)
float var_18 = xmm0_2
int32_t eax_6 = *(eax_5 + 0x90)
void* eax_7

if (eax_6 s> 0)
    int32_t var_28_2 = eax_6
    eax_7 = sub_4a56f0(*(arg5 i+ 0x54))

float xmm0_3

if (eax_6 s<= 0 || eax_7 == 0)
    xmm0_3 = 1f
else
    xmm0_3 = sub_4a28a0(eax_7, xmm0_2)

bool cond:0 = *(arg1 + 0x1c) == 0
float esi = arg4
float xmm1_2 = *(arg5 i+ 0xb4) * xmm0_3
float var_8 = 0f
float var_c = xmm1_2

if (not(cond:0) && (*(**(*(arg1 + 0x28) + (esi << 2)) + 0x3c))() == 0)
    if (esi != 3)
        esi = 1.40129846e-45f
    else
        esi = 2.80259693e-45f
        
        if ((*(**(*(arg1 + 0x28) + 8) + 0x3c))() == 0)
            esi = 1.40129846e-45f

int32_t* ebx_1 = *(*(arg1 + 0x28) + (esi << 2))
int32_t eax_19 = *(*(*(arg5 i+ 0x50) + 0x58) + 0x90)
void* eax_20

if (eax_19 s> 0)
    int32_t var_28_3 = eax_19
    eax_20 = sub_4a56f0(*(arg5 i+ 0x54))

float xmm0_4

if (eax_19 s<= 0 || eax_20 == 0)
    xmm0_4 = (zx.o(0)).d
else
    xmm0_4 = sub_4a29e0(eax_20, xmm0_3)

int32_t eax_23 = *(*(*(arg5 i+ 0x50) + 0x58) + 0x90)
void* eax_24

if (eax_23 s> 0)
    int32_t var_28_4 = eax_23
    eax_24 = sub_4a56f0(*(arg5 i+ 0x54))

float xmm0_5

if (eax_23 s<= 0 || eax_24 == 0)
    xmm0_5 = (zx.o(0)).d
else
    xmm0_5 = sub_4a2990(eax_24, xmm0_4)

int32_t eax_27 = *(*(*(arg5 i+ 0x50) + 0x58) + 0x90)
void* eax_28

if (eax_27 s> 0)
    int32_t var_28_5 = eax_27
    eax_28 = sub_4a56f0(*(arg5 i+ 0x54))

float xmm2

if (eax_27 s<= 0 || eax_28 == 0)
    xmm2 = (zx.o(0)).d
else
    xmm2 = sub_4a2940(eax_28, xmm0_5)

float xmm3_1 = *(arg5 i+ 0xc4) + xmm0_4
void* esi_1 = *ebx_1
float xmm0_8 = *(arg5 i+ 0xbc) + xmm2
float* eax_30 = &var_18
float xmm3_3 = *(arg5 i+ 0xc0) + xmm0_5

if (xmm0_2 f<= 0)
    eax_30 = &var_14

float xmm0_10 = *eax_30
float* eax_31 = &var_c

if (xmm1_2 f<= 0)
    eax_31 = &var_8

float xmm0_12 = *eax_31
int32_t var_44 = *(arg5 i+ 0x88)
int32_t ecx_13
int32_t xmm0_13
ecx_13, xmm0_13 = sub_4a1cf0(arg5)
int32_t var_48 = ecx_13
int32_t ecx_15
int32_t xmm0_14
ecx_15, xmm0_14 = sub_4a1c10(arg5)
int32_t var_4c = ecx_15
return (*(esi_1 + 0x48))(arg2, arg3, xmm0_14, xmm0_13, var_44, xmm0_12, xmm0_10, xmm0_8, xmm3_3, 
    xmm3_1, arg5 i+ 0x3b4, arg6)
