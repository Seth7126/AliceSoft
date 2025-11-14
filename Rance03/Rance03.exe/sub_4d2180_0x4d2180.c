// 函数: sub_4d2180
// 地址: 0x4d2180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
void* eax = sub_510680(*(arg1 + 0x34), arg3)
sub_4931c0(eax + 0x38, arg2)
int32_t result = *(eax + 0x70)
void* edi = *(result + 0xf0)

if (edi != 0)
    for (void** i = *(edi + 0x1c); i != *(edi + 0x20); i = &i[1])
        result = sub_48e260(*i, arg2)

return result
