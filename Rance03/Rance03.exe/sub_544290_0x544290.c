// 函数: sub_544290
// 地址: 0x544290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg1[1]
int32_t edx_2 = (eax - *arg1) s>> 3

if (edx_2 u> arg2)
    int32_t eax_1 = eax + ((arg2 - edx_2) << 3)
    arg1[1] = eax_1
    return eax_1

if (edx_2 u< arg2)
    sub_544450(arg1, arg2 - edx_2)
    int32_t* ecx = arg1[1]
    int32_t var_c_2 = arg2
    sub_52ae40(ecx, arg2 - ((ecx - *arg1) s>> 3))
    int32_t ecx_1 = arg1[1]
    eax = ecx_1 + ((arg2 - ((ecx_1 - *arg1) s>> 3)) << 3)
    arg1[1] = eax

return eax
