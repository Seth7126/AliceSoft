// 函数: sub_67d840
// 地址: 0x67d840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg1[1]
int32_t edx_2 = (eax - *arg1) s>> 2

if (edx_2 u> arg2)
    int32_t eax_1 = eax + ((arg2 - edx_2) << 2)
    arg1[1] = eax_1
    return eax_1

if (edx_2 u< arg2)
    sub_5bcdf0(arg1, arg2 - edx_2)
    int32_t* ecx = arg1[1]
    int32_t var_c_2 = arg2
    sub_5e1060(ecx, arg2 - ((ecx - *arg1) s>> 2))
    int32_t ecx_1 = arg1[1]
    eax = ecx_1 + ((arg2 - ((ecx_1 - *arg1) s>> 2)) << 2)
    arg1[1] = eax

return eax
