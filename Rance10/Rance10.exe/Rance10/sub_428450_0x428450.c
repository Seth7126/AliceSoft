// 函数: sub_428450
// 地址: 0x428450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1

if ((*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2 s<= arg3)
    sub_403360(arg2, 0x75cd51)
    return arg2

int32_t edi = *(arg1 + 0x34)

if ((*(arg1 + 0x38) - edi) s>> 2 u<= arg3)
    sub_6d0947("invalid vector<T> subscript")
    noreturn

char* esi = arg2
sub_42ac40(*(edi + (arg3 << 2)), esi, arg1 + 0x40)
return esi
