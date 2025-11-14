// 函数: sub_5cced0
// 地址: 0x5cced0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* eax = sub_5c2b90(arg1, 0x6ea810, 0)

if (eax != 0 && arg3 s< (*(*eax + 0x2c))())
    int32_t esi = *eax
    int32_t eax_5 = (*(esi + 0x18))((*(esi + 0x30))(arg3))
    int32_t eax_6
    int32_t edx
    edx:eax_6 = muls.dp.d(0x38e38e39, arg1[0x28] - arg1[0x27])
    int32_t edx_1 = edx s>> 4
    
    if (eax_5 u< (edx_1 u>> 0x1f) + edx_1)
        void* ecx_8 = arg1[0x27] + eax_5 * 0x48
        
        if (ecx_8 != 0)
            *(arg2 + 0x14) = 0xf
            *(arg2 + 0x10) = 0
            *arg2 = 0
            sub_401ff0(arg2, ecx_8 + 8, 0, 0xffffffff)
            return arg2
    
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    return arg2

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
return arg2
