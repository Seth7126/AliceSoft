// 函数: sub_5be110
// 地址: 0x5be110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
char* esi = *(edi + 4)
int32_t ecx = *(edi + 8)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&esi[4] u> ecx)
label_5be2a3:
    result.b = 0
else
    uint32_t ebx_7 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
    *(edi + 4) = &esi[4]
    
    if (&esi[8] u> ecx)
    label_5be2a3_1:
        result.b = 0
    else
        uint32_t ecx_7 =
            ((zx.d(esi[7]) << 8 | zx.d(esi[6])) << 8 | zx.d(esi[5])) << 8 | zx.d(esi[4])
        *(edi + 4) = &esi[8]
        
        if (ecx_7 != 0)
        label_5be2a3_2:
            result.b = 0
        else
            if (ebx_7 != 0)
                void* var_34_1 = arg2
                uint32_t var_38_1 = ecx_7
                sub_48c2c0(*(arg1 + 0x18), *(arg1 + 0x1c))
                *(arg1 + 0x1c) = *(arg1 + 0x18)
                sub_533450(arg1 + 0x18, ebx_7)
                arg2 = nullptr
            
            if (ebx_7 == 0 || ebx_7 == 0)
                result.b = 1
            else
                int32_t ebp_1 = 0
                void* ecx_16
                
                do
                    result = *(edi + 4)
                    
                    if (&result[1] u> *(edi + 8))
                        goto label_5be2a3_2
                    
                    uint32_t edx_8 = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8
                        | zx.d(*(result + 1))) << 8 | zx.d(*result)
                    *(edi + 4) = &result[1]
                    int32_t* var_18
                    sub_448e90(&var_18, edx_8)
                    int32_t var_4 = 0
                    int32_t* esi_2 = var_18
                    int32_t var_14
                    
                    if (esi_2 != var_14 && sub_468dd0(edi, esi_2, var_14 - esi_2) == 0)
                        sub_403510(&var_18)
                        goto label_5be2a3_2
                    
                    sub_5d18a0(*(arg1 + 0x18) + ebp_1, &var_18)
                    int32_t var_4_1 = 0xffffffff
                    
                    if (esi_2 != 0)
                        j__free(esi_2)
                        var_18 = nullptr
                        var_14 = 0
                        int32_t var_10_1 = 0
                    
                    ebp_1 += 0xc
                    ecx_16 = arg2 + 1
                    arg2 = ecx_16
                while (ecx_16 u< ebx_7)
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
