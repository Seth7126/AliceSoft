// 函数: sub_49e0f0
// 地址: 0x49e0f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0
int32_t var_4
int32_t* var_10 = &var_4
char eax = sub_6cdab0(arg1[0x91], arg1, arg1[0x18], arg1[0x19], &var_8)

if (eax == 0)
    return eax

arg1[0x1b] = var_8
arg1[0x1c] = var_4
arg1[0x4e] = arg1[0x1b]
arg1[0x4f] = arg1[0x1c]

if (arg1[0x44] != 0)
    (*(*arg1[0x44] + 0x14))(arg1[0x4e], arg1[0x4f])

int32_t eax_4
eax_4.b = 1
return eax_4
