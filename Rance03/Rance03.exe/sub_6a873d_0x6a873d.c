// 函数: sub_6a873d
// 地址: 0x6a873d
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = arg3
int32_t var_c = arg3
int32_t* edi = arg4

if (*edi == 0x80000003)
    return 

void* ebx_1 = arg8

if (__getptd()[0x20] != 0)
    int32_t eax_1 = EncodePointer(nullptr)
    
    if (__getptd()[0x20] == eax_1 || *edi == 0xe0434f4d || *edi == 0xe0434352)
        goto label_6a87ad
    
    void** var_1c_1 = arg11
    
    if (sub_69e10f(edi, arg5, arg6, arg7, ebx_1, arg10) == 0)
        goto label_6a87ad
    
    return 

label_6a87ad:

if (*(ebx_1 + 0xc) == 0)
    _inconsistency()
    noreturn

arg1 = sub_69e1e6(ebx_1, arg10, arg9, &var_c, &var_8)
int32_t ecx = var_c
int32_t edx = var_8

if (ecx u>= edx)
    return 

int32_t* esi_2 = arg1 + 0xc
arg1 = arg9

do
    if (arg1 s>= esi_2[-3] && arg1 s<= esi_2[-2])
        int32_t eax_4 = *esi_2 << 4
        
        if (*(esi_2[1] + eax_4 - 0xc) != 0)
            edx = var_8
            ebx_1 = arg8
        
        if (*(esi_2[1] + eax_4 - 0xc) == 0 || *(*(esi_2[1] + eax_4 - 0xc) + 8) == 0)
            char* eax_5 = eax_4 + esi_2[1] - 0x10
            
            if ((*eax_5 & 0x40) == 0)
                int32_t var_1c_3 = 1
                CatchIt(arg4, arg5, arg6, arg7, ebx_1, eax_5, nullptr, &esi_2[-3], arg10, arg11)
                edx = var_8
                ecx = var_c
        
        arg1 = arg9
    
    ecx += 1
    esi_2 = &esi_2[5]
    var_c = ecx
while (ecx u< edx)
