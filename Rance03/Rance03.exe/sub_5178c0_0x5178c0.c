// 函数: sub_5178c0
// 地址: 0x5178c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_5179e0(arg1)
    
    struct partsengine::CTextHighlightModel::VTable** ecx_6 = arg1[1]
    
    if (ecx_6 != 0)
        *ecx_6 = &partsengine::CTextHighlightModel::`vftable'
        ecx_6[1] = *(arg2 + 4)
        ecx_6[2] = *(arg2 + 8)
        ecx_6[3] = *(arg2 + 0xc)
        ecx_6[4] = *(arg2 + 0x10)
        ecx_6[5] = *(arg2 + 0x14)
        ecx_6[6] = *(arg2 + 0x18)
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_5179e0(arg1)
    
    void* edx_4 = *arg1 + (arg2 - eax) s/ 0x1c * 0x1c
    struct partsengine::CTextHighlightModel::VTable** ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        *ecx_4 = &partsengine::CTextHighlightModel::`vftable'
        ecx_4[1] = *(edx_4 + 4)
        ecx_4[2] = *(edx_4 + 8)
        ecx_4[3] = *(edx_4 + 0xc)
        ecx_4[4] = *(edx_4 + 0x10)
        ecx_4[5] = *(edx_4 + 0x14)
        ecx_4[6] = *(edx_4 + 0x18)
        arg1[1] += 0x1c
        return 

arg1[1] += 0x1c
