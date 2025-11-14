// 函数: sub_48d5d0
// 地址: 0x48d5d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != arg2)
    int32_t eax_1 = *arg1
    
    if (eax_1 != 0)
        j__free(eax_1)
        *arg1 = 0
        arg1[1] = 0
        arg1[2] = 0
    
    *arg1 = *arg2
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    *arg2 = 0
    arg2[1] = 0
    arg2[2] = 0

return arg1
