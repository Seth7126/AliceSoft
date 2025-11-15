// 函数: sub_621ba0
// 地址: 0x621ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7448a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
void* edi = *arg1
int32_t result_1
int32_t result_2 = result_1

if (result_2 u< (*(edi + 0x94) - *(edi + 0x90)) s/ 0x38)
    uint32_t ebx_1 = *(edi + 0x90) + result_2 * 0x38
    
    if (ebx_1 != 0)
        int32_t* esi_2 = var_14
        result_1 = sub_621000(esi_2)
        var_14 = esi_2
        struct sys43vm::CVarListPage::sys43vm::CStructPage::VTable** var_18
        struct sys43vm::CVarListPage::sys43vm::CStructPage::VTable*** eax_11 =
            sub_622610(&result_1, &var_14, &var_18, &result_1)
        int32_t result = result_1
        var_14 = eax_11
        void var_34
        void var_28
        int32_t* eax_14 = sub_622260(sub_44a580(&esi_2[1], &var_34), &var_28, result)
        int32_t* esi_3 = *eax_14
        
        if (esi_3 != 0)
            esi_3 = *esi_3
        
        int32_t edx_4 = eax_14[2]
        int32_t* ecx_9 = var_14
        int32_t* edx_6 = *(esi_3[1] + (((esi_3[2] - 1) & edx_4 u>> 2) << 2)) + ((edx_4 & 3) << 2)
        int32_t eax_19 = *ecx_9
        *ecx_9 = 0
        int32_t* ecx_10 = *edx_6
        *edx_6 = eax_19
        
        if (ecx_10 != 0)
            (**ecx_10)(1)
        
        struct sys43vm::CVarListPage::sys43vm::CStructPage::VTable** ecx_11 = var_18
        
        if (ecx_11 != 0)
            int32_t var_8_1 = 0
            (*ecx_11)->vFunc_0(1)
            int32_t var_8_2 = 0xffffffff
        
        int32_t* eax_23 = sub_622260(sub_44a580(&esi_2[1], &var_28), &var_34, result)
        int32_t* ecx_14 = *eax_23
        
        if (ecx_14 != 0)
            ecx_14 = *ecx_14
        
        int32_t esi_4 = eax_23[2]
        
        if (sub_629210(
                *(*(ecx_14[1] + ((esi_4 u>> 2 & (ecx_14[2] - 1)) << 2)) + ((esi_4 & 3) << 2)), 
                ebx_1, 1) == 0)
            result = 0xffffffff
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0xffffffff
