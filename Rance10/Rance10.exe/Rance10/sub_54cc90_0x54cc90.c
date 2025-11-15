// 函数: sub_54cc90
// 地址: 0x54cc90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b728
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
void* ebx
void* var_48 = ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg1

if (arg4 == 0)
    (*(eax_3 + 0x34))(eax_2)
else
    (*(eax_3 + 0x30))(eax_2)

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0

if (sub_61ed80(arg3, &var_2c) == 0)
    ebx.b = 0
else
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u> *(arg3 + 8))
        ebx.b = 0
    else
        uint32_t ecx_7 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) = &edx_1[4]
        uint32_t var_44
        
        if (sub_6c9300(arg3, &var_44) == 0)
            ebx.b = 0
        else
            arg1[0xa].b = 0
            
            if (arg2 s< 0x21)
            label_54cd64:
                uint32_t var_3c
                uint32_t var_38
                
                if (sub_61ec90(arg3, &var_3c) == 0)
                    ebx.b = 0
                else
                    uint32_t var_34
                    
                    if (sub_61ec90(arg3, &var_38) == 0)
                        ebx.b = 0
                    else
                        uint32_t var_30
                        
                        if (sub_61ec90(arg3, &var_34) == 0)
                            ebx.b = 0
                        else if (sub_61ec90(arg3, &var_30) == 0)
                            ebx.b = 0
                        else
                            sub_54c780(arg1, var_3c, var_38, var_34, var_30)
                            
                            if (sub_54c6d0(arg1, &var_2c) == 0)
                                ebx.b = 0
                            else
                                uint32_t xmm1_1 = var_44
                                arg1[8] f- ecx_7
                                bool p_2 = unimplemented  {test ah, 0x44}
                                bool p_4
                                
                                if (not(p_2))
                                    arg1[9] f- xmm1_1
                                    p_4 = unimplemented  {test ah, 0x44}
                                
                                if (p_2 || p_4)
                                    arg1[8] = ecx_7
                                    arg1[9] = xmm1_1
                                    arg1[0x2d].b = 1
                                
                                ebx.b = 1
            else
                if (sub_6c9280(arg3, &arg1[0xa]) != 0)
                    goto label_54cd64
                
                ebx.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
