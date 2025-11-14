// 函数: sub_570170
// 地址: 0x570170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = *arg3
(*(**arg2 + 8))()
(*(*esi + 8))()

if (not(fconvert.s(arg4) <= fconvert.s(arg5)))
    int32_t ecx_2 = *arg2
    *arg2 = *arg3
    *arg3 = ecx_2

int32_t* ebp = arg10
int32_t* esi_1 = *arg2
(*(**ebp + 8))()
int32_t result = (*(*esi_1 + 8))()

if (not(fconvert.s(arg6) <= fconvert.s(arg7)))
    int32_t* ecx_5 = *ebp
    *ebp = *arg2
    *arg2 = ecx_5
    int32_t* esi_2 = *arg3
    (*(*ecx_5 + 8))()
    result = (*(*esi_2 + 8))()
    
    if (not(fconvert.s(arg8) <= fconvert.s(arg9)))
        int32_t ecx_7 = *arg2
        result = *arg3
        *arg2 = result
        *arg3 = ecx_7

return result
