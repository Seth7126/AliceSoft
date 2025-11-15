// 函数: sub_4211b0
// 地址: 0x4211b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729040
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_8c = edi
int32_t edx

if ((*(**(edi + 8) + 0x20))(arg3) s<= 0)
    edx = (*(**(edi + 8) + 0x24))(arg3)
else
    edx = 0x4f

char eax_8 = sub_421f30(edx)
uint32_t result

if (eax_8 == 0)
    result = sub_421fa0(edx)

if (eax_8 != 0 || result.b != 0)
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    int32_t var_8_1 = 0
    sub_41f9a0(edi, arg3, &var_44)
    int32_t esi_1 = 0
    int32_t ebx
    
    while (true)
        result = (*(**(edi + 8) + 4))(arg3)
        
        if (result != 0)
            result = (*(*result + 0x14))(eax_2) u>> 2
        
        if (esi_1 s>= result)
            ebx.b = 1
            break
        
        uint32_t edi_1 = (*(**(edi + 8) + 4))(arg3)
        
        if (edi_1 != 0 && esi_1 s>= 0)
            int32_t eax_14
            int32_t edx_2
            edx_2:eax_14 = sx.q((*(*edi_1 + 0x14))(eax_2))
            
            if (esi_1 s< (eax_14 + (edx_2 & 3)) s>> 2)
                result = (*(*edi_1 + 0x18))()
                
                if (result != 0)
                    if (*(result + (esi_1 << 2)) == arg5)
                        int32_t var_18_1 = 0xf
                        int32_t var_1c_1 = 0
                        char var_2c = 0
                        sub_403490(&var_2c, 0x75cd0f, nullptr)
                        var_8_1.b = 1
                        int32_t var_80_1 = arg2
                        struct dpvariable::CRefPageInfo::VTable* var_84 =
                            &dpvariable::CRefPageInfo::`vftable'
                        int32_t var_7c_1 = arg3
                        int32_t var_78_1 = esi_1
                        int32_t var_60_1 = 0xf
                        int32_t var_64_1 = 0
                        char var_74 = 0
                        sub_403590(&var_74, &var_44, 0, 0xffffffff)
                        var_8_1.b = 2
                        int32_t var_48_1 = 0xf
                        int32_t var_4c_1 = 0
                        char var_5c = 0
                        sub_403590(&var_5c, &var_2c, 0, 0xffffffff)
                        var_8_1.b = 3
                        sub_4223b0(arg4, &var_84)
                        sub_423180(&var_84)
                        var_8_1.b = 0
                        
                        if (var_18_1 u>= 0x10)
                            sub_403160(var_2c.d, var_18_1 + 1, 1)
                    
                    edi = var_8c
                    esi_1 += 1
                    continue
        
        ebx.b = 0
        break
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
