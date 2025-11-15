// 函数: sub_653650
// 地址: 0x653650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4 = ecx
void* esi = arg1
int32_t i = 0
void* edx = *(esi + 0x54)
arg1 = edx

if (*(esi + 0x4c) s<= 0)
    return 

int32_t* ebx_1 = *(esi + 0x190) + 0x34
int32_t* edi_1 = arg2
int32_t* eax = arg4 - edi_1
arg4 = eax

do
    ebx_1[-0xa](esi, edx, *edi_1 + (arg3 << 2), *(eax + edi_1) + ((*ebx_1 * arg5) << 2))
    ebx_1 = &ebx_1[1]
    eax = arg4
    edi_1 = &edi_1[1]
    i += 1
    edx = arg1 + 0x58
    arg1 = edx
while (i s< *(esi + 0x4c))
