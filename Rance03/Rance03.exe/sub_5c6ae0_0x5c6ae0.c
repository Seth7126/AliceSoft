// 函数: sub_5c6ae0
// 地址: 0x5c6ae0
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
int32_t* esi = arg1
esi[0x8d] -= 4
int32_t ebx = *esi[0x8d]
esi[0x8d] -= 4
int32_t edx = *esi[0x8d]
int32_t eax_9 = (esi[0x5e] - esi[0x5d]) s>> 2
int32_t* result

if (edx u>= eax_9)
label_5c6c36:
    int32_t var_48_6 = edx
    result = sub_5c24e0(eax_9, edx, arg1, esi, 0x6e771c)
else
    eax_9 = esi[0x5d]
    arg1 = *(eax_9 + (edx << 2))
    
    if (arg1 == 0)
        goto label_5c6c36
    
    uint32_t eax_11 = arg1[3] u>> 2
    
    if (ebx u>= eax_11)
        int32_t var_48_5 = ebx
        int32_t var_4c_3 = edx
        char const* const var_50_1 = "string"
        result = sub_5c2400(eax_11, edx, arg1, esi, "S_REF")
    else
        int32_t ecx
        
        if (arg1[3] != 0)
            ecx = arg1[2]
        else
            ecx = 0
        
        arg1 = *(ecx + (ebx << 2))
        eax_9 = (esi[0x5e] - esi[0x5d]) s>> 2
        
        if (arg1 u>= eax_9)
        label_5c6c17:
            int32_t* var_48_4 = arg1
            result = sub_5c24e0(eax_9, edx, arg1, esi, 0x6e77c4)
        else
            eax_9 = *(esi[0x5d] + (arg1 << 2))
            
            if (eax_9 == 0)
                goto label_5c6c17
            
            char* eax_15
            
            if (*(eax_9 + 0xc) != 0)
                eax_15 = *(eax_9 + 8)
            else
                eax_15 = nullptr
            
            char var_28
            sub_401f60(&var_28, eax_15)
            int32_t var_4 = 0
            int32_t var_2c
            int32_t* eax_16
            int32_t* ecx_3
            int32_t edx_1
            eax_16, ecx_3, edx_1 = sub_5d62c0(&esi[0x5b], &var_28, &var_2c)
            int32_t var_4_1 = 0xffffffff
            ebx.b = eax_16.b == 0
            int32_t var_14
            
            if (var_14 u>= 0x10)
                eax_16, ecx_3, edx_1 = j__free(var_28.d)
            
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            var_28 = 0
            
            if (ebx.b == 0)
                result = sub_5ddf10(&esi[0x88], var_2c)
            else
                result = sub_5c24e0(eax_16, edx_1, ecx_3, esi, 0x6e7794)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
