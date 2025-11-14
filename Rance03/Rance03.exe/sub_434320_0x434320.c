// 函数: sub_434320
// 地址: 0x434320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t* eax = *(arg1 + 0x34)
void* eax_1 = sub_434b80(arg1 + 0xc, arg4)

if (eax_1 != 0 && sub_437800(eax_1, eax, arg5, arg6) != 0)
    return sub_434620(arg3, *(arg1 + 0x34), arg4, arg5, arg6)

if (*(arg1 + 0x34) != 0)
    void* eax_5 = sub_434b80(arg1 + 0xc, arg4)
    char* edx_1
    
    if (eax_5 != 0)
        edx_1 = sub_4377b0(eax_5, arg5)
    else
        edx_1 = &data_74f554
    
    if (*(edx_1 + 0x14) u>= 0x10)
        edx_1 = *edx_1
    
    void* esi_1 = (*(**(arg1 + 0x34) + 0x18))(edx_1)
    
    if (esi_1 != 0 && (*(*esi_1 + 0x20))(arg6).b != 0 && (*(*esi_1 + 0x1c))(arg6) == 0xb)
        int32_t var_18_8 = arg6
        sub_4348c3(esi_1)
        *arg3 = fconvert.s(arg2)
        int32_t* eax_11
        eax_11.b = 1
        return eax_11

eax_1.b = 0
return eax_1
