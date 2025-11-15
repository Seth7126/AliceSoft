// 函数: sub_45cd30
// 地址: 0x45cd30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a3a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_1 = *(arg1 + 8)
int32_t i_1 = *(arg1 + 0xc)
void* edi_2 = (result_1 & 1) + result_1
void* eax_5 = (i_1 & 1) + i_1
void* var_28
sub_431b80(&var_28, eax_5 * edi_2)
int32_t var_8_1 = 0
void* esi_1 = var_28
void* result = sub_45ce50(*(arg1 + 0x20), *(arg1 + 0x28))

if (result.b != 0)
    sub_45d190(result, edi_2, &var_28, eax_5)
    void* esi_2 = (*(*arg2 + 8))(0, 0)
    result = result_1
    int32_t* edx_4 = (*(*arg2 + 0x1c))(eax_2) - (result << 2)
    arg2 = edx_4
    
    if (i_1 s> 0)
        void* edi_4 = var_28
        int32_t i
        
        do
            void* ecx_6 = edi_4
            
            if (result s> 0)
                void* edx_5 = result
                void* j
                
                do
                    result.b = *ecx_6
                    ecx_6 += 1
                    *(esi_2 + 3) = result.b
                    esi_2 += 4
                    j = edx_5
                    edx_5 -= 1
                while (j != 1)
                result = result_1
                edx_4 = arg2
            
            edi_4 += edi_2
            esi_2 += edx_4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    esi_1 = var_28
    i_1.b = 1
else
    i_1.b = 0

int32_t var_20

if (esi_1 != 0)
    sub_403160(esi_1, var_20 - esi_1, 1)
result.b = i_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
