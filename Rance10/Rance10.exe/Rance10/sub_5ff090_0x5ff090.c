// 函数: sub_5ff090
// 地址: 0x5ff090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg2
void* eax = sub_6228d0(*(arg1 + 0x24), ebp)

if (eax != 0)
    arg2 = *(arg1 + 0x28)
    sub_404370(eax + 0x2c, &arg2)

if (arg4 != 0xffffffff)
    sub_621d30(*(arg1 + 0x24), arg4)

if ((*(*(arg1 + 0x20) + 0xc))(ebp, arg3) != 0 && sub_405df0(arg1 + 0xc, *(arg1 + 0x14) + 0xc) != 0)
    sub_5ff8c0(arg1, (*(*(arg1 + 0x20) + 0x10))(ebp, arg3, arg4) - 1)
    int32_t result
    result.b = 1
    return result

return 0
