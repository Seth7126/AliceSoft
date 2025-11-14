// 函数: sub_5a2900
// 地址: 0x5a2900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d508
int32_t result

if (arg1 s>= 0 && arg1 s< (*(esi + 0x54) - *(esi + 0x50)) s>> 2)
    void* edi_1 = *(*(esi + 0x50) + (arg1 << 2))
    
    if (edi_1 != 0)
        int32_t* ecx = *(esi + 0x5c)
        
        if (ecx != 0)
            (*(*ecx + 0xc))(*(edi_1 + 8))
            (*(**(esi + 0x5c) + 8))(arg2, edi_1)
        
        *(edi_1 + 8) = arg2
        result.b = 1
        return result

result.b = 0
return result
