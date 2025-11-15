// 函数: sub_65e320
// 地址: 0x65e320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
var_4:3.b = arg2
int32_t (** eax_2)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))(arg1, 1, 0x1c)
int32_t (** ebx)(int32_t* arg1, int32_t arg2) = eax_2
*(arg1 + 0x1a4) = ebx
*ebx = sub_65e060
ebx[2] = 0
ebx[3] = 0

if (*(arg1 + 0x4a) != 0)
    int32_t ebp_1 = *(arg1 + 0x11c)
    ebx[4] = ebp_1
    
    if (var_4:3.b != 0)
        int32_t ecx_2 = *(arg1 + 0x60) - 1 + ebp_1
        int32_t eax_8 = (*(*(arg1 + 4) + 0x10))(arg1, 1, 0, *(arg1 + 0x64) * *(arg1 + 0x5c), 
            ecx_2 - mods.dp.d(sx.q(ecx_2), ebp_1), ebp_1)
        ebx[2] = eax_8
        return eax_8
    
    eax_2 = (*(*(arg1 + 4) + 8))(arg1, 1, *(arg1 + 0x64) * *(arg1 + 0x5c), ebp_1)
    ebx[3] = eax_2

return eax_2
