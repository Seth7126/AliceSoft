// 函数: sub_5f2c80
// 地址: 0x5f2c80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg1
void** eax = sub_5f3040(arg1, arg3)

if (eax != *edi && sub_5f3ed0(&arg3[1], &eax[5]) == 0)
    if (sub_5f3f70(&arg3[1], &eax[5]) != 0)
        *arg2 = eax
        return arg2
    
    if (sub_40d2d0(&arg3[8], &eax[0xc]) == 0)
        sub_40d320(&arg3[8], &eax[0xc])
        *arg2 = eax
        return arg2

*arg2 = *edi
return arg2
