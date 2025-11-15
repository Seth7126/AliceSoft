// 函数: sub_524d30
// 地址: 0x524d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_24
uint32_t var_c = __security_cookie ^ &var_24
int32_t esi
int32_t var_2c = esi
int32_t* lpFileName_3 = arg2
int32_t edi
int32_t var_30 = edi
uint32_t var_10
uint32_t eax_1

if (*(arg1 + 0x38) != 0)
    char* lpFileName = sub_524610(arg1, &var_24, lpFileName_3)
    
    if (*(lpFileName + 0x14) u>= 0x10)
        lpFileName = *lpFileName
    
    uint32_t eax_2 = GetFileAttributesA(lpFileName)
    uint32_t ebx_1
    
    if (eax_2 != 0xffffffff)
        ebx_1.b = not.b((eax_2 u>> 4).b)
        ebx_1.b &= 1
    else
        ebx_1.b = 0
    
    if (var_10 u>= 0x10)
        sub_403160(var_24, var_10 + 1, 1)
    
    if (ebx_1.b != 0)
    label_524da0:
        eax_1.b = 1
        @__security_check_cookie@4(var_c ^ &var_24)
        return eax_1
    
    char* lpFileName_1 = sub_5247b0(arg1, &var_24, lpFileName_3)
    
    if (*(lpFileName_1 + 0x14) u>= 0x10)
        lpFileName_1 = *lpFileName_1
    
    uint32_t eax_4 = GetFileAttributesA(lpFileName_1)
    uint32_t ebx_2
    
    if (eax_4 != 0xffffffff)
        ebx_2.b = not.b((eax_4 u>> 4).b)
        ebx_2.b &= 1
    else
        ebx_2.b = 0
    
    if (var_10 u>= 0x10)
        sub_403160(var_24, var_10 + 1, 1)
    
    if (ebx_2.b != 0)
        goto label_524da0
    
    int32_t* lpFileName_2
    
    if (lpFileName_3[5] u< 0x10)
        lpFileName_2 = lpFileName_3
    else
        lpFileName_2 = *lpFileName_3
    
    eax_1 = GetFileAttributesA(lpFileName_2)
    
    if (eax_1 != 0xffffffff)
        eax_1.b = not.b((eax_1 u>> 4).b)
        eax_1.b &= 1
        
        if (eax_1.b != 0)
            goto label_524da0

int32_t* ecx_3 = *(arg1 + 0x34)

if (ecx_3 != 0)
    eax_1 = (*(*ecx_3 + 0x10))(4)
    
    if (eax_1 != 0)
        if (lpFileName_3[5] u>= 0x10)
            lpFileName_3 = *lpFileName_3
        
        bool eax_9 = (*(*eax_1 + 0x10))(lpFileName_3) != 0
        int32_t __saved_ebx
        @__security_check_cookie@4(var_10 ^ &__saved_ebx)
        return eax_9

eax_1.b = 0
@__security_check_cookie@4(var_c ^ &var_24)
return eax_1
