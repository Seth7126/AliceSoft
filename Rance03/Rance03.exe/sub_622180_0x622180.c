// 函数: sub_622180
// 地址: 0x622180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result_1 = arg3[1]
void* result = result_1

if (result_1 u> arg4)
    result = arg4

if (result == 0)
    return 0

int32_t* var_14 = *arg3
arg3[1] = result_1 - result
sub_69d850(arg2, var_14, result)
int32_t eax_2 = *(arg3[7] + 0x18)

if (eax_2 == 1)
    void* eax_3 = sub_620fc0(eax_2, arg2, arg3[0xc], result)
    *arg3 += result
    arg3[2] += result
    arg3[0xc] = eax_3
    return result

if (eax_2 == 2)
    if (arg2 == 0)
        *arg3 += result
        arg3[2] += result
        arg3[0xc] = 0
        return result
    
    arg3[0xc] = sub_621230(eax_2, arg2, arg3[0xc], result)

*arg3 += result
arg3[2] += result
return result
