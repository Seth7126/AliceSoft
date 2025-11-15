// 函数: sub_515df0
// 地址: 0x515df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738791
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_c0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_516490(*(*arg1 + 4))
void* eax_5 = *arg1
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *arg1
*eax_6 = eax_6
uint32_t result = *arg1
int32_t var_8_2 = 0xffffffff
*(result + 8) = result
arg1[1] = 0
char* ecx = *(arg3 + 4)

if (&ecx[4] u> *(arg3 + 8))
    result.b = 0
else
    int32_t esi_1 = 0
    uint32_t ebx_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg3 + 4) = &ecx[4]
    
    if (ebx_7 s<= 0)
    label_515fb6:
        result.b = 1
    else
        while (true)
            uint32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            int32_t var_8_3 = 1
            
            if (sub_61ed80(arg3, &var_48) != 0)
                int32_t var_1c_1 = 0xf
                int32_t var_20_1 = 0
                char var_30 = 0
                var_8_3.b = 2
                
                if (arg2 s< 8)
                label_515f01:
                    void var_a8
                    sub_510430(&var_a8)
                    var_8_3.b = 3
                    
                    if (sub_512f50(&var_a8, arg2, arg3) != 0
                            && sub_516030(arg1, &var_a8, &var_30, arg4) != 0)
                        sub_5160e0(arg1, &var_48, &var_30, &var_a8)
                        sub_5106e0(&var_a8)
                        
                        if (var_1c_1 u>= 0x10)
                            sub_403160(var_30.d, var_1c_1 + 1, 1)
                        
                        int32_t var_8_4 = 0xffffffff
                        int32_t var_1c_2 = 0xf
                        int32_t var_20_2 = 0
                        var_30 = 0
                        
                        if (var_34_1 u>= 0x10)
                            sub_403160(var_48.d, var_34_1 + 1, 1)
                        
                        esi_1 += 1
                        
                        if (esi_1 s>= ebx_7)
                            goto label_515fb6
                        
                        continue
                    
                    sub_5106e0(&var_a8)
                else if (sub_61ed80(arg3, &var_30) != 0)
                    goto label_515f01
                
                if (var_1c_1 u>= 0x10)
                    sub_403160(var_30.d, var_1c_1 + 1, 1)
                
                int32_t var_1c_3 = 0xf
                int32_t var_20_3 = 0
                var_30 = 0
            
            if (var_34_1 u< 0x10)
                break
            
            sub_403160(var_48.d, var_34_1 + 1, 1)
            break
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
