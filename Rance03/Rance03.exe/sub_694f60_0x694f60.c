// 函数: sub_694f60
// 地址: 0x694f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
GetCursorPos(&point)
int16_t eax = point.x.w - *(arg1 + 0x14)
uint32_t eax_1
eax_1.w = point.y.w - *(arg1 + 0x18)
int16_t ebx = eax_1.w
eax_1.b = *(arg1 + 0x30)

if (eax_1.b != *(arg1 + 0x31) && eax_1.b != 0)
    *(arg1 + 0x58) = 0xffffffff
    *(arg1 + 0x5c) = 0xffffffff
    sub_695090(arg1)
    sub_6951a0(arg1)
    sub_6952b0(arg1)

if (*(arg1 + 0x30) != 0)
    *(arg1 + 0x50) += sx.d(eax)
    int32_t ecx_3 = *(arg1 + 0x50)
    *(arg1 + 0x54) += sx.d(ebx)
    int32_t edi_1 = *(arg1 + 0x54)
    
    if (*(arg1 + 4) s< ecx_3)
        ecx_3 = *(arg1 + 4)
    
    int32_t eax_4 = *(arg1 + 0x10)
    
    if (*(arg1 + 8) s> ecx_3)
        ecx_3 = *(arg1 + 8)
    
    if (*(arg1 + 0xc) s< edi_1)
        edi_1 = *(arg1 + 0xc)
    
    if (eax_4 s> edi_1)
        edi_1 = eax_4
    
    if (sub_6954e0(arg1, ecx_3).b == 0)
        eax_1.b = 0
        return eax_1
    
    if (sub_6955e0(arg1, edi_1).b == 0)
        eax_1.b = 0
        return eax_1

if (*(arg1 + 0x32) != 0 && *(arg1 + 0x31) != 0)
    int32_t ecx_6 = *(arg1 + 0x58)
    int32_t edx_1
    
    if (ecx_6 == 0xffffffff)
    label_695037:
        edx_1 = *(arg1 + 0x5c)
        
        if (edx_1 != 0xffffffff)
            *(*(*(arg1 + 0x74) + (edx_1 << 2)) + 0x7b) = 0
        else if (ecx_6 != 0xffffffff)
            goto label_695049
    else if (*(arg1 + 0x5c) != 0xffffffff)
        if (ecx_6 == 0xffffffff)
            goto label_695037
        
    label_695049:
        edx_1 = *(arg1 + 0x5c)
        
        if (edx_1 != 0xffffffff)
            *(*(*(*(arg1 + 0x8c) + ecx_6 * 0xc) + (edx_1 << 2)) + 0x7b) = 0
    else
        *(*(*(arg1 + 0x68) + (ecx_6 << 2)) + 0x7b) = 0

eax_1.b = *(arg1 + 0x30)
*(arg1 + 0x31) = eax_1.b
*(arg1 + 0x14) = point.x
*(arg1 + 0x18) = point.y
int32_t eax_9
eax_9.b = 1
*(arg1 + 0x32) = 0
return eax_9
