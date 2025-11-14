// 函数: sub_5ce950
// 地址: 0x5ce950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
int32_t* result = arg1[0x8d]
int32_t edx = *result

if (edx == 0xffffffff)
    return result

if (edx s>= 0)
    result = (arg1[0x5e] - arg1[0x5d]) s>> 2
    
    if (edx s< result)
        result = *(arg1[0x5d] + (edx << 2))
        
        if (result != 0)
            result[6] += 1
            return result

int32_t var_4_1 = edx
return sub_5c24e0(result, edx, arg1, arg1, 0x6e9f4c)
