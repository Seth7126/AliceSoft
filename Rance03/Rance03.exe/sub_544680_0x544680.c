// 函数: sub_544680
// 地址: 0x544680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* result = arg4

while (arg3 != arg2)
    if (result != 0)
        *result = *arg3
        result[1] = arg3[1]
        result[2] = arg3[2]
        result[3] = arg3[3]
    
    arg3 = &arg3[4]
    result = &result[4]

return result
