// 函数: sub_58fa90
// 地址: 0x58fa90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(*arg3 + 0x24))() == 0)
    return 0

int32_t esi = **(arg1 + 0x20)
int32_t eax_8 = (*(*arg3 + 0x10))((*(*arg3 + 0x14))(0x20))
*(arg1 + 0x20)
int32_t* result = (*(esi + 0xc))(eax_8)

if (result != 0)
    if (sub_58fb30(arg1, result, arg3) != 0)
        if ((*(*arg3 + 0x28))() == 0)
            if ((*(*result + 0x24))() != 0)
                sub_5901d0(result, 0)
            
            return result
        
        if (sub_58ff60(result, arg3, arg2) != 0)
            return result
    
    (*(*result + 4))()

return 0
