// 函数: sub_440750
// 地址: 0x440750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = nullptr
char* eax_3 = nullptr
int32_t esi = 0
char* var_18 = nullptr
char* var_14 = nullptr
int32_t var_10 = 0
int32_t var_4 = 0
int32_t* i

do
    int32_t edx_1 = *arg2
    *arg2 = edx_1 + 1
    i = *(*arg1 + (edx_1 << 2))
    char var_19 = i.b
    
    if (&var_19 u>= eax_3 || edi u> &var_19)
        if (eax_3 == esi && esi - eax_3 u< 1)
            if (edi - eax_3 - 1 u< 1)
                sub_69a551("vector<T> too long")
                noreturn
            
            void* esi_3 = esi - edi
            uint32_t edx_5 = esi_3 u>> 1
            uint32_t esi_4
            
            if (0xffffffff - edx_5 u>= esi_3)
                esi_4 = esi_3 + edx_5
            else
                esi_4 = 0
            
            if (esi_4 u< eax_3 - edi + 1)
                esi_4 = eax_3 - edi + 1
            
            sub_403640(&var_18, esi_4)
            esi = var_10
            eax_3 = var_14
            edi = var_18
        
        if (eax_3 != 0)
            *eax_3 = i.b
    else
        void* ebx_1 = &var_19 - edi
        
        if (eax_3 == esi && esi - eax_3 u< 1)
            if (edi - eax_3 - 1 u< 1)
                sub_69a551("vector<T> too long")
                noreturn
            
            void* esi_1 = esi - edi
            uint32_t edx_3 = esi_1 u>> 1
            void* esi_2
            
            if (0xffffffff - edx_3 u>= esi_1)
                esi_2 = esi_1 + edx_3
            else
                esi_2 = nullptr
            
            if (esi_2 u< eax_3 - edi + 1)
                esi_2 = eax_3 - edi + 1
            
            sub_403640(&var_18, esi_2)
            esi = var_10
            eax_3 = var_14
            edi = var_18
        
        if (eax_3 != 0)
            char* ecx_4
            ecx_4.b = *(edi + ebx_1)
            *eax_3 = ecx_4.b
    
    eax_3 = &eax_3[1]
    var_14 = eax_3
while (i != 0)

void* ecx_18

if (*edi != i.b)
    char* ecx_19 = edi
    
    do
        eax_3.b = *ecx_19
        ecx_19 = &ecx_19[1]
    while (eax_3.b != 0)
    
    ecx_18 = ecx_19 - &ecx_19[1]
else
    ecx_18 = nullptr

sub_402110(arg3, edi, ecx_18)
j__free(edi)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
