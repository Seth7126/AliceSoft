// 函数: sub_4a6540
// 地址: 0x4a6540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bca68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* const var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
void* ebx
void* var_70 = ebx
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_6c = arg2
int32_t* var_68 = nullptr
int32_t var_64 = 0
int32_t* eax_5
int32_t ecx
eax_5, ecx = sub_4a6eb0()
var_68 = eax_5
int32_t var_c_1 = 0
uint32_t var_80 = zx.d(data_75dd29)
int32_t* var_84 = &var_6c
void** var_60
sub_4a6ee0(&var_68, &var_60, ecx)
int32_t var_80_1 = *(arg2 + 0x2c)
char var_4c
sub_4691f0(&var_4c, 0x6e0658)
var_c_1.b = 1
void* const esi_1 = *(arg1 + 4)
var_6c = esi_1
int32_t var_38

if (esi_1 == 0)
label_4a6714:
    ebx.b = 0
else
    while (true)
        int32_t var_80_2 = *(esi_1 + 0x2c)
        var_c_1.b = 2
        int32_t var_34
        sub_403110(&var_4c, sub_4691f0(&var_34, " -> %d"), nullptr, 0xffffffff)
        var_c_1.b = 1
        int32_t var_20
        
        if (var_20 u>= 0x10)
            j__free(var_34)
        
        int32_t* edx_1 = var_68
        void** ecx_3 = edx_1
        void** eax_8 = edx_1[1]
        
        if (*(eax_8 + 0xd) == 0)
            do
                if (eax_8[4] u>= esi_1)
                    ecx_3 = eax_8
                    eax_8 = *eax_8
                else
                    eax_8 = eax_8[2]
            while (*(eax_8 + 0xd) == 0)
            
            if (ecx_3 != edx_1 && esi_1 u>= ecx_3[4])
                sub_4057c0(&var_4c, 0x6e0668, 3)
                char* eax_19 = &var_4c
                
                if (var_38 u>= 0x10)
                    eax_19 = var_4c.d
                
                char* var_80_8 = eax_19
                sub_64b530(0x6e066c)
                ebx.b = 1
                break
        
        uint32_t var_80_4 = zx.d(data_75dd29)
        void** var_84_1 = &var_6c
        int32_t** var_54
        sub_4a6ee0(&var_68, &var_54, ecx_3)
        int32_t edi_1 = *(*(*(esi_1 + 0x50) + 0x58) + 0x90)
        
        if (edi_1 s<= 0)
            esi_1 = nullptr
        else
            int32_t esi_4 = edi_1 s/ 0x2710
            void** edx_4 = *(*(esi_1 + 0x54) + 0x1c)
            void** ecx_5 = edx_4
            void** eax_13 = edx_4[1]
            
            while (*(eax_13 + 0xd) == 0)
                if (eax_13[4] s>= esi_4)
                    ecx_5 = eax_13
                    eax_13 = *eax_13
                else
                    eax_13 = eax_13[2]
            
            void** eax_14
            
            if (ecx_5 == edx_4 || esi_4 s< ecx_5[4])
                var_60 = edx_4
                eax_14 = &var_60
            else
                void** var_58 = ecx_5
                eax_14 = &var_58
            
            void* eax_15 = *eax_14
            
            if (eax_15 == edx_4)
                esi_1 = nullptr
            else
                void* ecx_6 = *(eax_15 + 0x14)
                
                if (ecx_6 == 0)
                    esi_1 = nullptr
                else
                    int32_t edx_5 = *(ecx_6 + 8)
                    
                    if (edi_1 s< edx_5 || *(ecx_6 + 4) + edx_5 s<= edi_1)
                        esi_1 = nullptr
                    else
                        esi_1 = *(*(ecx_6 + 0xc) + ((edi_1 - edx_5) << 2))
        
        var_6c = esi_1
        
        if (esi_1 == 0)
            goto label_4a6714

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t** ecx_7 = var_68
int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0
sub_4200d0(&var_68, &var_60, *ecx_7, ecx_7)
j__free(var_68)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
