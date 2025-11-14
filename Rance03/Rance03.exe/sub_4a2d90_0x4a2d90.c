// 函数: sub_4a2d90
// 地址: 0x4a2d90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_4a2d30(arg1)

if (result != 0)
    void* edi_1 = *(result + 0x4a0)
    
    if (edi_1 != 0 && arg1 != 0)
        result = (*(**(arg1 + 0x5c) + 0x18))()
        
        if (result.b != 0)
            int32_t var_c_1 = sub_4a4310(arg1)
            sub_485ca0(arg1 + 8)
            result = (*(**(arg1 + 0x5c) + 0x44))()
        
        if (*(edi_1 + 0xa0) == arg1)
            *(edi_1 + 0xa0) = 0

return result
