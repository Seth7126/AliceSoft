// 函数: sub_472510
// 地址: 0x472510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
int32_t* i = edi[7]
arg1.b = 0
char var_2d = 0
void* esi = *i
edi[9] = esi

if (edi[8] != 0 && esi != i)
    int32_t* esi_1 = esi + 8
    
    if (esi != 0xfffffff8)
        do
            if (esi_1[0xc] == 0x11)
                i, arg1 = sub_470c60(esi_1)
                
                if (i.b != 0)
                    arg1.b = var_2d
                else if (sub_470bf0(esi_1).b != 0)
                    arg1.b = var_2d
                else
                    int32_t* ecx_1
                    
                    if (esi_1[5] u< 0x10)
                        ecx_1 = esi_1
                    else
                        ecx_1 = *esi_1
                    
                    int32_t ebx_1 = esi_1[4]
                    int32_t eax_3 = 4
                    
                    if (ebx_1 u< 4)
                        eax_3 = ebx_1
                    
                    i, arg1 = sub_406ac0(eax_3, "true", ecx_1, eax_3)
                    
                    if (i != 0 || ebx_1 u< 4 || ebx_1 u> 4)
                        i, arg1 = sub_407560(esi_1, "false")
                        
                        if (i.b != 0)
                            arg1.b = var_2d
                        else
                            void* var_2c
                            sub_403360(&var_2c, 0x75f8ac)
                            int32_t var_8_1 = 0
                            sub_45ebd0(edi[0xa], &var_2c, esi_1)
                            int32_t var_8_2 = 0xffffffff
                            int32_t* var_18
                            
                            if (var_18 u>= 0x10)
                                i, arg1 = sub_403160(var_2c, var_18 + 1, 1)
                            
                            arg1.b = 1
                            var_2d = 1
                    else
                        arg1.b = var_2d
            
            if (edi[8] == 0)
                break
            
            if (edi[9] == edi[7])
                break
            
            i = *edi[9]
            edi[9] = i
            
            if (edi[8] == 0)
                break
            
            if (i == edi[7])
                break
            
            esi_1 = &i[2]
        while (i != 0xfffffff8)

i.b = arg1.b == 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return i
