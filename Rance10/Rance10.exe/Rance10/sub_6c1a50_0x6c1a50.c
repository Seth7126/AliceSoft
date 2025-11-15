// 函数: sub_6c1a50
// 地址: 0x6c1a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *arg3

if (ecx == 0)
    return 0xffffff7f

int32_t eax = arg3[0xb1]

if (eax != 0 && eax(ecx, arg4, arg5, 0) != 0xffffffff)
    arg3[2] = arg4
    arg3[3] = arg5
    sub_6b80a0(&arg3[6])
    return 0

return 0xffffff80
