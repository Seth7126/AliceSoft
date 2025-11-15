// 函数: sub_6a55e0
// 地址: 0x6a55e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char edx = 0x3f
uint32_t eax_1 = arg2 u>> 0x18
char ecx = 0x3f

if (eax_1 - 0x20 u<= 0x5e)
    ecx = eax_1.b

*arg1 = 0x27
arg1[1] = ecx
uint32_t eax_4 = zx.d((arg2 u>> 0x10).b)
arg1[5] = 0x27

if (eax_4 - 0x20 u<= 0x5e)
    edx = eax_4.b

uint32_t eax_7 = zx.d((arg2 u>> 8).b)
arg1[2] = edx
char edx_1 = 0x3f

if (eax_7 - 0x20 u<= 0x5e)
    edx_1 = eax_7.b

uint32_t result = zx.d(arg2.b)
arg1[3] = edx_1
char ecx_4 = 0x3f

if (result - 0x20 u<= 0x5e)
    ecx_4 = result.b

arg1[4] = ecx_4
return result
