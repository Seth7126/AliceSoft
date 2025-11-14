// 函数: sub_636850
// 地址: 0x636850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_1 = *(arg1 + 8)
int32_t j_2 = *(arg1 + 4)
void* eax_5 = (i_1 & 1) + i_1
void* result_1 = (j_2 & 1) + j_2
char* var_18
sub_448e90(&var_18, eax_5 * result_1)
int32_t var_4 = 0
char* esi_1 = var_18
int32_t var_14
void* result

if (sub_636960(esi_1, var_14 - esi_1, *(arg1 + 0x1c), *(arg1 + 0x24)).b != 0)
    sub_636c90(&var_18, result_1, eax_5)
    int32_t* edi_2 = arg2
    void* esi_2 = (*(*edi_2 + 8))(0, 0)
    arg2 = (*(*edi_2 + 0x1c))(eax_2) - (j_2 << 2)
    
    if (i_1 s> 0)
        char* edi_3 = var_18
        result = result_1
        int32_t i
        
        do
            char* ecx_4 = edi_3
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    result.b = *ecx_4
                    ecx_4 = &ecx_4[1]
                    *(esi_2 + 3) = result.b
                    esi_2 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                result = result_1
            
            esi_2 += arg2
            edi_3 += result
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    esi_1 = var_18
    i_1.b = 1
else
    i_1.b = 0

if (esi_1 != 0)
    j__free(esi_1)

result.b = i_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
