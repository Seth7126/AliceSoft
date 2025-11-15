// 函数: sub_4f2660
// 地址: 0x4f2660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e9b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i_1
sub_4275f0(&i_1, *(arg1 + 0xc) + 0xc0)
int32_t var_8_1 = 0
void* ecx_1 = *(arg1 + 0xc)
int32_t* i = i_1
*(ecx_1 + 0xc4) = *(ecx_1 + 0xc0)
int32_t var_20

for (; i != var_20; i = &i[1])
    void* edi_1 = *i
    void* var_38_1 = edi_1
    void* eax_6 = sub_4f15e0(*(arg1 + 8))
    
    if (eax_6 != 0)
        int32_t edx_1 = *(eax_6 + 8)
        
        if (edi_1 s>= edx_1 && *(eax_6 + 4) + edx_1 s> edi_1)
            int32_t eax_7
            eax_7.b = *(*(eax_6 + 0xc) + ((edi_1 - edx_1) << 2)) != 0
            
            if (eax_7.b != 0 && sub_4f2400(arg1, edi_1) != 0)
                sub_504200(*(arg1 + 0xc), edi_1)

int32_t* result = sub_4274a0(&i_1, *(arg1 + 0xc) + 0xc0)
int32_t* i_2 = i_1
int32_t ebx_1 = 0
uint32_t ecx_13 = (var_20 - i_2 + 3) u>> 2

if (i_2 u> var_20)
    ecx_13 = 0

int32_t* i_3 = i_2

if (ecx_13 != 0)
    do
        int32_t edi_2 = *i_3
        int32_t var_38_5 = edi_2
        result = sub_4f14d0(*(arg1 + 8))
        int32_t* result_1 = result
        
        if (result_1 != 0)
            result = result_1[2]
            
            if (edi_2 s>= result && result_1[1] + result s> edi_2)
                result = *(result_1[3] + ((edi_2 - result) << 2))
                
                if (result != 0)
                    result = sub_4f10a0(result)
                else
                    int32_t var_38_6 = edi_2
                    result = sub_526580(result_1)
                    
                    if (result != 0)
                        result = sub_4f10a0(result)
        
        ebx_1 += 1
        i_3 = &i_3[1]
    while (ebx_1 != ecx_13)
    
    i_2 = i_1

int32_t var_1c

if (i_2 != 0)
    result = sub_403160(i_2, (var_1c - i_2) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
