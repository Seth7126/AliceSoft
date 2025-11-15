// 函数: sub_6219f0
// 地址: 0x6219f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744876
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = *arg1
int32_t result_1
int32_t result_2 = result_1

if (result_2 u< (*(edi + 0x94) - *(edi + 0x90)) s/ 0x38)
    uint32_t edi_1 = *(edi + 0x90) + result_2 * 0x38
    
    if (edi_1 != 0)
        result_1 = sub_621000(arg1)
        int32_t* var_14 = arg1
        struct sys43vm::CVarListPage::sys43vm::CStructPage::VTable** var_18
        var_14 = sub_622610(&result_1, &var_14, &var_18, &result_1)
        int32_t result = result_1
        void var_38
        void var_2c
        int32_t* eax_13 = sub_622260(sub_44a580(&arg1[1], &var_38), &var_2c, result)
        int32_t* esi_2 = *eax_13
        
        if (esi_2 != 0)
            esi_2 = *esi_2
        
        int32_t edx_4 = eax_13[2]
        int32_t* ecx_9 = var_14
        int32_t* edx_6 = *(esi_2[1] + (((esi_2[2] - 1) & edx_4 u>> 2) << 2)) + ((edx_4 & 3) << 2)
        int32_t eax_18 = *ecx_9
        *ecx_9 = 0
        int32_t* ecx_10 = *edx_6
        *edx_6 = eax_18
        
        if (ecx_10 != 0)
            (**ecx_10)(1)
        
        struct sys43vm::CVarListPage::sys43vm::CStructPage::VTable** ecx_11 = var_18
        
        if (ecx_11 != 0)
            int32_t var_8_1 = 0
            (*ecx_11)->vFunc_0(1)
            int32_t var_8_2 = 0xffffffff
        
        int32_t* eax_22 = sub_622260(sub_44a580(&arg1[1], &var_2c), &var_38, result)
        int32_t* esi_3 = *eax_22
        
        if (esi_3 != 0)
            esi_3 = *esi_3
        
        int32_t edx_7 = eax_22[2]
        
        if (sub_629210(*(*(esi_3[1] + ((edx_7 u>> 2 & (esi_3[2] - 1)) << 2)) + ((edx_7 & 3) << 2)), 
                edi_1, arg2) != 0)
            int32_t eax_28 = *(edi_1 + 0x24)
            
            if (arg2.b == 0 || eax_28 == 0xffffffff)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            void var_48
            int32_t esi_4 = *sub_6148a0(*arg1, &var_48, eax_28, result, nullptr, 0)
            sub_602e40(&var_48)
            
            if (esi_4 != 0xffffffff)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0xffffffff
