// 函数: sub_502680
// 地址: 0x502680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c1020
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_64 = edi
int32_t var_5c = arg3
void** var_60 = arg2
int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
sub_402110(&var_4c, 0x6e227c, 0xa)
int32_t var_c_1 = 0
sub_5028a0(&var_60, &var_4c)
int32_t var_c_2 = 0xffffffff

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t esi = 0
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x2aaaaaab, *(edi + 0x30) - *(edi + 0x2c))
int32_t edx_1 = edx s>> 5
int32_t* result = (edx_1 u>> 0x1f) + edx_1
int32_t* result_1 = result

if (result s<= 0)
label_50282c:
    int32_t var_80_7 = *(edi + 0x48)
    int32_t var_84_2 = *(edi + 0x44)
    int32_t var_88_2 = *(edi + 0x40)
    int32_t var_8c_1 = *(edi + 0x3c)
    int32_t var_c_7 = 3
    int32_t var_34
    sub_5028a0(&var_60, sub_4691f0(&var_34, 0x6e2290))
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    result.b = 1
else
    int32_t ebx_1 = 0
    
    while (true)
        if (esi s>= 0)
            int32_t eax_9
            int32_t edx_2
            edx_2:eax_9 = muls.dp.d(0x2aaaaaab, *(edi + 0x30) - *(edi + 0x2c))
            int32_t edx_3 = edx_2 s>> 5
            
            if ((edx_3 u>> 0x1f) + edx_3 s> esi)
                void* edi_1 = *(edi + 0x2c)
                
                if (edi_1 != neg.d(ebx_1))
                    esi += 1
                    int32_t var_80_2 = esi
                    int32_t var_c_3 = 1
                    int32_t* eax_13 = sub_5028a0(&var_60, sub_4691f0(&var_4c, 0x6e2270))
                    int32_t var_c_4 = 0xffffffff
                    
                    if (var_38 u>= 0x10)
                        eax_13 = j__free(var_4c.d)
                    
                    int32_t var_c_5 = 2
                    int32_t var_c_6 = 0xffffffff
                    result.b = sub_47faf0(edi_1 + ebx_1, 
                        sub_410930(eax_13, arg2, &var_4c, "*\t*\t"), arg3).b == 0
                    char var_65_1 = result.b
                    
                    if (var_38 u>= 0x10)
                        j__free(var_4c.d)
                        result.b = var_65_1
                    
                    if (result.b == 0)
                        edi = var_64
                        ebx_1 += 0xc0
                        
                        if (esi s>= result_1)
                            goto label_50282c
                        
                        continue
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
