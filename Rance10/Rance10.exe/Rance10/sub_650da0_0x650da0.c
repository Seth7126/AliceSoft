// 函数: sub_650da0
// 地址: 0x650da0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char result = arg2
int32_t* edx = arg1[6]
**edx = result
*edx += 1
int32_t temp0 = edx[1]
edx[1] -= 1

if (temp0 == 1)
    result = edx[3](arg1)
    
    if (result == 0)
        *(*arg1 + 0x14) = 0x19
        return (**arg1)(arg1)

return result
