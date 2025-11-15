// 函数: sub_692710
// 地址: 0x692710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747b10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3
eax_3.b = arg2 != 0
int32_t* var_28 = eax_3 + 0x200
void** result_1
sub_4cedf0(arg1 + 0x40, &result_1, &var_28)
void** result_2 = result_1
void** result
void** esi_1

if (result_2 != *(arg1 + 0x40))
    esi_1 = result_2[5]
label_692896:
    
    if (sub_694c00(esi_1).b == 0)
        result.b = 0
    else
        result = *(arg1 + 0x54)
        void* esi_2 = *(arg1 + 4)
        
        if (result == 0)
            result.b = 0
        else
            result_1 = result
            
            if (*(esi_2 + 0x164) != result)
                int32_t* eax_13 = *(esi_2 + 0x38)
                (*(*eax_13 + 0x1c))(eax_13, 0, 1, &result_1)
                *(esi_2 + 0x164) = result_1
            
            result.b = 1
else
    char* var_48 = nullptr
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    int32_t var_8_1 = 0
    int32_t* var_5c_1 = &var_48
    result = sub_682290(arg1 + 8, eax_3 + 0x200)
    char* edi_1 = var_48
    
    if (result.b != 0)
        int32_t var_5c_2 = 0
        int32_t var_20 = 1
        int32_t var_1c_1 = 6
        int32_t var_18_1 = 7
        void* var_3c = nullptr
        int32_t var_38_1 = 0
        int32_t var_34_1 = 0
        sub_452440(&var_3c, &var_20, &var_14)
        var_8_1.b = 1
        esi_1 = sub_6867b0(*(arg1 + 4))
        
        if (esi_1 != 0)
            int32_t* var_5c_3 = &var_3c
            
            if (sub_694b30(esi_1, edi_1, var_44_1 - edi_1) != 0)
                void* var_30
                sub_4cfa60(arg1 + 0x40, &var_30, &var_28)
                *(var_30 + 0x14) = esi_1
                sub_4043e0(&var_3c)
                int32_t var_8_2 = 0xffffffff
                sub_4059a0(&var_48)
                goto label_692896
            
            (*(*esi_1 + 4))(eax_2)
        
        void* ecx_8 = var_3c
        
        if (ecx_8 != 0)
            sub_403160(ecx_8, (var_34_1 - ecx_8) s>> 2, 4)
    
    if (edi_1 == 0)
        result.b = 0
    else
        sub_403160(edi_1, var_40_1 - edi_1, 1)
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return result
