// 函数: sub_6cdab0
// 地址: 0x6cdab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = arg1

if (*esi == 0)
    if (*(esi + 4) == 0)
        char eax_1
        eax_1, arg1 = sub_6cd2e0(*(esi + 0x14))
        
        if (eax_1 == 0)
            *(esi + 4) = 1
    
    *esi = 1

int32_t eax_2 = *(esi + 4)

if (eax_2 == 0)
    int32_t* var_c_1 = arg5
    return sub_6cd900(esi, arg1, arg2, arg3, arg4)

if (eax_2 == 1)
    int32_t* var_c = arg5
    return sub_6cd960(esi, arg1, arg2, arg3, arg4)

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
