// 函数: sub_5b3af0
// 地址: 0x5b3af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1 + 8
int32_t* result = sub_5b43a0(ebx, arg2)
void* i = *ebx

if (i != *(arg1 + 0xc))
    char* edi_1 = i + 8
    
    do
        int32_t ebx_3 = (i - *ebx) s/ 0x38
        int32_t eax_8
        int32_t edx_4
        edx_4:eax_8 = muls.dp.d(0x38e38e39, *(arg3 + 0x58) - *(arg3 + 0x54))
        int32_t edx_5 = edx_4 s>> 4
        void* eax_14
        
        if (ebx_3 u< (edx_5 u>> 0x1f) + edx_5)
            eax_14 = *(arg3 + 0x54) + ebx_3 * 0x48
        
        if (ebx_3 u>= (edx_5 u>> 0x1f) + edx_5 || eax_14 == 0)
            int32_t var_48_1 = ebx_3
            char var_28
            result = sub_4691f0(&var_28, 0x6e5e5c)
            int32_t var_4 = 0
            
            if (edi_1 != result)
                result = sub_401ff0(edi_1, result, 0, 0xffffffff)
            
            int32_t var_4_1 = 0xffffffff
            int32_t var_14
            
            if (var_14 u>= 0x10)
                result = j__free(var_28.d)
            
            var_14 = 0xf
            int32_t var_18_1 = 0
            var_28 = 0
        else
            result = eax_14 + 8
            
            if (edi_1 != result)
                result = sub_401ff0(edi_1, result, 0, 0xffffffff)
        
        i += 0x38
        ebx = arg1 + 8
        edi_1 = &edi_1[0x38]
    while (i != *(arg1 + 0xc))

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
