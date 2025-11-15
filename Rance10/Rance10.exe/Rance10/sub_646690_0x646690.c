// 函数: sub_646690
// 地址: 0x646690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char result = (*(*arg2 + 0x2c))(0, 0, 0, 1)

if (result == 0)
    return result

(*(*arg1 + 0xc8))(0)
(*(*arg1 + 0xcc))(0)

if ((*(*arg1 + 0xbc))(1, 0, 1, 0, 0, 0xffffffff) != 0)
    int32_t* ecx_3 = *(arg3 + 4)
    
    if (ecx_3 != 0 && (*(*ecx_3 + 0x24))() != 0)
        return sub_64a080(arg3) != 0

return 0
