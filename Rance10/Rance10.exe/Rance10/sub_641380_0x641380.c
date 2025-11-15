// 函数: sub_641380
// 地址: 0x641380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** eax = arg1
int32_t ecx = eax[4]

if (ecx == 1)
    if (eax[5] u>= 0x10)
        eax = *eax
    
    return zx.d(*eax)

if (ecx != 2)
    return 0

int32_t ecx_1 = eax[5]
char* edx

if (ecx_1 u< 0x10)
    edx = eax
else
    edx = *eax

if (ecx_1 u>= 0x10)
    eax = *eax

return zx.d(*(eax + 1)) | zx.d(*edx) << 8
