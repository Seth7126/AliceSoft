// 函数: sub_415cc0
// 地址: 0x415cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
int32_t eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_415d50(arg1)
    
    struct dpanalysis::CCommentArea::VTable** ecx_5 = arg1[1]
    
    if (ecx_5 != 0)
        *ecx_5 = &dpanalysis::CCommentArea::`vftable'
        ecx_5[1] = *(arg2 + 4)
        ecx_5[2] = *(arg2 + 8)
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_415d50(arg1)
    
    int32_t edx_3 = *arg1 + (arg2 - eax) s/ 0xc * 0xc
    struct dpanalysis::CCommentArea::VTable** ecx_3 = arg1[1]
    
    if (ecx_3 != 0)
        *ecx_3 = &dpanalysis::CCommentArea::`vftable'
        ecx_3[1] = *(edx_3 + 4)
        ecx_3[2] = *(edx_3 + 8)
        arg1[1] += 0xc
        return 

arg1[1] += 0xc
