// 函数: sub_6ef4dd
// 地址: 0x6ef4dd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t (* var_c)(void* arg1) = sub_74a75b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_4 = __security_cookie ^ &__saved_ebp
void* const var_30_2 = &data_6ef4e9
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* esi = arg1 + 0x2c
char var_11 = 0
sub_6eaa5e(esi)
Concurrency::details::List<class Concurrency::details::SchedulerProxy,class Concurrency::details::CollectionTypes::Count>::Remove(
    arg1 + 0x60, arg2)
int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 0x18) u> 0)
    int32_t* ecx_3 = arg2[4] + 4
    
    do
        if (ecx_3[6] u> 0)
            int32_t j = 0
            int32_t j_1 = 0
            
            if (*ecx_3 u> 0)
                int32_t edx = 0
                
                do
                    int32_t* esi_1 = ecx_3[0xb]
                    
                    if (*(esi_1 + edx) == 4)
                        int32_t* eax = *(esi_1 + edx + 0x14)
                        *eax -= 1
                        j = j_1
                    
                    j += 1
                    edx += 0x34
                    j_1 = j
                while (j u< *ecx_3)
                
                i = i_1
        
        i += 1
        ecx_3 = &ecx_3[0xd]
        i_1 = i
    while (i u< *(arg1 + 0x18))
    
    esi = arg1 + 0x2c

if (arg2[0x21] == arg2[0x20])
    *(arg1 + 0x10) -= 1

*(arg1 + 8) -= 1

if (*(arg1 + 8) == 1)
    *(arg1 + 0x28) = 0
    var_11 = 1

int32_t var_8 = 0
sub_6eabaa(esi)
int32_t var_8_1 = 0xffffffff

if (var_11 != 0)
    SetEvent(*(arg1 + 0x50))

int32_t esi_2 = *(*arg2 + 0x20)
j_sub_4033e0()
int32_t result = esi_2(eax_4)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ef5ad
return result
