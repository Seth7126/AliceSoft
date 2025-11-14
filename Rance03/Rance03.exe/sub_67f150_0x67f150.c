// 函数: sub_67f150
// 地址: 0x67f150
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
    sub_67f270(arg1)
    sub_67f380(arg1)
    sub_67f490(arg1)

if (*(arg1 + 0x30) != 0)
    *(arg1 + 0x50) += sx.d(eax)
    int32_t ecx_3 = *(arg1 + 0x50)
    *(arg1 + 0x54) += sx.d(ebx)
    int32_t esi_1 = *(arg1 + 0x54)
    
    if (*(arg1 + 4) s< ecx_3)
        ecx_3 = *(arg1 + 4)
    
    if (*(arg1 + 8) s> ecx_3)
        ecx_3 = *(arg1 + 8)
    
    if (*(arg1 + 0xc) s< esi_1)
        esi_1 = *(arg1 + 0xc)
    
    if (*(arg1 + 0x10) s> esi_1)
        esi_1 = *(arg1 + 0x10)
    
    sub_67f6b0(arg1, ecx_3)
    sub_67f790(arg1, esi_1)

if (*(arg1 + 0x32) != 0 && *(arg1 + 0x31) != 0)
    int32_t ecx_6 = *(arg1 + 0x58)
    int32_t edx_1
    
    if (ecx_6 == 0xffffffff)
    label_67f215:
        edx_1 = *(arg1 + 0x5c)
        
        if (edx_1 != 0xffffffff)
            *(*(*(arg1 + 0x74) + (edx_1 << 2)) + 0x7b) = 0
        else if (ecx_6 != 0xffffffff)
            goto label_67f227
    else if (*(arg1 + 0x5c) != 0xffffffff)
        if (ecx_6 == 0xffffffff)
            goto label_67f215
        
    label_67f227:
        edx_1 = *(arg1 + 0x5c)
        
        if (edx_1 != 0xffffffff)
            *(*(*(*(arg1 + 0x8c) + ecx_6 * 0xc) + (edx_1 << 2)) + 0x7b) = 0
    else
        *(*(*(arg1 + 0x68) + (ecx_6 << 2)) + 0x7b) = 0

eax_1.b = *(arg1 + 0x30)
*(arg1 + 0x31) = eax_1.b
*(arg1 + 0x14) = point.x
int32_t y = point.y
*(arg1 + 0x32) = 0
*(arg1 + 0x18) = y
return y
