// 函数: sub_5fbdb0
// 地址: 0x5fbdb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7421e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = arg1
void* var_68 = edx
int32_t var_6c = arg2
int32_t ecx = arg2 * 3
int32_t eax_4 = *(edx + 0xc)
int32_t edi = *(eax_4 + (ecx << 2) + 4)
int32_t* ebx_1 = eax_4 + (ecx << 2)
int32_t* esi = *ebx_1

if (esi != edi)
    do
        (**esi)(0)
        esi = &esi[0xe]
    while (esi != edi)
    
    edx = var_68

ebx_1[1] = *ebx_1
sub_5fc660(*(edx + 0xc) + var_6c * 0xc, arg3)
int32_t result_1 = 0xf
int32_t var_50 = 0
char var_60 = 0
int32_t var_8_1 = 0
int32_t ebx_2 = var_6c
int32_t eax_10
int32_t edx_1
edx_1:eax_10 = muls.dp.d(0x66666667, *(arg4 + 0x68) - *(arg4 + 0x64))
int32_t edx_2 = edx_1 s>> 4
void* edx_3 = arg4

if (ebx_2 u< (edx_2 u>> 0x1f) + edx_2)
    void** eax_15 = *(edx_3 + 0x64) + ebx_2 * 0x28
    
    if (&var_60 != eax_15)
        sub_403590(&var_60, eax_15, 0, 0xffffffff)
        ebx_2 = var_6c
        edx_3 = arg4

int32_t ecx_8 = ebx_2 * 3
int32_t var_70 = 0
int32_t eax_17 = *(var_68 + 0xc)
void* esi_1 = *(eax_17 + (ecx_8 << 2))
int32_t edi_1 = *(eax_17 + (ecx_8 << 2) + 4)

if (esi_1 != edi_1)
    int32_t var_74_1 = 0
    void* var_68_1 = esi_1 + 8
    
    while (true)
        int32_t eax_19
        int32_t edx_4
        edx_4:eax_19 = muls.dp.d(0x66666667, *(edx_3 + 0x68) - *(edx_3 + 0x64))
        int32_t edx_5 = edx_4 s>> 4
        int32_t eax_22 = (edx_5 u>> 0x1f) + edx_5
        void* ebx_3
        
        if (ebx_2 u< eax_22)
            void* ebx_5 = *(arg4 + 0x64) + ebx_2 * 0x28
            int32_t eax_24
            int32_t edx_6
            edx_6:eax_24 = muls.dp.d(0x2aaaaaab, *(ebx_5 + 0x1c) - *(ebx_5 + 0x18))
            int32_t edx_7 = edx_6 s>> 3
            eax_22 = (edx_7 u>> 0x1f) + edx_7
            
            if (var_70 u< eax_22)
                ebx_3 = *(ebx_5 + 0x18) + var_74_1
            else
                ebx_3 = nullptr
        else
            ebx_3 = nullptr
        
        char* ebx_7
        char var_48
        int32_t var_34
        char var_30
        int32_t var_1c
        
        if (ebx_3 == 0)
            var_1c = 0xf
            int32_t var_20_2 = 0
            var_30 = 0
            sub_403490(&var_30, "HLL[%d, %d]", 0xb)
            var_8_1.b = 3
            void** eax_34 = sub_5fcca0(&var_6c, &var_30, &var_48, &var_6c, var_70)
            ebx_7 = var_68_1
            var_8_1.b = 4
            
            if (ebx_7 != eax_34)
                sub_403590(ebx_7, eax_34, 0, 0xffffffff)
            
            if (var_34 u>= 0x10)
                sub_403160(var_48.d, var_34 + 1, 1)
            
            var_8_1.b = 0
            var_34 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            
            if (var_1c u>= 0x10)
                int32_t var_8c_4 = 1
                sub_403160(var_30.d, var_1c + 1, 1)
        else
            int32_t* eax_27 = sub_4175e0(eax_22, &var_60, &var_48, U".")
            var_8_1.b = 1
            char* eax_28 = sub_417750(eax_27, eax_27, &var_30, ebx_3 + 4)
            ebx_7 = var_68_1
            var_8_1.b = 2
            
            if (ebx_7 != eax_28)
                sub_403590(ebx_7, eax_28, 0, 0xffffffff)
            
            if (var_1c u>= 0x10)
                sub_403160(var_30.d, var_1c + 1, 1)
            
            var_8_1.b = 0
            var_1c = 0xf
            int32_t var_20_1 = 0
            var_30 = 0
            
            if (var_34 u>= 0x10)
                int32_t var_8c_2 = 1
                sub_403160(var_48.d, var_34 + 1, 1)
        var_70 += 1
        esi_1 += 0x38
        var_74_1 += 0x30
        var_68_1 = &ebx_7[0x38]
        
        if (esi_1 == edi_1)
            break
        
        ebx_2 = var_6c
        edx_3 = arg4

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_60.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
