// 函数: sub_44fec0
// 地址: 0x44fec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_58 = &fileimage::CFileImageMaker::`vftable'
char* var_54 = nullptr
void* var_50 = nullptr
int32_t var_4c = 0
int32_t var_4 = 0
int32_t ebx = *(arg1 + 0x20)
uint8_t var_59 = ebx.b
sub_414b60(&var_54, &var_59)
var_59 = (ebx u>> 8).b
sub_414b60(&var_54, &var_59)
var_59 = (ebx u>> 0x10).b
sub_414b60(&var_54, &var_59)
var_59 = (ebx u>> 0x18).b
sub_414b60(&var_54, &var_59)
int32_t* eax_11 = *(arg1 + 0x1c)
void* esi = *eax_11
void* var_34 = esi
struct IDecompressor::nutria::CZlibDecompressor::VTable** result
uint32_t ebx_1
char* edi_2

if (esi == eax_11)
label_4502f2:
    struct commonsystemdata::CZlibCompressor::VTable* const var_3c_4 =
        &commonsystemdata::CZlibCompressor::`vftable'
    int32_t var_38_1 = 0
    var_4.b = 2
    result = sub_620e90(0x6db8a0)
    edi_2 = var_54
    struct IDecompressor::nutria::CZlibDecompressor::VTable** result_1 = result
    void* ebp_5
    
    if (result != 0)
        ebp_5 = var_50 - edi_2
        ebx_1 = (*result)->vFunc_2(edi_2, ebp_5)
    
    if (result == 0 || ebx_1 == 0)
        ebx_1.b = 0
    else
        sub_403540(arg2, (*(*ebx_1 + 0x14))(eax_4))
        int32_t* eax_31 = *arg2
        
        if (eax_31 != arg2[1])
            sub_69d850(eax_31, (*(*ebx_1 + 0x18))((*(*ebx_1 + 0x14))()))
        
        *arg3 = ebp_5
        (*(*ebx_1 + 4))()
        ebx_1.b = 1
    
    var_4.b = 0
    
    if (result != 0)
        (*result)->vFunc_1(eax_4)
else
    char var_43 = 0
    
    while (true)
        int32_t eax_12 = *(esi + 0x24)
        void* ecx_4 = esi + 0x10
        int32_t edi_1 = *(ecx_4 + 0x10)
        void* edx_1
        
        if (eax_12 u< 0x10)
            edx_1 = ecx_4
        else
            edx_1 = *ecx_4
        
        if (eax_12 u>= 0x10)
            ecx_4 = *ecx_4
        
        void* var_78_4 = arg1
        sub_468ff0(&var_54, var_50, ecx_4, edx_1 + edi_1)
        void* ecx_6 = var_50
        edi_2 = var_54
        int32_t edx_2
        
        if (&var_43 u>= ecx_6 || edi_2 u> &var_43)
            edx_2 = var_4c
            
            if (ecx_6 == edx_2)
                sub_403590(&var_54, 1)
                edx_2 = var_4c
                ecx_6 = var_50
                edi_2 = var_54
            
            if (ecx_6 != 0)
                *ecx_6 = 0
        else
            edx_2 = var_4c
            void* ebx_3 = &var_43 - edi_2
            
            if (ecx_6 == edx_2)
                sub_403590(&var_54, 1)
                edx_2 = var_4c
                ecx_6 = var_50
                edi_2 = var_54
            
            if (ecx_6 != 0)
                *ecx_6 = *(edi_2 + ebx_3)
        
        int32_t ebx_4 = *(esi + 0x2c)
        void* ecx_9 = ecx_6 + 1
        char var_42 = ebx_4.b
        
        if (&var_42 u>= ecx_9 || edi_2 u> &var_42)
            if (ecx_9 == edx_2)
                sub_403590(&var_54, 1)
                edx_2 = var_4c
                edi_2 = var_54
            
            if (ecx_9 != 0)
                *ecx_9 = ebx_4.b
        else
            int32_t ebp_1 = &var_42 - edi_2
            
            if (ecx_9 == edx_2)
                sub_403590(&var_54, 1)
                edx_2 = var_4c
                edi_2 = var_54
            
            if (ecx_9 != 0)
                *ecx_9 = edi_2[ebp_1]
        
        void* ecx_13 = ecx_9 + 1
        uint32_t eax_17 = ebx_4 u>> 8
        char var_44 = eax_17.b
        
        if (&var_44 u>= ecx_13 || edi_2 u> &var_44)
            if (ecx_13 == edx_2)
                sub_403590(&var_54, 1)
                edx_2 = var_4c
                edi_2 = var_54
            
            if (ecx_13 != 0)
                *ecx_13 = eax_17.b
        else
            int32_t ebp_2 = &var_44 - edi_2
            
            if (ecx_13 == edx_2)
                sub_403590(&var_54, 1)
                edx_2 = var_4c
                edi_2 = var_54
            
            if (ecx_13 != 0)
                eax_17.b = edi_2[ebp_2]
                *ecx_13 = eax_17.b
        
        void* ecx_16 = ecx_13 + 1
        uint32_t eax_19 = ebx_4 u>> 0x10
        char var_41 = eax_19.b
        
        if (&var_41 u>= ecx_16 || edi_2 u> &var_41)
            if (ecx_16 == edx_2)
                sub_403590(&var_54, 1)
                edx_2 = var_4c
                edi_2 = var_54
            
            if (ecx_16 != 0)
                *ecx_16 = eax_19.b
        else
            int32_t ebp_3 = &var_41 - edi_2
            
            if (ecx_16 == edx_2)
                sub_403590(&var_54, 1)
                edx_2 = var_4c
                edi_2 = var_54
            
            if (ecx_16 != 0)
                eax_19.b = edi_2[ebp_3]
                *ecx_16 = eax_19.b
        
        char* ecx_19 = ecx_16 + 1
        ebx_1 = ebx_4 u>> 0x18
        char var_45 = ebx_1.b
        
        if (&var_45 u>= ecx_19 || edi_2 u> &var_45)
            if (ecx_19 == edx_2)
                sub_403590(&var_54, 1)
                edi_2 = var_54
            
            if (ecx_19 != 0)
                *ecx_19 = ebx_1.b
        else
            ebx_1 = &var_45 - edi_2
            
            if (ecx_19 == edx_2)
                sub_403590(&var_54, 1)
                edi_2 = var_54
            
            if (ecx_19 != 0)
                *ecx_19 = edi_2[ebx_1]
        
        var_50 = &ecx_19[1]
        int32_t ebx_5
        
        switch (*(esi + 0x2c) - 1)
            case nullptr
                if (*(esi + 0x2c) == 1)
                    ebx_5 = *(esi + 0x30)
                label_450287:
                    var_59 = ebx_5.b
                    sub_414b60(&var_54, &var_59)
                    var_59 = (ebx_5 u>> 8).b
                    sub_414b60(&var_54, &var_59)
                    var_59 = (ebx_5 u>> 0x10).b
                    sub_414b60(&var_54, &var_59)
                    var_59 = (ebx_5 u>> 0x18).b
                    sub_414b60(&var_54, &var_59)
                label_4502dc:
                    sub_418380(&var_34)
                    esi = var_34
                    
                    if (esi == *(arg1 + 0x1c))
                        goto label_4502f2
                    
                    continue
            case 1
                if (*(esi + 0x2c) == 2)
                    ebx_5 = *(esi + 0x34)
                    goto label_450287
            case 2
                int32_t var_14_1 = 0xf
                int32_t var_18_1 = 0
                char var_28 = 0
                var_4.b = 1
                
                if (*(esi + 0x2c) == 3)
                    if (&var_28 != esi + 0x38)
                        sub_401ff0(&var_28, esi + 0x38, 0, 0xffffffff)
                    
                    sub_468f70(&var_58, &var_28)
                    var_4.b = 0
                    
                    if (var_14_1 u>= 0x10)
                        j__free(var_28.d)
                    
                    goto label_4502dc
            case 3
                if (*(esi + 0x2c) == 4)
                    result.b = *(esi + 0x50)
                    ebx_5.b = result.b != 0
                    goto label_450287
        
        ebx_1.b = 0
        break

if (edi_2 != 0)
    j__free(edi_2)

result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
