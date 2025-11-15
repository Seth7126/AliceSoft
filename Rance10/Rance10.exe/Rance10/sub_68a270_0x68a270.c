// 函数: sub_68a270
// 地址: 0x68a270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x30)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 0x30) = 0

int32_t eax_3

switch (arg5)
    case 1
        eax_3 = 2
    case 2
        eax_3 = 4
    case 3
        eax_3 = 8
    case 4
        eax_3 = 0x10
    default
        eax_3 = 0

sub_6854a0(*(arg1 + 8) + 0x2c, arg4, eax_3, arg6, arg7)
int32_t ecx_3 = *arg6
int32_t result
result.b = ecx_3 != 1
*(arg1 + 0x40) = result.b

if (result.b != 0)
    result = sub_68a330(arg1, arg2, arg3, arg4, ecx_3, *arg7)
    *(arg1 + 0x30) = result
    
    if (result == 0)
        result.b = 0
        return result

result.b = 1
return result
