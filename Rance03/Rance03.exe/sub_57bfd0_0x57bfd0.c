// 函数: sub_57bfd0
// 地址: 0x57bfd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6cd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

for (int32_t* i = *(arg1 + 0x4c); i != *(arg1 + 0x50); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

int32_t* arg_4
int32_t* ebp = arg_4
*(arg1 + 0x50) = *(arg1 + 0x4c)
int32_t* var_18 = nullptr
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x78787879, ebp[7] - ebp[6])
int32_t var_14 = 0
int32_t edx_1 = edx s>> 5
int32_t esi_2 = (edx_1 u>> 0x1f) + edx_1
int32_t* ecx_3 = sub_458460()
var_18 = ecx_3
int32_t edi = 0
int32_t var_4 = 0
int32_t var_24 = 0

if (esi_2 s> 0)
    do
        int32_t edx_3
        
        if (edi s>= 0)
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = muls.dp.d(0x78787879, ebp[7] - ebp[6])
            edx_3 = edx_2 s>> 5
        
        int32_t* eax_12
        
        if (edi s< 0 || edi s>= (edx_3 u>> 0x1f) + edx_3)
            eax_12 = 0xffffffff
        else
            eax_12 = *(ebp[6] + edi * 0x44 + 0x18)
        
        arg_4 = eax_12
        void* eax_13 = sub_457c80(&var_18, &arg_4)
        int32_t eax_14 = *(eax_13 + 4)
        int32_t ecx_10
        
        if (&var_24 u< eax_14)
            ecx_10 = *eax_13
        
        if (&var_24 u>= eax_14 || ecx_10 u> &var_24)
            if (eax_14 == *(eax_13 + 8))
                sub_415950(eax_13, 1)
            
            int32_t* eax_17 = *(eax_13 + 4)
            
            if (eax_17 != 0)
                *eax_17 = edi
        else
            if (eax_14 == *(eax_13 + 8))
                sub_415950(eax_13, 1)
            
            int32_t* ecx_12 = *(eax_13 + 4)
            
            if (ecx_12 != 0)
                *ecx_12 = *(*eax_13 + ((&var_24 - ecx_10) s>> 2 << 2))
        
        *(eax_13 + 4) += 4
        edi += 1
        var_24 = edi
    while (edi s< esi_2)
    
    ecx_3 = var_18

int32_t* i_2 = *ecx_3
void* ebx

while (i_2 != ecx_3)
    int32_t* i_1 = i_2[5]
    
    if (i_1 != i_2[6])
        do
            if (sub_57c1e0(arg1, ebp, *i_1) == 0)
                ecx_3 = var_18
                ebx.b = 0
                goto label_57c1a4
            
            i_1 = &i_1[1]
        while (i_1 != i_2[6])
        
        ecx_3 = var_18
    
    if (*(i_2 + 0xd) == 0)
        int32_t* i_3 = i_2[2]
        
        if (*(i_3 + 0xd) != 0)
            int32_t* i_5 = i_2[1]
            
            if (*(i_5 + 0xd) == 0)
                while (i_2 == i_5[2])
                    i_2 = i_5
                    i_5 = i_5[1]
                    
                    if (*(i_5 + 0xd) != 0)
                        break
            
            i_2 = i_5
        else
            i_2 = i_3
            int32_t* i_4 = *i_2
            
            while (*(i_4 + 0xd) == 0)
                i_2 = i_4
                i_4 = *i_2

ebx.b = 1
label_57c1a4:
sub_457d00(&var_18, &arg_4, *ecx_3, ecx_3)
j__free(var_18)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
