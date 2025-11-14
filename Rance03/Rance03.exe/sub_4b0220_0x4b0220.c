// 函数: sub_4b0220
// 地址: 0x4b0220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0xb8) - *(arg1 + 0xb4))
int32_t edx_3 = edx_2 s>> 2
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> arg2 && arg2 s>= 0)
    char* ecx_2 = *(arg1 + 0xb4) + arg2 * 0x18
    result = arg3
    
    if (ecx_2 != result)
        result = sub_401ff0(ecx_2, result, 0, 0xffffffff)
    
    int32_t* ecx_3 = *(arg1 + 0xc8)
    
    if (ecx_3 != 0)
        return (**ecx_3)()

return result
