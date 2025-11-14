// 函数: sub_464970
// 地址: 0x464970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** edi = arg2
int32_t var_8 = 0
float var_4 = 0f

if (sub_464ab0(edi) != 0)
    char* eax_1
    
    if (edi[5] u< 0x10)
        eax_1 = edi
    else
        eax_1 = *edi
    
    int32_t* var_14_1 = &var_8
    
    if (sub_69b31c(eax_1, 0x6dcf3c) == 1)
        int32_t eax_3 = var_8
        *(arg1 + 8) = eax_3
        *(arg1 + 4) = 1
        *(arg1 + 0xc) = _mm_cvtepi32_ps(zx.o(eax_3))
        return eax_3

int32_t eax_4 = sub_464b20(edi)

if (eax_4.b != 0)
    if (edi[5] u>= 0x10)
        edi = *edi
    
    int32_t* var_14_2 = &var_4
    eax_4 = sub_69b31c(edi, 0x6dcf38)
    
    if (eax_4 == 1)
        float xmm0_2 = var_4
        int32_t eax_5 = int.d(xmm0_2)
        *(arg1 + 4) = 2
        *(arg1 + 0xc) = xmm0_2
        *(arg1 + 8) = eax_5
        return eax_5

*(arg1 + 0xc) = 0
*(arg1 + 8) = 0
*(arg1 + 4) = 0
return eax_4
