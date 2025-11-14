// 函数: sub_4a67c0
// 地址: 0x4a67c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_44 = arg2
struct partsengine::CPartsList::VTable** result

if (arg2 s> 0)
    struct partsengine::CPartsList::VTable** edx_1 = sub_4a52a0(*(arg1 + 8))
    int32_t edi_1
    
    if (edx_1 != 0)
        edi_1 = edx_1[2]
    
    struct partsengine::CPartsList::VTable** edi_2
    
    if (edx_1 == 0 || arg2 s< edi_1 || edx_1[1] + edi_1 s<= arg2)
        edi_2 = nullptr
    else
        edi_2 = edx_1[3][arg2 - edi_1]
        
        if (edi_2 == 0)
            edi_2 = sub_4e7720(edx_1, arg2)
    
    if (edi_2[0x128] != 0)
        result.b = 0
    else if (sub_4a6540(arg1, edi_2).b != 0)
        result.b = 0
    else
        if (sub_4a2d30(*(arg1 + 4)) == sub_4a2d30(edi_2))
            sub_4a2d90(edi_2)
        
        int32_t eax_11 = *(edi_2[0x14][0x16].vFunc_0 + 0x90)
        
        if (eax_11 s> 0)
            int32_t var_44_5 = eax_11
            void* eax_12 = sub_4a56f0(edi_2[0x15])
            
            if (eax_12 != 0)
                sub_4b7b70(eax_12 + 0x6c, edi_2[0xb])
        
        result = *(*(arg1 + 4) + 0x2c)
        
        if (edi_2[0x3f] != result)
            edi_2[0x3f] = result
            edi_2[0x1c].b = 1
        
        result.b = 1
else
    int32_t var_4 = 0
    int32_t var_2c
    sub_4a5650(sub_4691f0(&var_2c, 0x6e0618))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
