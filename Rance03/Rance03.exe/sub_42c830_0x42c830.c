// 函数: sub_42c830
// 地址: 0x42c830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b52c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result

if (*(arg1 + 0x6c) != 0)
label_42c8d5:
    int32_t edi_1 = 0
    *(arg1 + 0x2c) = *(arg1 + 0x28)
    int32_t eax_12
    int32_t ecx_6
    eax_12, ecx_6 = (*(**(arg1 + 0xc) + 0x14))(eax_4)
    
    if (eax_12 s> 0)
        void* ebp_1 = arg1 + 0x20
        int32_t eax_21
        
        do
            int32_t var_18_1 = 0xf
            int32_t* var_1c_1 = nullptr
            char var_2c = 0
            int32_t var_4 = 0
            char* edx_4 = (*(**(arg1 + 0xc) + 0x1c))(edi_1)
            
            if (edx_4 != 0)
                void* ecx_9
                
                if (*edx_4 != 0)
                    char* ecx_10 = edx_4
                    char* eax_14
                    
                    do
                        eax_14.b = *ecx_10
                        ecx_10 = &ecx_10[1]
                    while (eax_14.b != 0)
                    ecx_9 = ecx_10 - &ecx_10[1]
                else
                    ecx_9 = nullptr
                
                sub_402110(&var_2c, edx_4, ecx_9)
            
            void** eax_15
            int32_t* ecx_13
            eax_15, ecx_13 = sub_417ed0(ebp_1, &var_2c)
            void** esi_6 = eax_15
            
            if (esi_6 == *ebp_1)
            label_42c9af:
                int32_t* var_4c_7 = ecx_13
                char* var_30 = &var_2c
                char** var_50_2 = &var_30
                int32_t* eax_18 = sub_427ff0(ecx_13)
                sub_4280a0(ebp_1, &var_34, esi_6, &eax_18[4], eax_18)
                esi_6 = var_34
            else
                int32_t* edx_5 = &esi_6[4]
                int32_t* ebp_2 = edx_5[4]
                
                if (esi_6[9] u>= 0x10)
                    edx_5 = *edx_5
                
                int32_t* ecx_14 = &var_2c
                int32_t* eax_16 = ebp_2
                
                if (var_18_1 u>= 0x10)
                    ecx_14 = var_2c.d
                
                if (var_1c_1 u< ebp_2)
                    eax_16 = var_1c_1
                
                int32_t eax_17
                eax_17, ecx_13 = sub_405190(eax_16, edx_5, ecx_14, eax_16)
                bool cond:3_1 = eax_17 s< 0
                
                if (eax_17 == 0)
                    ecx_13 = var_1c_1
                    
                    if (ecx_13 u>= ebp_2)
                        eax_17.b = ecx_13 != ebp_2
                    else
                        eax_17 = 0xffffffff
                    
                    cond:3_1 = eax_17 s< 0
                
                eax_17.b = cond:3_1
                ebp_1 = arg1 + 0x20
                
                if (eax_17.b != 0)
                    goto label_42c9af
            
            int32_t var_4c_9 = edi_1
            esi_6[0xa] = edi_1
            sub_42e230(arg1)
            int32_t var_4_1 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                j__free(var_2c.d)
            
            edi_1 += 1
            eax_21 = (*(**(arg1 + 0xc) + 0x14))()
        while (edi_1 s< eax_21)
    
    void* eax_24 = sub_42f5b0(arg1, (*(**(arg1 + 0xc) + 0x14))())
    int32_t* ecx_21 = *(arg1 + 0xc)
    *(arg1 + 0x10) = eax_24
    *(arg1 + 0x14) = sub_42f6e0(arg1, (*(*ecx_21 + 0x14))())
    result.b = 1
else
    result = sub_427af0(arg1 + 0x34, arg2)
    
    if (result.b != 0)
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x40) - *(arg1 + 0x3c))
        int32_t edx_2 = edx_1 s>> 2
        sub_42f470(arg1 + 0x48, (edx_2 u>> 0x1f) + edx_2)
        int32_t* ecx_4 = *(arg1 + 0x48)
        int32_t edx_3 = 0
        uint32_t esi_4 = (*(arg1 + 0x4c) - ecx_4 + 3) u>> 2
        
        if (ecx_4 u> *(arg1 + 0x4c))
            esi_4 = 0
        
        if (esi_4 != 0)
            do
                edx_3 += 1
                *ecx_4 = 1
                ecx_4 = &ecx_4[1]
            while (edx_3 != esi_4)
        
        *(arg1 + 0x6c) = 1
        goto label_42c8d5

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
