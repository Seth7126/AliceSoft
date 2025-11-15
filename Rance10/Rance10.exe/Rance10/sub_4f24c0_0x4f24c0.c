// 函数: sub_4f24c0
// 地址: 0x4f24c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg2
char result = sub_4f2400(arg1, esi)

if (result == 0)
    return result

void* ecx = *(arg1 + 0xc)
void* arg_4
void* ebx_1 = arg_4
int32_t eax_2 = (*(ecx + 0xc4) - *(ecx + 0xc0)) s>> 2
arg2 = esi

if (eax_2 s<= ebx_1)
    return sub_504200(ecx, esi)

sub_504260(ecx, esi)
void* edx_1 = nullptr
void** var_10_2 = &arg2

if (ebx_1 s> 0)
    edx_1 = ebx_1

return sub_404420(ecx + 0xc0, &arg_4, *(ecx + 0xc0) + (edx_1 << 2), &arg2)
