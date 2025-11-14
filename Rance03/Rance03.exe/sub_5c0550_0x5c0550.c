// 函数: sub_5c0550
// 地址: 0x5c0550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1[0x495] - 4)
int32_t result

if (edx s>= 0 && edx s< (arg1[0x5e] - arg1[0x5d]) s>> 2)
    result = *(arg1[0x5d] + (edx << 2))
    
    if (result != 0)
        if (*(result + 0x18) != 1)
            *(result + 0x18) -= 1
            arg1[0x495] -= 4
            return sub_5c0610(arg1) != 0
        
        if (sub_5d5e80(&arg1[0x5b], edx).b != 0)
            arg1[0x495] -= 4
            return sub_5c0610(arg1) != 0

result.b = 0
return result
