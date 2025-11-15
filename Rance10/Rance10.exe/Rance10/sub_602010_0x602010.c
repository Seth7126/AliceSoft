// 函数: sub_602010
// 地址: 0x602010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = *arg1

if (sub_601570(edx) == 0)
    if (sub_601670(edx) == 0)
        if (sub_6015f0(edx) != 0)
            sub_405d30(arg2, arg1[2])
        else if (edx != 0)
            return 0
    else
        sub_405d30(arg2, arg1[2])
        sub_405d30(arg2, arg1[3])
else
    sub_405d30(arg2, arg1[1])

if (sub_6015f0(*arg1) != 0)
    void* ecx_3 = data_7fcbb0
    
    if (ecx_3 != 0)
        sub_621d30(ecx_3, arg1[2])

return 1
