// 函数: sub_528920
// 地址: 0x528920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3568
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = __security_cookie ^ &var_70
int32_t __saved_edi
int32_t var_84 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (sub_528db0(arg1, arg2) == 0)
    sub_528690(arg1)
    int32_t ebx_1 = 0
    int32_t eax_9 = (*(arg2 + 8) - *(arg2 + 4)) s/ 0x38
    
    if (eax_9 s<= 0)
    label_528bff:
        result = sub_528c60(arg1, arg3) != 0
    else
        int32_t edi_1 = 0
        int32_t var_68_1 = 0
        
        while (true)
            int32_t* var_40
            sub_5272a0(arg2, &var_40, ebx_1)
            int32_t var_4 = 0
            int32_t edx_6
            
            if (ebx_1 s>= 0)
                int32_t ecx_5 = *(arg2 + 8) - *(arg2 + 4)
                int32_t eax_10
                int32_t edx_4
                edx_4:eax_10 = muls.dp.d(0x92492493, ecx_5)
                edx_6 = (edx_4 + ecx_5) s>> 5
            
            int32_t edi_2
            
            if (ebx_1 s< 0 || ebx_1 s>= (edx_6 u>> 0x1f) + edx_6)
                edi_2 = 0xffffffff
            else
                edi_2 = *(edi_1 + *(arg2 + 4) + 0x18)
            
            int32_t var_6c = edi_2
            int32_t var_8c_3
            int32_t* var_88_16
            char var_58
            int32_t var_2c
            int32_t* eax_15
            int32_t ecx_7
            int32_t edx_7
            
            if (edi_2 != 0xffffffff)
                eax_15, ecx_7, edx_7 = sub_53bc50(*(arg1 + 0x5c), edi_2)
                int32_t var_5c = eax_15
                
                if (eax_15 == 0)
                    var_88_16 = edi_2
                    var_8c_3 = 0x6e343c
                label_528c3f:
                    sub_59f4e0(eax_15, edx_7, ecx_7, var_8c_3, var_88_16)
                    
                    if (var_2c u>= 0x10)
                        j__free(var_40)
                    
                    result = false
                    break
                
                sub_412de0(arg1 + 4, &var_5c)
                int32_t var_44_1 = 0xf
                int32_t var_48_1 = 0
                var_58 = 0
                var_4.b = 1
                sub_412d60(arg1 + 0x10, &var_58)
                var_4.b = 0
                
                if (var_44_1 u>= 0x10)
                    j__free(var_58.d)
                
                sub_4158d0(arg1 + 0x1c, &var_6c)
                goto label_528bbe
            
            int32_t var_30
            
            if (var_30 == 0)
                var_6c = 0
                sub_412de0(arg1 + 4, &var_6c)
                int32_t var_44_2 = 0xf
                int32_t var_48_2 = 0
                var_58 = 0
                var_4.b = 2
                sub_412d60(arg1 + 0x10, &var_58)
                var_4.b = 0
                
                if (var_44_2 u>= 0x10)
                    j__free(var_58.d)
                
                goto label_528bad
            
            int32_t var_44_3 = 0xf
            int32_t var_48_3 = 0
            var_58 = 0
            var_4.b = 3
            char var_28
            int32_t* eax_17 =
                sub_410930(sub_402110(&var_58, 0x6da6fe, nullptr), &var_40, &var_28, ".bmp")
            var_4.b = 4
            int32_t* eax_18
            eax_18, ecx_7, edx_7 = sub_53b690(*(arg1 + 0x5c), eax_17, &var_58, 0)
            var_6c = eax_18
            int32_t var_14
            
            if (var_14 u>= 0x10)
                ecx_7, edx_7 = j__free(var_28.d)
            
            var_4.b = 0
            var_14 = 0xf
            int32_t var_18_1 = 0
            var_28 = 0
            
            if (var_44_3 u>= 0x10)
                ecx_7, edx_7 = j__free(var_58.d)
            
            if (eax_18 == 0)
                eax_15 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_15 = var_40
                
                var_88_16 = eax_15
                var_8c_3 = 0x6e3500
                goto label_528c3f
            
            sub_412de0(arg1 + 4, &var_6c)
            sub_421cd0(arg1 + 0x10, &var_40)
        label_528bad:
            var_6c = 0xffffffff
            sub_4158d0(arg1 + 0x1c, &var_6c)
        label_528bbe:
            int32_t var_4_1 = 0xffffffff
            
            if (var_2c u>= 0x10)
                j__free(var_40)
            
            ebx_1 += 1
            edi_1 = var_68_1 + 0x38
            var_68_1 = edi_1
            
            if (ebx_1 s>= eax_9)
                goto label_528bff
else
    result = true

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_70)
return result
