// 函数: sub_437bc0
// 地址: 0x437bc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[1]
int32_t edx_2 = (eax - *arg1) s>> 1

if (edx_2 u> arg2)
    int32_t eax_1 = eax + ((arg2 - edx_2) << 1)
    arg1[1] = eax_1
    return eax_1

if (edx_2 u< arg2)
    sub_437c20(arg1, arg2 - edx_2)
    uint32_t (* edx_3)[0x4] = arg1[1]
    _memset(edx_3, 0, (arg2 - ((edx_3 - *arg1) s>> 1)) * 2)
    eax = (arg1[1] - *arg1) s>> 1
    arg1[1] += (arg2 - eax) * 2

return eax
