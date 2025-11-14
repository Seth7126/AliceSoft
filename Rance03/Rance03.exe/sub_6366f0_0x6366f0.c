// 函数: sub_6366f0
// 地址: 0x6366f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce610
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_1 = *(arg1 + 8)
int32_t j_2 = *(arg1 + 4)
int32_t eax_5 = (i_1 & 1) + i_1
int32_t edi_2 = (j_2 & 1) + j_2
uint32_t eax_7 = eax_5 * edi_2 * 3
int32_t result_1
sub_448e90(&result_1, eax_7)
int32_t var_4 = 0
int32_t result_2 = result_1
int32_t var_14

if (sub_636960(result_2, var_14 - result_2, *(arg1 + 0x18), *(arg1 + 0x20)) != 0)
    void* var_24
    sub_448e90(&var_24, eax_7)
    var_4.b = 1
    sub_6369f0(&var_24, &result_1, edi_2, eax_5)
    sub_636b70(&var_24, edi_2, eax_5)
    void* esi_2 = (*(*arg2 + 8))(0, 0)
    int32_t eax_14 = (*(*arg2 + 0x1c))(eax_2)
    void* edx_1 = var_24
    
    if (i_1 s> 0)
        void* edi_4 = edx_1
        int32_t* eax_16 = edi_2 * 3
        arg2 = eax_16
        int32_t i
        
        do
            void* ecx_6 = edi_4
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    eax_16.b = *(ecx_6 + 2)
                    ecx_6 += 3
                    *esi_2 = eax_16.b
                    eax_16.b = *(ecx_6 - 2)
                    *(esi_2 + 1) = eax_16.b
                    eax_16.b = *(ecx_6 - 3)
                    *(esi_2 + 2) = eax_16.b
                    *(esi_2 + 3) = 0xff
                    esi_2 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                eax_16 = arg2
            
            esi_2 += eax_14 - (j_2 << 2)
            edi_4 += eax_16
            i = i_1
            i_1 -= 1
        while (i != 1)
        edx_1 = var_24
    
    i_1.b = 1
    
    if (edx_1 != 0)
        j__free(edx_1)
else
    i_1.b = 0

int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = i_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
