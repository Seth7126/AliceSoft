// 函数: sub_6fc4a2
// 地址: 0x6fc4a2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t var_18 = 0x100
*arg1 = 0
arg1[1] = 0
arg1[5] = arg2
arg1[2] = 0x3f
arg1[3] = sub_6e8787()
int32_t* eax_2 = sub_6e8787()
int32_t* var_8_1 = eax_2

if (eax_2 == 0)
    eax_2 = nullptr
else
    int32_t* ecx_1 = eax_2
    int32_t i_1 = 0x40
    int32_t i
    
    do
        *ecx_1 = 0
        ecx_1 = &ecx_1[2]
        ecx_1[-1] = 0
        i = i_1
        i_1 -= 1
    while (i != 1)

uint32_t (* var_20)[0x4] = arg1[3]
arg1[4] = eax_2
_memset(var_20, 0, 0x100)
return arg1
