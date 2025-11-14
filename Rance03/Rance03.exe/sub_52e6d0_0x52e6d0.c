// 函数: sub_52e6d0
// 地址: 0x52e6d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_52e7e0(arg1)
    
    struct sealengine::CRect::VTable** ecx_5 = arg1[1]
    
    if (ecx_5 != 0)
        *ecx_5 = &sealengine::CRect::`vftable'
        ecx_5[1] = *(arg2 + 4)
        ecx_5[2] = *(arg2 + 8)
        ecx_5[3] = *(arg2 + 0xc)
        ecx_5[4] = *(arg2 + 0x10)
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_52e7e0(arg1)
    
    void* edx_3 = *arg1 + (arg2 - eax) s/ 0x14 * 0x14
    struct sealengine::CRect::VTable** ecx_3 = arg1[1]
    
    if (ecx_3 != 0)
        *ecx_3 = &sealengine::CRect::`vftable'
        ecx_3[1] = *(edx_3 + 4)
        ecx_3[2] = *(edx_3 + 8)
        ecx_3[3] = *(edx_3 + 0xc)
        ecx_3[4] = *(edx_3 + 0x10)
        arg1[1] += 0x14
        return 

arg1[1] += 0x14
