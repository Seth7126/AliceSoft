// 函数: sub_5c65b0
// 地址: 0x5c65b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5a18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_esi
int32_t var_3c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* eax_5 = esi[0x82]
int32_t edx = *eax_5
esi[0x82] = &eax_5[1]
int32_t eax_9 = (esi[0x1c] - esi[0x1b]) s>> 2
int32_t* result
int32_t var_40_4

if (edx u>= eax_9)
    var_40_4 = edx
    result = sub_5c24e0(eax_9, edx, arg1, esi, 0x6e712c)
else
    arg1 = esi[0x1b]
    
    if (arg1 == esi[0x1c])
        var_40_4 = edx
        result = sub_5c24e0(eax_9, edx, arg1, esi, 0x6e712c)
    else
        eax_9 = esi[0x1e]
        
        if (eax_9 == esi[0x1f])
            var_40_4 = edx
            result = sub_5c24e0(eax_9, edx, arg1, esi, 0x6e712c)
        else
            int32_t eax_10 = arg1[edx]
            eax_9 = eax_10 + esi[0x1e]
            
            if (eax_10 == neg.d(esi[0x1e]))
                var_40_4 = edx
                result = sub_5c24e0(eax_9, edx, arg1, esi, 0x6e712c)
            else
                int32_t var_4 = 0
                int32_t var_2c
                char var_28
                int32_t* eax_12
                int32_t* ecx_2
                int32_t edx_1
                eax_12, ecx_2, edx_1 = sub_5d62c0(&esi[0x5b], sub_401f60(&var_28, eax_9), &var_2c)
                int32_t var_4_1 = 0xffffffff
                int32_t ebx
                ebx.b = eax_12.b == 0
                int32_t var_14
                
                if (var_14 u>= 0x10)
                    eax_12, ecx_2, edx_1 = j__free(var_28.d)
                
                int32_t var_14_1 = 0xf
                int32_t var_18_1 = 0
                var_28 = 0
                
                if (ebx.b == 0)
                    result = sub_5ddf10(&esi[0x88], var_2c)
                else
                    result = sub_5c24e0(eax_12, edx_1, ecx_2, esi, 0x6e70f8)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
