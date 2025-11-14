// 函数: sub_60a430
// 地址: 0x60a430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx_6 = arg1[2]
int32_t esi = arg1[1]
int32_t result = (edx_6 - esi) s>> 3

if (result u>= arg2)
    return result

int32_t esi_2 = (esi - *arg1) s>> 3

if (0x1fffffff - esi_2 u< arg2)
    sub_69a551("vector<T> too long")
    noreturn

void* esi_3 = esi_2 + arg2
int32_t edx_1 = (edx_6 - *arg1) s>> 3
uint32_t eax_4 = edx_1 u>> 1

if (0x1fffffff - eax_4 u>= edx_1)
    int32_t edx_4 = edx_1 + eax_4
    
    if (edx_4 u< esi_3)
        edx_4 = esi_3
    
    return sub_60a500(arg1, edx_4) __tailcall

struct graphengined3d11::CBlendState::VTable** edx_2 = nullptr

if (0 u< esi_3)
    edx_2 = esi_3

return sub_60a500(arg1, edx_2) __tailcall
