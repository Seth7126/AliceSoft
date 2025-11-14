// 函数: sub_628690
// 地址: 0x628690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

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

uint32_t eax_8 = zx.d((arg2 u>> 8).b)
arg1[2] = edx
char edx_1 = 0x3f

if (eax_8 - 0x20 u<= 0x5e)
    edx_1 = eax_8.b

uint32_t result = zx.d(arg2.b)
arg1[3] = edx_1
char ecx_4 = 0x3f

if (result - 0x20 u<= 0x5e)
    ecx_4 = result.b

arg1[4] = ecx_4
return result
