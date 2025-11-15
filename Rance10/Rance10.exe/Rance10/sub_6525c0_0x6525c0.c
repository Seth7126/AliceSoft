// 函数: sub_6525c0
// 地址: 0x6525c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 1

if (arg2 s> 0)
    edi = arg2

int32_t eax
int32_t esi_1

if (edi s> 0x64)
    esi_1 = 0
else if (edi s>= 0x32)
    esi_1 = (0x64 - edi) * 2
else
    eax = divs.dp.d(0x1388, edi)
    esi_1 = eax

int32_t* var_10 = arg1
return sub_652500(sub_652500(eax, 0, arg1, 0x76ddc0, esi_1), 1, arg1, 0x76df98, esi_1)
