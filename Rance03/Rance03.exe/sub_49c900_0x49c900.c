// 函数: sub_49c900
// 地址: 0x49c900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bbf80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *arg1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 == *(ecx + 0x90))
    result.b = *(ecx + 0x254)

if (arg2 != *(ecx + 0x90) || result.b == 0)
    void* eax_5
    eax_5.b = *(*(ecx + 0x264) + 0x8d)
    
    if (*(arg2 + 0x8d) != eax_5.b)
        *(arg2 + 0x8d) = eax_5.b
        *(arg2 + 0x70) = 1
    
    void* ecx_1 = *(*arg1 + 0x264)
    void* eax_7 = *(ecx_1 + 0xd8)
    
    if (eax_7 == 0)
        int32_t eax_10 = *(*(*(ecx_1 + 0x50) + 0x58) + 0x90)
        
        if (eax_10 s<= 0)
            eax_7 = nullptr
        else
            int32_t var_78_1 = eax_10
            void* eax_11 = sub_4a56f0(*(ecx_1 + 0x54))
            
            if (eax_11 == 0)
                eax_7 = nullptr
            else
                eax_7 = sub_4a2ab0(eax_11)
                
                if (eax_7 == 0)
                    eax_7 = nullptr
    
    sub_4a2af0(arg2, eax_7)
    int32_t eax_12 = sub_4a2720(*(*arg1 + 0x264))
    int32_t var_58 = eax_12
    int32_t* ecx_7 = &var_58
    int32_t var_60 = 0xff
    int32_t var_5c = 0
    
    if (eax_12 s>= 0xff)
        ecx_7 = &var_60
    
    int32_t* eax_13 = &var_5c
    
    if (*ecx_7 s> 0)
        eax_13 = ecx_7
    
    int32_t eax_14 = *eax_13
    
    if (*(arg2 + 0x90) != eax_14)
        *(arg2 + 0x90) = eax_14
        *(arg2 + 0x70) = 1
    
    int32_t eax_17 = *(*(*arg1 + 0x264) + 0xf0)
    
    if (*(arg2 + 0xf0) != eax_17)
        *(arg2 + 0xf0) = eax_17
        *(arg2 + 0x70) = 1
    
    void* eax_19
    eax_19.b = *(*(*arg1 + 0x264) + 0xf4)
    
    if (*(arg2 + 0xf4) != eax_19.b)
        *(arg2 + 0xf4) = eax_19.b
        *(arg2 + 0x70) = 1
    
    int32_t edi_1 = *(*arg1 + 0x264)
    var_58 = edi_1
    int32_t eax_22 = sub_4a1bb0(edi_1) + *(edi_1 + 0xa0)
    var_5c = eax_22
    int32_t* ecx_9 = &var_5c
    var_60 = 0xff
    
    if (eax_22 s>= 0xff)
        ecx_9 = &var_60
    
    int32_t ebx_1 = *ecx_9
    int32_t eax_24 = sub_4a1b50(edi_1) + *(edi_1 + 0x9c)
    var_5c = eax_24
    int32_t* edx_1 = &var_5c
    var_60 = 0xff
    
    if (eax_24 s>= 0xff)
        edx_1 = &var_60
    
    int32_t ecx_11 = var_58
    int32_t edi_2 = *edx_1
    int32_t eax_26 = sub_4a1af0(ecx_11) + *(ecx_11 + 0x98)
    var_60 = 0xff
    var_5c = eax_26
    int32_t* ecx_12 = &var_5c
    
    if (eax_26 s>= 0xff)
        ecx_12 = &var_60
    
    int32_t var_78_3 = ebx_1
    int32_t var_7c_1 = edi_2
    sub_4b7960(arg2 + 0x6c, *ecx_12)
    void* edi_3 = *(*arg1 + 0x264)
    int32_t var_78_4 = sub_4a2850(edi_3)
    int32_t var_7c_2 = sub_4a2800(edi_3)
    sub_4b7a20(arg2 + 0x6c, sub_4a27b0(edi_3))
    int32_t eax_33 = *(*(*arg1 + 0x264) + 0xb0)
    
    if (*(arg2 + 0xb0) != eax_33)
        *(arg2 + 0xb0) = eax_33
        *(arg2 + 0x70) = 1
    
    int32_t eax_36 = *(*(*arg1 + 0x264) + 0xf8)
    
    if (*(arg2 + 0xf8) != eax_36)
        *(arg2 + 0xf8) = eax_36
        *(arg2 + 0x70) = 1
    
    int32_t var_4c
    char* eax_37 = sub_4a3390(*(*arg1 + 0x264), &var_4c, 2)
    int32_t var_c_1 = 0
    
    if (sub_4058a0(*(arg2 + 0x480) + 0x30, eax_37) == 0)
        char* ecx_25 = *(arg2 + 0x480) + 0x30
        
        if (ecx_25 != eax_37)
            sub_401ff0(ecx_25, eax_37, 0, 0xffffffff)
        
        *(arg2 + 0x70) = 1
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    int32_t var_34
    char* eax_39 = sub_4a3390(*(*arg1 + 0x264), &var_34, 3)
    int32_t var_c_3 = 1
    
    if (sub_4058a0(*(arg2 + 0x480) + 0x48, eax_39) == 0)
        char* ecx_31 = *(arg2 + 0x480) + 0x48
        
        if (ecx_31 != eax_39)
            sub_401ff0(ecx_31, eax_39, 0, 0xffffffff)
        
        *(arg2 + 0x70) = 1
    
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    result.b = *(*(*arg1 + 0x264) + 0x47d)
    
    if (*(arg2 + 0x47d) != result.b)
        *(arg2 + 0x47d) = result.b
        *(arg2 + 0x70) = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
