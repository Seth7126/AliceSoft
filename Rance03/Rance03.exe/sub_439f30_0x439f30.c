// 函数: sub_439f30
// 地址: 0x439f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
ebx.b = *(arg1 + 8) == 0
void** esi = arg3
int32_t* arg_4

if (arg2 == 0)
label_439fe6:
    char* ecx_6
    
    if (esi[5] u< 0x10)
        ecx_6 = esi
    else
        ecx_6 = *esi
    
    int32_t* edi_2 = arg_4
    
    if (sub_5defa0(ecx_6, edi_2) != 0)
        *edi_2 *= (ebx << 1) + 0xffffffff
        int32_t eax_21
        eax_21.b = 1
        return eax_21
    
    bool cond:1_1 = esi[5] u< 0x10
    arg_4 = nullptr
    char* ecx_7
    
    if (cond:1_1)
        ecx_7 = esi
    else
        ecx_7 = *esi
    
    if (sub_5df030(ecx_7, &arg_4) != 0)
        *edi_2 = int.d(_mm_cvtepi32_ps(zx.o((ebx << 1) + 0xffffffff)) f* arg_4)
        int32_t eax_23
        eax_23.b = 1
        return eax_23
    
    arg_4.b = 0
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    if (sub_5df0c0(esi, &arg_4) != 0)
        int32_t eax_24
        eax_24.b = arg_4.b != 0
        *edi_2 = eax_24 * ((ebx << 1) + 0xffffffff)
        int32_t eax_25
        eax_25.b = 1
        return eax_25
else
    void** edx_1
    
    if (esi[5] u< 0x10)
        edx_1 = esi
    else
        edx_1 = *esi
    
    int32_t* eax_2 = (*(*arg2 + 0x3c))(edx_1)
    
    if (eax_2 == 0)
        goto label_439fe6
    
    int32_t eax_3 = (*(*eax_2 + 4))()
    
    if (eax_3 == 0xa)
        int32_t eax_17 = (*(*eax_2 + 0x10))()
        int32_t* edx_5 = arg_4
        *edx_5 = eax_17
        *edx_5 = eax_17 * ((ebx << 1) + 0xffffffff)
        int32_t eax_18
        eax_18.b = 1
        return eax_18
    
    if (eax_3 == 0xb)
        (*(*eax_2 + 0x18))()
        long double x87_r0
        int32_t eax_14 = sub_6b1250(x87_r0)
        int32_t* edx_4 = arg_4
        *edx_4 = eax_14
        *edx_4 = eax_14 * ((ebx << 1) + 0xffffffff)
        int32_t eax_15
        eax_15.b = 1
        return eax_15
    
    if (eax_3 == 0x2f)
        char eax_9 = (*(*eax_2 + 0x14))()
        int32_t* edx_3 = arg_4
        int32_t ecx_3
        ecx_3.b = eax_9 != 0
        *edx_3 = ecx_3
        *edx_3 = ecx_3 * ((ebx << 1) + 0xffffffff)
        int32_t eax_11
        eax_11.b = 1
        return eax_11
return 0
