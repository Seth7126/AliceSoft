// 函数: sub_40bc80
// 地址: 0x40bc80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727720
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(*(arg1 + 0x10) + 4)
int32_t* var_60 = edi
int32_t eax_5 = (*(*edi + 0x10))(eax_2)
void* result = sub_6ca100(arg2, eax_5)
int32_t ebx = 0

if (eax_5 s> 0)
    do
        int32_t* eax_7 = (*(*edi + 0x18))(ebx)
        char* edx_2 = (**eax_7)()
        int32_t var_34_1 = 0xf
        void* var_38_1 = nullptr
        char var_48 = 0
        void* ecx_4
        
        if (*edx_2 != 0)
            char* ecx_5 = edx_2
            char* eax_8
            
            do
                eax_8.b = *ecx_5
                ecx_5 = &ecx_5[1]
            while (eax_8.b != 0)
            ecx_4 = ecx_5 - &ecx_5[1]
        else
            ecx_4 = nullptr
        
        sub_403490(&var_48, edx_2, ecx_4)
        int32_t var_8_1 = 0
        char* esi_2 = &var_48
        char* edx_3 = &var_48
        
        if (var_34_1 u>= 0x10)
            esi_2 = var_48.d
        
        if (var_34_1 u>= 0x10)
            edx_3 = var_48.d
        
        int32_t var_74_3 = 0.d
        sub_6ca200(arg2 + 4, *(arg2 + 8), edx_3, var_38_1 + esi_2)
        char var_49 = 0
        sub_4263a0(arg2 + 4, &var_49)
        int32_t var_8_2 = 0xffffffff
        
        if (var_34_1 u>= 0x10)
            sub_403160(var_48.d, var_34_1 + 1, 1)
        
        char* edx_4 = (*(*eax_7 + 8))()
        int32_t var_1c_1 = 0xf
        void* const var_20_1 = nullptr
        char var_30 = 0
        void* ecx_10
        
        if (*edx_4 != 0)
            char* ecx_11 = edx_4
            char* eax_15
            
            do
                eax_15.b = *ecx_11
                ecx_11 = &ecx_11[1]
            while (eax_15.b != 0)
            ecx_10 = ecx_11 - &ecx_11[1]
        else
            ecx_10 = nullptr
        
        sub_403490(&var_30, edx_4, ecx_10)
        int32_t var_8_3 = 1
        char* esi_5 = &var_30
        char* edx_5 = &var_30
        
        if (var_1c_1 u>= 0x10)
            esi_5 = var_30.d
        
        if (var_1c_1 u>= 0x10)
            edx_5 = var_30.d
        
        int32_t var_74_6 = 0.d
        sub_6ca200(arg2 + 4, *(arg2 + 8), edx_5, var_20_1 + esi_5)
        var_49 = 0
        sub_4263a0(arg2 + 4, &var_49)
        int32_t var_8_4 = 0xffffffff
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        int32_t eax_20 = *eax_7
        int32_t var_1c_2 = 0xf
        int32_t var_20_2 = 0
        var_30 = 0
        result = sub_6ca100(arg2, (*(eax_20 + 0xc))())
        edi = var_60
        ebx += 1
    while (ebx s< eax_5)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
