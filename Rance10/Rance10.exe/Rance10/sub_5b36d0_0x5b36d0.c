// 函数: sub_5b36d0
// 地址: 0x5b36d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t* result

if (*(arg1 + 4) s< 3)
    *arg3 = 0
else
    char* esi_1 = *(arg2 + 4)
    
    if (&esi_1[4] u> *(arg2 + 8))
        result.b = 0
        return result
    
    *arg3 = ((zx.d(esi_1[3]) << 8 | zx.d(esi_1[2])) << 8 | zx.d(esi_1[1])) << 8 | zx.d(*esi_1)
    *(arg2 + 4) += 4
    sub_5864d0(arg6 + 0x28, *arg3 + arg4 + arg5)
    int32_t eax_6 = arg4 + arg5
    
    if (sub_5b3580(eax_6, arg6 + 0x28, arg2, eax_6, *arg3).b == 0)
        result.b = 0
        return result

result.b = 1
return result
