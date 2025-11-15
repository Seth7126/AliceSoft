// 函数: sub_4286e0
// 地址: 0x4286e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1

if ((*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2 s<= arg3)
    char* esi = arg2
    *(esi + 0x14) = 0xf
    *(esi + 0x10) = 0
    *esi = 0
    sub_403590(esi, &data_7fcc10, 0, 0xffffffff)
    return esi

int32_t edi = *(arg1 + 0x34)

if ((*(arg1 + 0x38) - edi) s>> 2 u<= arg3)
    sub_6d0947("invalid vector<T> subscript")
    noreturn

sub_42ae50(*(edi + (arg3 << 2)), arg2, arg1 + 0x40)
return arg2
