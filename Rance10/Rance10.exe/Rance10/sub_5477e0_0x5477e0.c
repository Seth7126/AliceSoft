// 函数: sub_5477e0
// 地址: 0x5477e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] = &common::CPoint::`vftable'
arg1[2] = 0
arg1[3] = 0
arg1[4] = &common::CSize::`vftable'
arg1[5] = arg2
arg1[6] = arg3
*arg1 = &common::CRect::`vftable'
int32_t esi = *(arg4 + 0x14)

if (esi s> 0)
    int32_t edx_1 = *(arg4 + 0x18)
    
    if (edx_1 s> 0)
        int32_t ebx_1 = *(arg4 + 8)
        int32_t edi_1 = *(arg4 + 0xc)
        
        if (ebx_1 s< 0)
            ebx_1 = 0
        
        if (esi + ebx_1 s> arg2)
            esi = arg2 - ebx_1
        
        if (edi_1 s< 0)
            edi_1 = 0
        
        if (edx_1 + edi_1 s> arg3)
            edx_1 = arg3 - edi_1
        
        arg1[2] = ebx_1
        arg1[3] = edi_1
        arg1[5] = esi
        arg1[6] = edx_1

return arg1
