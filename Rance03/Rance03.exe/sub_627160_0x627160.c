// 函数: sub_627160
// 地址: 0x627160
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg1

if (result != 0 && arg2 != 0)
    int32_t edx_1 = *(result + 0x278)
    
    if (edx_1 != 0)
        arg1 = result
        jump(edx_1)
    
    result = _free(arg2)

return result
