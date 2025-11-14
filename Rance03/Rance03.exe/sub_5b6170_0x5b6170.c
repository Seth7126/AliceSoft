// 函数: sub_5b6170
// 地址: 0x5b6170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg1[1]
int32_t edx_2 = (result - *arg1) s>> 4

if (edx_2 u> arg2)
    arg1[1] = ((arg2 - edx_2) << 4) + result
    return result

if (edx_2 u< arg2)
    sub_59de80(arg1, arg2 - edx_2)
    void* ecx = arg1[1]
    int32_t var_c_2 = arg2
    sub_5b61e0(ecx, arg2 - ((ecx - *arg1) s>> 4))
    result = (arg1[1] - *arg1) s>> 4
    arg1[1] += (arg2 - result) << 4

return result
