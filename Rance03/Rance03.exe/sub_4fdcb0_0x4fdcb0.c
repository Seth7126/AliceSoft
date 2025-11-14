// 函数: sub_4fdcb0
// 地址: 0x4fdcb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CRect::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = arg2
arg1[4] = arg3
int32_t esi = *(arg4 + 0xc)

if (esi s> 0)
    int32_t edx_1 = *(arg4 + 0x10)
    
    if (edx_1 s> 0)
        int32_t ebp_1 = *(arg4 + 4)
        int32_t edi_1 = *(arg4 + 8)
        
        if (ebp_1 s< 0)
            ebp_1 = 0
        
        if (esi + ebp_1 s> arg2)
            esi = arg2 - ebp_1
        
        if (edi_1 s< 0)
            edi_1 = 0
        
        if (edx_1 + edi_1 s> arg3)
            edx_1 = arg3 - edi_1
        
        arg1[1] = ebp_1
        arg1[2] = edi_1
        arg1[3] = esi
        arg1[4] = edx_1

return arg1
