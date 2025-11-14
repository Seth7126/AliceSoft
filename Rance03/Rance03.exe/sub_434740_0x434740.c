// 函数: sub_434740
// 地址: 0x434740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = *(arg1 + 4)
int32_t result

if (edi == 0)
    result.b = 0
    return result

if (arg4 s>= 0)
    int32_t eax
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x66666667, *(edi + 0x30) - *(edi + 0x2c))
    int32_t edx_2 = edx_1 s>> 5
    
    if ((edx_2 u>> 0x1f) + edx_2 s> arg4)
        int32_t var_c = arg3
        return sub_43a470(arg4 * 0x50 + *(edi + 0x2c), arg2)

result.b = 0
return result
