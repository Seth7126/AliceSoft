// 函数: sub_5c0500
// 地址: 0x5c0500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1[0x495] = arg2
arg1[0x495] += 4
int32_t* result

if (arg2 s>= 0 && arg2 s< (arg1[0x5e] - arg1[0x5d]) s>> 2)
    result = *(arg1[0x5d] + (arg2 << 2))
    
    if (result != 0)
        result[6] += 1
        return sub_5c0610(arg1) != 0

result.b = 0
return result
