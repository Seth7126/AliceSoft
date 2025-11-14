// 函数: sub_688ca0
// 地址: 0x688ca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
uint32_t ebx = zx.d(arg3.w)
uint32_t esi_1 = arg3 u>> 0x10

if (ebx s> 0 && esi_1 s> 0)
    *(arg1 + 0x30)
    *(arg1 + 0x84) = divs.dp.d(sx.q(esi_1), *(arg1 + 0x30))
    sub_689120(arg1 + 0x70)
    *(arg1 + 0x64) = ebx
    sub_689120(arg1 + 0x50)
    
    if (sub_601bb0(arg1 + 0x90, arg2, ebx, esi_1) == 0)
        *(arg1 + 0x108) = 1
        return 0
    
    sub_688e10(arg1)

return 0
