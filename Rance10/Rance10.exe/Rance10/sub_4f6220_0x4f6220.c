// 函数: sub_4f6220
// 地址: 0x4f6220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(data_7fcb4c + 0x18)
void* esi = data_7fcba4

if (ecx != 0)
    sub_452290(ecx + 8)

void* edi = *(esi + 0x1b4)
int32_t var_4 = 1
sub_4f4f70(edi + 0x30, arg1, arg2, arg3, arg4, arg5)
char* eax = *(edi + 0x18)

if (eax != *(edi + 0x1c))
    int32_t var_14_1 = 0.d
    sub_5036d0(edi + 0xc, *(edi + 0x10), eax, *(edi + 0x1c))
    *(edi + 0x1c) = *(edi + 0x18)

sub_4f4f70(esi + 0x124, arg1, arg2, arg3, arg4, arg5)
char* result = *(esi + 0x10c)

if (result != *(esi + 0x110))
    int32_t __saved_edi_1 = 0
    sub_5036d0(esi + 0x100, *(esi + 0x104), result, *(esi + 0x110))
    result = *(esi + 0x10c)
    *(esi + 0x110) = result

return result
