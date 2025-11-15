// 函数: sub_5fda90
// 地址: 0x5fda90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742310
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi_1 = arg2 - arg1
int32_t result
int32_t edx
edx:result = muls.dp.d(0x92492493, esi_1)
int32_t ebx_2 = esi_1 s/ 0x38

if (ebx_2 s>= 2)
    int32_t eax_4
    int32_t edx_3
    edx_3:eax_4 = sx.q(ebx_2)
    result = eax_4 - edx_3
    int32_t i = result s>> 1
    
    if (i s> 0)
        int32_t* edi_2 = arg1 + i * 0x38 + 0x20
        
        do
            edi_2 = &edi_2[-0xe]
            struct sys43vm::CCallFuncCount::VTable* const var_50 =
                &sys43vm::CCallFuncCount::`vftable'
            int32_t result_1 = 0xf
            int32_t var_38_1 = 0
            i -= 1
            char var_48 = 0
            sub_403590(&var_48, &edi_2[-6], 0, 0xffffffff)
            int32_t var_8_1 = 0
            int32_t var_30_1 = *edi_2
            void var_2c
            int32_t ecx_4 = sub_5fe210(&var_2c, &edi_2[1])
            int32_t var_20_1 = edi_2[4]
            int32_t var_1c_1 = edi_2[5]
            int32_t var_6c_2 = ecx_4
            int32_t var_8_2 = 1
            sub_5fe4c0(&var_50, i, arg1, ebx_2, &var_50)
            int32_t var_8_3 = 0xffffffff
            var_50 = &sys43vm::CCallFuncCount::`vftable'
            sub_471bb0(&var_2c)
            result = result_1
            
            if (result u>= 0x10)
                result = sub_403160(var_48.d, result + 1, 1)
        while (i s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
