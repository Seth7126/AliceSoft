// 函数: sub_4f1a70
// 地址: 0x4f1a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7360d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_4a9e10(&arg1[4], arg2)
int32_t* result_1 = nullptr
int32_t edi = 0
int32_t var_28 = 0
int32_t var_1c = 0
int32_t var_18 = 0
var_8_1.b = 1
int32_t* esi_1 = arg1[7]
void* eax_3 = *esi_1
void* var_14 = eax_3

if (eax_3 != esi_1)
    do
        sub_5266e0(*(eax_3 + 0x14), &result_1)
        sub_429080(&var_14)
        eax_3 = var_14
    while (eax_3 != esi_1)
    
    edi = var_1c
    var_28 = var_18

sub_6ca100(arg2, (edi - result_1) s>> 2)
int32_t* result_2 = result_1
int32_t edx
void* ebx

if (result_2 == edi)
label_4f1bbb:
    ebx.b = 1
else
    while (true)
        int32_t edi_1 = *result_2
        int32_t var_40_3 = edi_1
        void* eax_8
        eax_8, edx = sub_4f15e0(arg1)
        
        if (eax_8 != 0)
            edx = *(eax_8 + 8)
            
            if (edi_1 s>= edx && *(eax_8 + 4) + edx s> edi_1)
                void* edi_3 = *(*(eax_8 + 0xc) + ((edi_1 - edx) << 2))
                
                if (edi_3 != 0)
                    var_14 = edi_3
                    
                    if (arg3 == 0)
                        sub_6d090a()
                        noreturn
                    
                    ebx.b = (*(*arg3 + 8))(&var_14)
                    int32_t ecx_8
                    ecx_8.b = ebx.b != 0
                    sub_6ca100(arg2, ecx_8)
                    
                    if (ebx.b != 0)
                        sub_6ca100(arg2, *result_2)
                        char eax_13
                        eax_13, edx = sub_504370(edi_3 + 0x84, arg2)
                        char eax_18
                        
                        if (eax_13 != 0)
                            sub_6ca100(arg2, (*(**(edi_3 + 0x74) + 0xc))(eax_2))
                            eax_18, edx = (*(**(edi_3 + 0x74) + 0x54))(arg2)
                        
                        if (eax_13 == 0 || eax_18 == 0)
                            ebx.b = 0
                            break
        
        result_2 = &result_2[1]
        
        if (result_2 == var_1c)
            goto label_4f1bbb

int32_t* result = result_1

if (result != 0)
    result, edx = sub_403160(result, (var_28 - result) s>> 2, 4)

int32_t var_8_2 = 2

if (arg3 != 0)
    void arg_8
    edx.b = arg3 != &arg_8
    (*(*arg3 + 0x10))(zx.d(edx.b))

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
