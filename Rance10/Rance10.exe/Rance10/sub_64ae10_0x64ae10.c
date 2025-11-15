// 函数: sub_64ae10
// 地址: 0x64ae10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = arg2[6]
char* result = *edx
*result = arg1
*edx += 1
int32_t temp0 = edx[1]
edx[1] -= 1

if (temp0 == 1)
    result = edx[3](arg2)
    
    if (result.b == 0)
        *(*arg2 + 0x14) = 0x19
        return (**arg2)(arg2)

return result
