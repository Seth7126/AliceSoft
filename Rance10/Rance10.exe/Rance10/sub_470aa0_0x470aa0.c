// 函数: sub_470aa0
// 地址: 0x470aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0
float var_4 = 0f

if (sub_470bf0(arg2) != 0)
    char* eax_1
    
    if (arg2[5] u< 0x10)
        eax_1 = arg2
    else
        eax_1 = *arg2
    
    int32_t* __saved_ebx_1 = &var_8
    
    if (sub_6ca310(eax_1, 0x7942e0) == 1)
        int32_t eax_3 = var_8
        *(arg1 + 8) = eax_3
        *(arg1 + 4) = 1
        *(arg1 + 0xc) = _mm_cvtepi32_ps(zx.o(eax_3))
        return eax_3

if (sub_470c60(arg2) != 0)
    char* eax_5
    
    if (arg2[5] u< 0x10)
        eax_5 = arg2
    else
        eax_5 = *arg2
    
    int32_t* __saved_ebx_2 = &var_4
    
    if (sub_6ca310(eax_5, 0x79394c) == 1)
        float xmm0_2 = var_4
        int32_t eax_7 = int.d(xmm0_2)
        *(arg1 + 4) = 2
        *(arg1 + 0xc) = xmm0_2
        *(arg1 + 8) = eax_7
        return eax_7

int32_t* ecx_2

if (arg2[5] u< 0x10)
    ecx_2 = arg2
else
    ecx_2 = *arg2

int32_t ebx = arg2[4]
int32_t eax_8 = 4

if (ebx u< 4)
    eax_8 = ebx

int32_t eax_10

if (sub_406ac0(eax_8, "true", ecx_2, eax_8) != 0 || ebx u< 4 || ebx u> 4)
    char eax_11 = sub_407560(arg2, "false")
    
    if (eax_11 == 0)
        *(arg1 + 0xc) = 0
        *(arg1 + 8) = 0
        *(arg1 + 4) = 0
        return eax_11
    
    eax_10 = 0
else
    eax_10 = 1

int32_t xmm0_4 = _mm_cvtepi32_ps(zx.o(eax_10))
*(arg1 + 8) = eax_10
*(arg1 + 4) = 1
*(arg1 + 0xc) = xmm0_4
return eax_10
