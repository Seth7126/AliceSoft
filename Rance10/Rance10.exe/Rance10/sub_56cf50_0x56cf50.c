// 函数: sub_56cf50
// 地址: 0x56cf50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_56d110(arg1)
    
    struct common::CRect::VTable** ecx_6 = arg1[1]
    
    if (ecx_6 != 0)
        *ecx_6 = &common::CRect::`vftable'
        ecx_6[1] = &common::CPoint::`vftable'
        ecx_6[2] = *(arg2 + 8)
        ecx_6[3] = *(arg2 + 0xc)
        ecx_6[4] = &common::CSize::`vftable'
        ecx_6[5] = *(arg2 + 0x14)
        ecx_6[6] = *(arg2 + 0x18)
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_56d110(arg1)
    
    struct common::CRect::VTable** edx_4 = arg1[1]
    
    if (edx_4 != 0)
        int32_t eax_1 = *arg1
        *edx_4 = &common::CRect::`vftable'
        edx_4[1] = &common::CPoint::`vftable'
        void* ecx_4 = eax_1 + (arg2 - eax) s/ 0x1c * 0x1c
        edx_4[2] = *(ecx_4 + 8)
        edx_4[3] = *(ecx_4 + 0xc)
        edx_4[4] = &common::CSize::`vftable'
        edx_4[5] = *(ecx_4 + 0x14)
        edx_4[6] = *(ecx_4 + 0x18)
        arg1[1] += 0x1c
        return 

arg1[1] += 0x1c
