// 函数: sub_473910
// 地址: 0x473910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9c20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t* var_88 = ebx
int32_t var_64 = 0xf
int32_t var_68 = 0
char var_78 = 0
sub_402110(&var_78, "SoundInfo", 9)
int32_t var_4 = 0
char* ecx_1 = &var_78

if (var_64 u>= 0x10)
    ecx_1 = var_78.d

int32_t result

if ((*(*ebx + 0x2c))(ecx_1).b != 0)
    struct IString::common::CStringWrapper::VTable* const var_60 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    char var_5c_1 = 0
    var_4.b = 1
    char* ecx_3 = &var_78
    
    if (var_64 u>= 0x10)
        ecx_3 = var_78.d
    
    result = (*(*ebx + 0xc))(ecx_3)
    int32_t edi_1 = 0
    int32_t var_8c_1 = 0
    
    if (result s> 0)
        int32_t* ebp_1 = arg1 + 8
        int32_t* var_90_1 = ebp_1
        
        do
            char* ecx_5 = &var_78
            
            if (var_64 u>= 0x10)
                ecx_5 = var_78.d
            
            (*(*ebx + 0x6c))(ecx_5, edi_1, 0, &var_60)
            char* eax_10
            char ecx_7
            eax_10, ecx_7 = var_60->data(eax_4)
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            char var_44 = 0
            void* eax_11
            
            if (*eax_10 != 0)
                char* eax_12 = eax_10
                char i
                
                do
                    i = *eax_12
                    eax_12 = &eax_12[1]
                while (i != 0)
                eax_11 = eax_12 - &eax_12[1]
            else
                eax_11 = nullptr
            
            sub_402110(&var_44, eax_10, eax_11)
            var_4.b = 2
            char var_2c
            char* eax_13 = sub_402d30(&var_2c, &var_44)
            var_4.b = 3
            void** eax_14
            int32_t** ecx_11
            eax_14, ecx_11 = sub_417ed0(ebp_1, eax_13)
            void** esi_2 = eax_14
            
            if (esi_2 == *ebp_1)
            label_473ae0:
                int32_t** var_ac_6 = ecx_11
                char* var_84 = eax_13
                char** var_b0_2 = &var_84
                int32_t* eax_17 = sub_473e50(ecx_11)
                void** var_80
                sub_4719b0(ebp_1, &var_80, esi_2, &eax_17[4], eax_17)
                esi_2 = var_80
            else
                int32_t* edx_3 = &esi_2[4]
                int32_t ebp_2 = edx_3[4]
                
                if (esi_2[9] u>= 0x10)
                    edx_3 = *edx_3
                
                int32_t ebx_1 = *(eax_13 + 0x10)
                char* ecx_12
                
                if (*(eax_13 + 0x14) u< 0x10)
                    ecx_12 = eax_13
                else
                    ecx_12 = *eax_13
                
                int32_t eax_15 = ebp_2
                
                if (ebx_1 u< ebp_2)
                    eax_15 = ebx_1
                
                int32_t eax_16
                eax_16, ecx_11 = sub_405190(eax_15, edx_3, ecx_12, eax_15)
                bool cond:10_1 = eax_16 s< 0
                
                if (eax_16 == 0)
                    if (ebx_1 u>= ebp_2)
                        eax_16.b = ebx_1 != ebp_2
                    else
                        eax_16 = 0xffffffff
                    
                    cond:10_1 = eax_16 s< 0
                
                ebp_1 = var_90_1
                eax_16.b = cond:10_1
                
                if (eax_16.b != 0)
                    goto label_473ae0
            
            int32_t var_18
            
            if (var_18 u>= 0x10)
                j__free(var_2c.d)
            
            var_4.b = 1
            var_18 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            
            if (var_30_1 u>= 0x10)
                j__free(var_44.d)
            
            ebx = var_88
            char* ecx_15 = &var_78
            
            if (var_64 u>= 0x10)
                ecx_15 = var_78.d
            
            esi_2[0xa] = (*(*ebx + 0x64))(ecx_15, var_8c_1, 2)
            char* ecx_17 = &var_78
            
            if (var_64 u>= 0x10)
                ecx_17 = var_78.d
            
            esi_2[0xb] = (*(*ebx + 0x64))(ecx_17, var_8c_1, 3)
            char* ecx_19 = &var_78
            
            if (var_64 u>= 0x10)
                ecx_19 = var_78.d
            
            edi_1 = var_8c_1 + 1
            esi_2[0xc] = (*(*ebx + 0x64))(ecx_19, var_8c_1, 1)
            var_8c_1 = edi_1
        while (edi_1 s< result)
    
    ebx.b = 1
    var_60 = &common::CStringWrapper::`vftable'{for `IString'}
    
    if (var_48_1 u>= 0x10)
        j__free(var_5c_1.d)
    
    int32_t var_48_2 = 0xf
    int32_t var_4c_2 = 0
    char var_5c_2 = 0
else
    ebx.b = 0

if (var_64 u>= 0x10)
    j__free(var_78.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
