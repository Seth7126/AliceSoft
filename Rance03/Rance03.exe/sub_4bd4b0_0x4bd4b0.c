// 函数: sub_4bd4b0
// 地址: 0x4bd4b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0

if (*(arg1 + 4) != *(arg1 + 8))
    int32_t var_14_1 = 0xf
    void* var_18_1 = nullptr
    char var_28 = 0
    sub_402110(&var_28, 0x6da399, nullptr)
    int32_t var_4 = 0
    void* esi_1 = *(arg1 + 4)
    
    if (esi_1 == *(arg1 + 8))
    label_4bd570:
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        int32_t ecx_3 = var_14_1
        
        if (ecx_3 u>= 0x10)
            *arg2 = var_28.d
        else if (var_18_1 != 0xffffffff)
            _memcpy(arg2, &var_28, var_18_1 + 1, eax_4)
            ecx_3 = var_14_1
        
        *(arg2 + 0x10) = var_18_1
        *(arg2 + 0x14) = ecx_3
    else
        int32_t eax_5 = arg3
        void* edi_1 = esi_1 + 0x10
        
        while (true)
            if (eax_5 s< *(edi_1 - 8))
                goto label_4bd570
            
            if (eax_5 s< *(edi_1 - 4))
                *(arg2 + 0x14) = 0xf
                *(arg2 + 0x10) = 0
                *arg2 = 0
                sub_401ff0(arg2, esi_1 + 0x10, 0, 0xffffffff)
                
                if (var_14_1 u>= 0x10)
                    j__free(var_28.d)
                
                break
            
            if (&var_28 != edi_1)
                sub_401ff0(&var_28, edi_1, 0, 0xffffffff)
                eax_5 = arg3
            
            esi_1 += 0x5c
            edi_1 += 0x5c
            
            if (esi_1 == *(arg1 + 8))
                goto label_4bd570
else
    sub_401f60(arg2, 0x6da39a)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return arg2
