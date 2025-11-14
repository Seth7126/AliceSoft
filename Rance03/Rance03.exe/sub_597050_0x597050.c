// 函数: sub_597050
// 地址: 0x597050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c85a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t var_84 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_38 = edi
struct fileimage::CFileImageMaker::VTable* const var_6c = &fileimage::CFileImageMaker::`vftable'
char* result_1 = nullptr
void* var_64 = nullptr
int32_t var_60 = 0
int32_t var_c_1 = 0
int32_t var_20 = 0xf
void* var_24 = nullptr
char var_34 = 0
sub_402110(&var_34, 0x6e5d04, 3)
var_c_1.b = 1
char* esi = &var_34
char* edx = &var_34
int32_t var_5c
int32_t var_88 = var_5c

if (var_20 u>= 0x10)
    esi = var_34.d

if (var_20 u>= 0x10)
    edx = var_34.d

sub_468ff0(&result_1, nullptr, edx, var_24 + esi)
var_c_1.b = 0

if (var_20 u>= 0x10)
    j__free(var_34.d)

uint8_t var_6d = 0
sub_414b60(&result_1, &var_6d)
var_6d = 0
sub_414b60(&result_1, &var_6d)
var_6d = 0
sub_414b60(&result_1, &var_6d)
var_6d = 0
sub_414b60(&result_1, &var_6d)
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = muls.dp.d(0x2fa0be83, *(edi + 0xc) - *(edi + 8))
int32_t edx_2 = edx_1 s>> 5
int32_t ebx_2 = (edx_2 u>> 0x1f) + edx_2
var_6d = ebx_2.b
sub_414b60(&result_1, &var_6d)
var_6d = (ebx_2 u>> 8).b
sub_414b60(&result_1, &var_6d)
var_6d = (ebx_2 u>> 0x10).b
sub_414b60(&result_1, &var_6d)
var_6d = (ebx_2 u>> 0x18).b
sub_414b60(&result_1, &var_6d)
int32_t i = 0
int32_t eax_12
int32_t edx_3
edx_3:eax_12 = muls.dp.d(0x2fa0be83, *(edi + 0xc) - *(edi + 8))
int32_t i_2 = 0
int32_t edx_4 = edx_3 s>> 5

if ((edx_4 u>> 0x1f) + edx_4 s> 0)
    int32_t edx_6
    
    do
        char* ecx_15 = var_64
        char* result_2 = result_1
        void* eax_17 = i * 0xac + *(edi + 8)
        int32_t ebx_4
        ebx_4.b = *(eax_17 + 0x50) != 0
        char var_4a = ebx_4.b
        int32_t esi_1
        
        if (&var_4a u>= ecx_15 || result_2 u> &var_4a)
            esi_1 = var_60
            
            if (ecx_15 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                ecx_15 = var_64
                result_2 = result_1
            
            if (ecx_15 != 0)
                *ecx_15 = ebx_4.b
        else
            esi_1 = var_60
            void* edi_1 = &var_4a - result_2
            
            if (ecx_15 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                ecx_15 = var_64
                result_2 = result_1
            
            if (ecx_15 != 0)
                *ecx_15 = *(edi_1 + result_2)
        
        void* ecx_18 = &ecx_15[1]
        uint32_t eax_20 = ebx_4 u>> 8
        char var_49 = eax_20.b
        
        if (&var_49 u>= ecx_18 || result_2 u> &var_49)
            if (ecx_18 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_18 != 0)
                *ecx_18 = eax_20.b
        else
            char* edi_2 = &var_49 - result_2
            
            if (ecx_18 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_18 != 0)
                eax_20.b = *(edi_2 + result_2)
                *ecx_18 = eax_20.b
        
        void* ecx_21 = ecx_18 + 1
        uint32_t eax_22 = ebx_4 u>> 0x10
        char var_41 = eax_22.b
        
        if (&var_41 u>= ecx_21 || result_2 u> &var_41)
            if (ecx_21 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_21 != 0)
                *ecx_21 = eax_22.b
        else
            char* edi_3 = &var_41 - result_2
            
            if (ecx_21 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_21 != 0)
                eax_22.b = *(edi_3 + result_2)
                *ecx_21 = eax_22.b
        
        void* ecx_24 = ecx_21 + 1
        uint8_t ebx_5 = (ebx_4 u>> 0x18).b
        uint8_t var_46 = ebx_5
        
        if (&var_46 u>= ecx_24 || result_2 u> &var_46)
            if (ecx_24 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_24 != 0)
                *ecx_24 = ebx_5
        else
            void* edi_4 = &var_46 - result_2
            
            if (ecx_24 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_24 != 0)
                *ecx_24 = *(edi_4 + result_2)
        
        void* ecx_26 = ecx_24 + 1
        int32_t xmm0_1 = *(eax_17 + 0x54)
        char var_48 = xmm0_1.b
        
        if (&var_48 u>= ecx_26 || result_2 u> &var_48)
            if (ecx_26 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_26 != 0)
                *ecx_26 = xmm0_1.b
        else
            void* edi_5 = &var_48 - result_2
            
            if (ecx_26 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_26 != 0)
                *ecx_26 = *(edi_5 + result_2)
        
        void* ecx_30 = ecx_26 + 1
        uint32_t eax_27 = xmm0_1 u>> 8
        char var_52 = eax_27.b
        
        if (&var_52 u>= ecx_30 || result_2 u> &var_52)
            if (ecx_30 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_30 != 0)
                *ecx_30 = eax_27.b
        else
            char* edi_6 = &var_52 - result_2
            
            if (ecx_30 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_30 != 0)
                eax_27.b = *(edi_6 + result_2)
                *ecx_30 = eax_27.b
        
        void* ecx_33 = ecx_30 + 1
        uint32_t eax_29 = xmm0_1 u>> 0x10
        char var_45 = eax_29.b
        
        if (&var_45 u>= ecx_33 || result_2 u> &var_45)
            if (ecx_33 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_33 != 0)
                *ecx_33 = eax_29.b
        else
            char* edi_7 = &var_45 - result_2
            
            if (ecx_33 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_33 != 0)
                eax_29.b = *(edi_7 + result_2)
                *ecx_33 = eax_29.b
        
        void* ecx_36 = ecx_33 + 1
        uint8_t ebx_7 = (xmm0_1 u>> 0x18).b
        uint8_t var_50 = ebx_7
        
        if (&var_50 u>= ecx_36 || result_2 u> &var_50)
            if (ecx_36 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_36 != 0)
                *ecx_36 = ebx_7
        else
            void* edi_8 = &var_50 - result_2
            
            if (ecx_36 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_36 != 0)
                *ecx_36 = *(edi_8 + result_2)
        
        void* ecx_38 = ecx_36 + 1
        int32_t xmm0_2 = *(eax_17 + 0x58)
        char var_43 = xmm0_2.b
        
        if (&var_43 u>= ecx_38 || result_2 u> &var_43)
            if (ecx_38 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_38 != 0)
                *ecx_38 = xmm0_2.b
        else
            void* edi_9 = &var_43 - result_2
            
            if (ecx_38 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_38 != 0)
                *ecx_38 = *(edi_9 + result_2)
        
        void* ecx_42 = ecx_38 + 1
        uint32_t eax_34 = xmm0_2 u>> 8
        char var_4e = eax_34.b
        
        if (&var_4e u>= ecx_42 || result_2 u> &var_4e)
            if (ecx_42 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_42 != 0)
                *ecx_42 = eax_34.b
        else
            char* edi_10 = &var_4e - result_2
            
            if (ecx_42 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_42 != 0)
                eax_34.b = *(edi_10 + result_2)
                *ecx_42 = eax_34.b
        
        void* ecx_45 = ecx_42 + 1
        uint32_t eax_36 = xmm0_2 u>> 0x10
        char var_42 = eax_36.b
        
        if (&var_42 u>= ecx_45 || result_2 u> &var_42)
            if (ecx_45 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_45 != 0)
                *ecx_45 = eax_36.b
        else
            char* edi_11 = &var_42 - result_2
            
            if (ecx_45 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_45 != 0)
                eax_36.b = *(edi_11 + result_2)
                *ecx_45 = eax_36.b
        
        void* ecx_48 = ecx_45 + 1
        uint8_t ebx_9 = (xmm0_2 u>> 0x18).b
        uint8_t var_4c = ebx_9
        
        if (&var_4c u>= ecx_48 || result_2 u> &var_4c)
            if (ecx_48 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_48 != 0)
                *ecx_48 = ebx_9
        else
            void* edi_12 = &var_4c - result_2
            
            if (ecx_48 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_48 != 0)
                *ecx_48 = *(result_2 + edi_12)
        
        void* ecx_50 = ecx_48 + 1
        int32_t xmm0_3 = *(eax_17 + 0x5c)
        char var_44 = xmm0_3.b
        
        if (&var_44 u>= ecx_50 || result_2 u> &var_44)
            if (ecx_50 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_50 != 0)
                *ecx_50 = xmm0_3.b
        else
            int32_t edi_13 = &var_44 - result_2
            
            if (ecx_50 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_50 != 0)
                *ecx_50 = result_2[edi_13]
        
        void* ecx_54 = ecx_50 + 1
        uint32_t eax_41 = xmm0_3 u>> 8
        char var_55 = eax_41.b
        
        if (&var_55 u>= ecx_54 || result_2 u> &var_55)
            if (ecx_54 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_54 != 0)
                *ecx_54 = eax_41.b
        else
            char* edi_14 = &var_55 - result_2
            
            if (ecx_54 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_54 != 0)
                eax_41.b = *(edi_14 + result_2)
                *ecx_54 = eax_41.b
        
        void* ecx_57 = ecx_54 + 1
        uint32_t eax_43 = xmm0_3 u>> 0x10
        char var_47 = eax_43.b
        
        if (&var_47 u>= ecx_57 || result_2 u> &var_47)
            if (ecx_57 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_57 != 0)
                *ecx_57 = eax_43.b
        else
            char* edi_15 = &var_47 - result_2
            
            if (ecx_57 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_57 != 0)
                eax_43.b = *(edi_15 + result_2)
                *ecx_57 = eax_43.b
        
        void* ecx_60 = ecx_57 + 1
        uint8_t ebx_11 = (xmm0_3 u>> 0x18).b
        uint8_t var_54 = ebx_11
        
        if (&var_54 u>= ecx_60 || result_2 u> &var_54)
            if (ecx_60 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_60 != 0)
                *ecx_60 = ebx_11
        else
            char* edi_16 = &var_54 - result_2
            
            if (ecx_60 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_60 != 0)
                *ecx_60 = *(edi_16 + result_2)
        
        void* ecx_62 = ecx_60 + 1
        int32_t xmm0_4 = *(eax_17 + 0x60)
        char var_53 = xmm0_4.b
        
        if (&var_53 u>= ecx_62 || result_2 u> &var_53)
            if (ecx_62 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_62 != 0)
                *ecx_62 = xmm0_4.b
        else
            char* edi_17 = &var_53 - result_2
            
            if (ecx_62 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_62 != 0)
                *ecx_62 = *(edi_17 + result_2)
        
        void* ecx_66 = ecx_62 + 1
        uint32_t eax_48 = xmm0_4 u>> 8
        char var_51 = eax_48.b
        
        if (&var_51 u>= ecx_66 || result_2 u> &var_51)
            if (ecx_66 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_66 != 0)
                *ecx_66 = eax_48.b
        else
            char* edi_18 = &var_51 - result_2
            
            if (ecx_66 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_66 != 0)
                eax_48.b = *(edi_18 + result_2)
                *ecx_66 = eax_48.b
        
        void* ecx_69 = ecx_66 + 1
        uint32_t eax_50 = xmm0_4 u>> 0x10
        char var_4f = eax_50.b
        
        if (&var_4f u>= ecx_69 || result_2 u> &var_4f)
            if (ecx_69 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_69 != 0)
                *ecx_69 = eax_50.b
        else
            char* edi_19 = &var_4f - result_2
            
            if (ecx_69 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_69 != 0)
                eax_50.b = *(edi_19 + result_2)
                *ecx_69 = eax_50.b
        
        void* ecx_72 = ecx_69 + 1
        uint8_t ebx_13 = (xmm0_4 u>> 0x18).b
        uint8_t var_4d = ebx_13
        
        if (&var_4d u>= ecx_72 || result_2 u> &var_4d)
            if (ecx_72 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_72 != 0)
                *ecx_72 = ebx_13
        else
            char* edi_20 = &var_4d - result_2
            
            if (ecx_72 == esi_1)
                sub_403590(&result_1, 1)
                esi_1 = var_60
                result_2 = result_1
            
            if (ecx_72 != 0)
                *ecx_72 = *(edi_20 + result_2)
        
        void* ecx_74 = ecx_72 + 1
        int32_t xmm0_5 = *(eax_17 + 0x64)
        char var_4b = xmm0_5.b
        
        if (&var_4b u>= ecx_74 || result_2 u> &var_4b)
            if (ecx_74 == esi_1)
                sub_403590(&result_1, 1)
            
            if (ecx_74 != 0)
                *ecx_74 = xmm0_5.b
        else
            char* edi_21 = &var_4b - result_2
            
            if (ecx_74 == esi_1)
                sub_403590(&result_1, 1)
                result_2 = result_1
            
            if (ecx_74 != 0)
                *ecx_74 = *(edi_21 + result_2)
        
        var_6d = (xmm0_5 u>> 8).b
        var_64 = ecx_74 + 1
        sub_414b60(&result_1, &var_6d)
        var_6d = (xmm0_5 u>> 0x10).b
        sub_414b60(&result_1, &var_6d)
        var_6d = (xmm0_5 u>> 0x18).b
        sub_414b60(&result_1, &var_6d)
        sub_468ec0(&var_6c, *(eax_17 + 0x68))
        sub_468ec0(&var_6c, *(eax_17 + 0x78))
        sub_468ec0(&var_6c, *(eax_17 + 0x88))
        sub_468ec0(&var_6c, *(eax_17 + 0x9c))
        edi = var_38
        i = i_2 + 1
        i_2 = i
        int32_t eax_58
        int32_t edx_5
        edx_5:eax_58 = muls.dp.d(0x2fa0be83, *(edi + 0xc) - *(edi + 8))
        edx_6 = edx_5 s>> 5
    while (i s< (edx_6 u>> 0x1f) + edx_6)

sub_468ec0(&var_6c, (*(edi + 0x2c) - *(edi + 0x28)) s/ 0x38)
int32_t i_1 = 0

if ((*(edi + 0x2c) - *(edi + 0x28)) s/ 0x38 s> 0)
    int32_t esi_2 = 0
    int32_t var_3c = 0
    
    do
        void* edi_23 = *(edi + 0x28) + esi_2
        sub_468ec0(&var_6c, *(edi_23 + 8))
        sub_468ec0(&var_6c, *(edi_23 + 0xc))
        sub_468ec0(&var_6c, *(edi_23 + 0x10))
        sub_468ec0(&var_6c, *(edi_23 + 0x14))
        sub_468ec0(&var_6c, *(edi_23 + 0x18))
        sub_468ec0(&var_6c, *(edi_23 + 0x1c))
        sub_468ec0(&var_6c, *(edi_23 + 0x20))
        sub_468ec0(&var_6c, *(edi_23 + 0x24))
        sub_468ec0(&var_6c, *(edi_23 + 0x28))
        sub_468ec0(&var_6c, (*(edi_23 + 0x30) - *(edi_23 + 0x2c)) s>> 2)
        int32_t j = 0
        
        if (((*(edi_23 + 0x30) - *(edi_23 + 0x2c)) & 0xfffffffc) s> 0)
            do
                sub_468ec0(&var_6c, *(*(edi_23 + 0x2c) + (j << 2)))
                j += 1
            while (j s< (*(edi_23 + 0x30) - *(edi_23 + 0x2c)) s>> 2)
        
        edi = var_38
        i_1 += 1
        esi_2 = var_3c + 0x38
        var_3c = esi_2
    while (i_1 s< (*(edi + 0x2c) - *(edi + 0x28)) s/ 0x38)

bool cond:3 = sub_604d10(edi + 0x34, &result_1) != 0
char* result = result_1
i_1.b = cond:3

if (result != 0)
    j__free(result)

result.b = i_1.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
