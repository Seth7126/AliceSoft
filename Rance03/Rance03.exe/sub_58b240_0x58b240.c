// 函数: sub_58b240
// 地址: 0x58b240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
ebx.b = *(*(arg1 + 4) + 0x194) s> 0
void* result

if (*(arg1 + 0x124) s>= 2)
    result = (*(**(arg1 + 8) + 0xac))()

if (*(arg1 + 0x124) s< 2 || result.b == 0)
    result.b = 0
else
    result.b = 1

if (ebx.b != 0 && result.b != 0)
    void* eax_3 = *(arg1 + 4) + 0x158
    int32_t ebx_1 = *(eax_3 + 8)
    int32_t edi_1 = *(eax_3 + 0xc)
    
    if (*(arg1 + 0x3d8) == ebx_1 && *(arg1 + 0x3dc) == edi_1)
        goto label_58b2b7
    
    if (*(arg1 + 0x3d0) == 0)
    label_58b2cb:
        
        if (sub_59bef0(arg1 + 0x3d4, ebx_1, edi_1, *(arg1 + 8)).b == 0)
            result.b = 0
            return result
        
        *(arg1 + 0x3d0) = 1
        
        if (*(arg1 + 0x3d0) != 0)
            goto label_58b2ed
    else
        sub_59bf90(arg1 + 0x3d4)
        *(arg1 + 0x3d0) = 0
    label_58b2b7:
        
        if (*(arg1 + 0x3d0) == 0)
            goto label_58b2cb
        
    label_58b2ed:
        
        if (sub_59c000(arg1 + 0x3d4, *(arg1 + 8)).b == 0)
            result.b = 0
            return result
else if (*(arg1 + 0x3d0) != 0)
    sub_59bf90(arg1 + 0x3d4)
    *(arg1 + 0x3d0) = 0

result.b = 1
return result
