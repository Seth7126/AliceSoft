// 函数: sub_692cf0
// 地址: 0x692cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg7
ebx:1.b = arg2
int32_t esi

if (ebx.b != 0 || arg8 != ebx.b)
    esi = 1
else
    esi = 0

int32_t edx_1 = arg5 & 0xffffff
int32_t edx_2 = neg.d(edx_1)
int32_t eax_3 = neg.d((arg4 & 0xffffff) - 0xffffff)
int32_t ecx_3 = neg.d((arg4 & 0xff000000) + 0x1000000)
int32_t eax_6 = 0

if (arg6 != 0)
    eax_6 = 0x80

int32_t eax_7 = 0

if (ebx:1.b != 0)
    eax_7 = 8

int32_t ecx_6 = 0

if (ebx.b != 0)
    ecx_6 = 0x40

return (sbb.d(edx_2, edx_2, edx_1 != 0) & 0x10)
    | (sbb.d(eax_3, eax_3, (arg4 & 0xffffff) != 0xffffff) & 0x20)
    | (sbb.d(ecx_3, ecx_3, (arg4 & 0xff000000) != 0xff000000) & 4) | eax_6 | eax_7 | ecx_6
    | esi << 8 | arg3
