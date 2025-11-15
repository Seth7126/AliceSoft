// 函数: sub_65e160
// 地址: 0x65e160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1
int32_t ecx = arg7 - *arg6
void* esi = *(edi + 0x1a4)
void* eax = *(edi + 0x1b8)

if (ecx u> *(esi + 0x10))
    ecx = *(esi + 0x10)

arg1 = nullptr
(*(eax + 4))(edi, arg2, arg3, arg4, *(esi + 0xc), &arg1, ecx)
(*(*(edi + 0x1c0) + 4))(edi, *(esi + 0xc), arg5 + (*arg6 << 2), arg1)
void* result = arg1
*arg6 += result
return result
