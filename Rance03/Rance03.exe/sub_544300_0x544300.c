// 函数: sub_544300
// 地址: 0x544300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg1[1]
int32_t edx_2 = (result - *arg1) s>> 6

if (edx_2 u> arg2)
    arg1[1] = ((arg2 - edx_2) << 6) + result
    return result

if (edx_2 u< arg2)
    sub_5444d0(arg1, arg2 - edx_2)
    int32_t* ecx = arg1[1]
    int32_t var_c_2 = arg2
    sub_544620(ecx, arg2 - ((ecx - *arg1) s>> 6))
    result = (arg1[1] - *arg1) s>> 6
    arg1[1] += (arg2 - result) << 6

return result
