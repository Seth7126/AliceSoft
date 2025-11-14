// 函数: sub_47d750
// 地址: 0x47d750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
int32_t esi = *arg1
int32_t eax_1 = ecx - esi

if (eax_1 u> arg2)
    int32_t eax_2 = esi + arg2
    arg1[1] = eax_2
    return eax_2

if (eax_1 u< arg2)
    char* ebp_1 = arg3
    
    if (ebp_1 u>= ecx || esi u> ebp_1)
        sub_403590(arg1, esi - ecx + arg2)
    else
        sub_403590(arg1, esi - ecx + arg2)
        ebp_1 = &ebp_1[*arg1 - esi]
    
    char* ecx_3 = arg1[1]
    _memset(ecx_3, *ebp_1, *arg1 - ecx_3 + arg2)
    eax_1 = *arg1 + arg2
    arg1[1] = eax_1

return eax_1
