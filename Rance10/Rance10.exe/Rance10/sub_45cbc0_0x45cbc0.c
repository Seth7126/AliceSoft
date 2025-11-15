// 函数: sub_45cbc0
// 地址: 0x45cbc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bcc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_1 = *(arg1 + 8)
int32_t i_1 = *(arg1 + 0xc)
void* ecx = result_1 + (result_1 & 1)
void* eax_5 = (i_1 & 1) + i_1
void* var_34
sub_431b80(&var_34, eax_5 * ecx * 3)
int32_t var_8_1 = 0
void* edi = var_34
void* result = sub_45ce50(*(arg1 + 0x1c), *(arg1 + 0x24))

if (result.b != 0)
    var_8_1.b = 1
    void* var_28
    sub_45d080(sub_45cee0(result, &var_34, &var_28, ecx, eax_5), ecx, &var_28, eax_5)
    void* esi_2 = (*(*arg2 + 8))(0, 0)
    result = result_1
    int32_t* edx_7 = (*(*arg2 + 0x1c))(eax_2) - (result << 2)
    void* edx_8 = var_28
    
    if (i_1 s> 0)
        void* edi_3 = nullptr
        int32_t i
        
        do
            void* ecx_8 = edi_3 + edx_8
            
            if (result s> 0)
                void* edx_9 = result
                void* j
                
                do
                    result.b = *(ecx_8 + 2)
                    ecx_8 += 3
                    *esi_2 = result.b
                    result.b = *(ecx_8 - 2)
                    *(esi_2 + 1) = result.b
                    result.b = *(ecx_8 - 3)
                    *(esi_2 + 2) = result.b
                    *(esi_2 + 3) = 0xff
                    esi_2 += 4
                    j = edx_9
                    edx_9 -= 1
                while (j != 1)
                result = result_1
            
            esi_2 += edx_7
            edx_8 = var_28
            edi_3 += ecx * 3
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    i_1.b = 1
    
    if (edx_8 != 0)
        int32_t var_20
        sub_403160(edx_8, var_20 - edx_8, 1)
        var_28 = nullptr
        int32_t var_24_1 = 0
        int32_t var_20_1 = 0
    
    edi = var_34
else
    i_1.b = 0

int32_t var_2c

if (edi != 0)
    sub_403160(edi, var_2c - edi, 1)
result.b = i_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
