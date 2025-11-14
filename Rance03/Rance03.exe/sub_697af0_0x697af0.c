// 函数: sub_697af0
// 地址: 0x697af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi = arg1

if (*esi == 0)
    if (*(esi + 4) == 0)
        char eax_1
        eax_1, arg1 = sub_697590(*(esi + 0x14))
        
        if (eax_1 == 0)
            *(esi + 4) = 1
    
    *esi = 1

int32_t eax_2 = *(esi + 4)

if (eax_2 == 0)
    int32_t* __saved_edi_1 = arg5
    return sub_697950(esi, arg1, arg2, arg3, arg4)

if (eax_2 == 1)
    int32_t* __saved_edi = arg5
    return sub_6979b0(esi, arg1, arg2, arg3, arg4)

if (eax_2 != 2)
    int32_t eax_5
    eax_5.b = 0
    return eax_5

uint32_t eax_6 = GetSystemMetrics(SM_CXSCREEN)
int32_t eax_7 = GetSystemMetrics(SM_CYSCREEN)
*arg4 = eax_6
*arg5 = eax_7
eax_7.b = 1
return eax_7
