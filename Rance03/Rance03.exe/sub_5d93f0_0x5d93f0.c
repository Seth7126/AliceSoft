// 函数: sub_5d93f0
// 地址: 0x5d93f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char result = sub_5de860(arg1, arg3)

if (result == 0)
    return result

if (arg3 s< 0)
    return 1

int32_t var_10 = arg3
void* eax = sub_5bf170(arg2 + 0x48)

if (eax != 0)
    int32_t* eax_2 = eax + 8
    void* ecx_3 = eax_2[4]
    
    if (*(eax + 0x1c) u>= 0x10)
        eax_2 = *eax_2
    
    char eax_1
    
    if (ecx_3 != 0xffffffff)
        eax_1 = sub_5de800(arg1, eax_2, ecx_3 + 1)
    
    if ((ecx_3 == 0xffffffff || eax_1 != 0) && sub_5de860(arg1, arg3 - *(eax + 4)) != 0)
        return sub_5de860(arg1, *(eax + 0x38)) != 0
else
    sub_64b530(0x6ea950)

return 0
