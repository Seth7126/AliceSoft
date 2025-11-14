// 函数: sub_541c90
// 地址: 0x541c90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c46e4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t var_88 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_50 = ebp
void* ebx = arg2
int32_t var_54 = 0
void* var_48 = ebx
sub_468ec0(ebx, *(ebp + 0x10))
int32_t eax_5 = *(ebp + 0x28)
void* ecx_1 = ebp + 0x14
int32_t esi = *(ecx_1 + 0x10)
void* edx

if (eax_5 u< 0x10)
    edx = ecx_1
else
    edx = *ecx_1

if (eax_5 u>= 0x10)
    ecx_1 = *ecx_1

int32_t var_4c
int32_t var_8c_1 = var_4c
int32_t* edi = ebx + 4
sub_468ff0(edi, *(ebx + 8), ecx_1, edx + esi)
uint8_t var_6d = 0
sub_414b60(edi, &var_6d)
EnterCriticalSection(*(ebp + 0x40) + 4)
void* eax_9 = *(ebp + 0x38)
CRITICAL_SECTION* lpCriticalSection = *(ebp + 0x40) + 4
int64_t var_44 = *(ebp + 0x30)
LeaveCriticalSection(lpCriticalSection)
var_74 = var_44.d
sub_468ec0(ebx, var_74)
var_74 = var_44:4.d
sub_468ec0(ebx, var_74)
var_74 = eax_9
sub_468ec0(ebx, var_74)
var_74 = *(ebp + 0x44)
sub_468ec0(ebx, var_74)
var_74 = *(ebp + 0x48)
sub_468ec0(ebx, var_74)
var_74 = *(ebp + 0x4c)
sub_468ec0(ebx, var_74)
var_74 = *(ebp + 0x50)
sub_468ec0(ebx, var_74)
var_74 = *(ebp + 0x54)
sub_468ec0(ebx, var_74)
var_74 = *(ebp + 0x58)
sub_468ec0(ebx, var_74)
var_74 = *(ebp + 0x5c)
sub_468ec0(ebx, var_74)
var_74 = *(ebp + 0x60)
sub_468ec0(ebx, var_74)
var_74 = *(ebp + 0x64)
sub_468ec0(ebx, var_74)
int32_t eax_11
int32_t edx_1
edx_1:eax_11 = muls.dp.d(0x2aaaaaab, *(ebp + 0x6c) - *(ebp + 0x68))
int32_t edx_2 = edx_1 s>> 1
sub_468ec0(ebx, (edx_2 u>> 0x1f) + edx_2)
int32_t* i = *(ebp + 0x68)

if (i != *(ebp + 0x6c))
    do
        int32_t eax_15 = edi[1]
        var_74 = *i
        void* ebx_1 = var_74
        char var_5c = ebx_1.b
        int32_t edx_3
        
        if (&var_5c u< eax_15)
            edx_3 = *edi
        
        if (&var_5c u>= eax_15 || edx_3 u> &var_5c)
            if (eax_15 == edi[2])
                sub_403590(edi, 1)
            
            char* eax_18 = edi[1]
            
            if (eax_18 != 0)
                *eax_18 = ebx_1.b
        else
            void* ecx_19 = &var_5c - edx_3
            var_74 = ecx_19
            
            if (eax_15 == edi[2])
                sub_403590(edi, 1)
                ecx_19 = var_74
            
            char* ecx_21 = edi[1]
            
            if (ecx_21 != 0)
                void* eax_17
                eax_17.b = *(*edi + ecx_19)
                *ecx_21 = eax_17.b
        
        edi[1] += 1
        int32_t ecx_23 = edi[1]
        uint32_t eax_20 = ebx_1 u>> 8
        var_74 = eax_20
        char var_5f = eax_20.b
        int32_t edx_4
        
        if (&var_5f u< ecx_23)
            edx_4 = *edi
            ebp = var_50
        
        char* ecx_25
        
        if (&var_5f u>= ecx_23 || edx_4 u> &var_5f)
            if (ecx_23 == edi[2])
                sub_403590(edi, 1)
                eax_20 = var_74
            
            ecx_25 = edi[1]
            
            if (ecx_25 != 0)
                *ecx_25 = eax_20.b
        else
            var_74 = &var_5f - edx_4
            
            if (ecx_23 == edi[2])
                sub_403590(edi, 1)
            
            ecx_25 = edi[1]
            
            if (ecx_25 != 0)
                eax_20.b = *(*edi + var_74)
                *ecx_25 = eax_20.b
        edi[1] += 1
        int32_t ecx_27 = edi[1]
        uint32_t eax_24 = ebx_1 u>> 0x10
        var_74 = eax_24
        char var_5d = eax_24.b
        int32_t edx_5
        
        if (&var_5d u< ecx_27)
            edx_5 = *edi
            ebp = var_50
        
        char* ecx_29
        
        if (&var_5d u>= ecx_27 || edx_5 u> &var_5d)
            if (ecx_27 == edi[2])
                sub_403590(edi, 1)
                eax_24 = var_74
            
            ecx_29 = edi[1]
            
            if (ecx_29 != 0)
                *ecx_29 = eax_24.b
        else
            var_74 = &var_5d - edx_5
            
            if (ecx_27 == edi[2])
                sub_403590(edi, 1)
            
            ecx_29 = edi[1]
            
            if (ecx_29 != 0)
                eax_24.b = *(*edi + var_74)
                *ecx_29 = eax_24.b
        edi[1] += 1
        int32_t eax_27 = edi[1]
        uint8_t ebx_2 = (ebx_1 u>> 0x18).b
        uint8_t var_57 = ebx_2
        int32_t ecx_31
        
        if (&var_57 u< eax_27)
            ecx_31 = *edi
        
        if (&var_57 u>= eax_27 || ecx_31 u> &var_57)
            if (eax_27 == edi[2])
                sub_403590(edi, 1)
            
            uint8_t* eax_29 = edi[1]
            
            if (eax_29 != 0)
                *eax_29 = ebx_2
        else
            if (eax_27 == edi[2])
                sub_403590(edi, 1)
            
            char* ecx_33 = edi[1]
            
            if (ecx_33 != 0)
                char* eax_28
                eax_28.b = *(*edi + &var_57 - ecx_31)
                *ecx_33 = eax_28.b
        
        edi[1] += 1
        int32_t eax_30 = edi[1]
        var_74 = i[1]
        void* ebx_4 = var_74
        char var_56 = ebx_4.b
        int32_t edx_6
        
        if (&var_56 u< eax_30)
            edx_6 = *edi
        
        if (&var_56 u>= eax_30 || edx_6 u> &var_56)
            if (eax_30 == edi[2])
                sub_403590(edi, 1)
            
            char* eax_33 = edi[1]
            
            if (eax_33 != 0)
                *eax_33 = ebx_4.b
        else
            void* ecx_35 = &var_56 - edx_6
            var_74 = ecx_35
            
            if (eax_30 == edi[2])
                sub_403590(edi, 1)
                ecx_35 = var_74
            
            char* ecx_37 = edi[1]
            
            if (ecx_37 != 0)
                void* eax_32
                eax_32.b = *(*edi + ecx_35)
                *ecx_37 = eax_32.b
        
        edi[1] += 1
        int32_t ecx_39 = edi[1]
        uint32_t eax_35 = ebx_4 u>> 8
        var_74 = eax_35
        char var_64 = eax_35.b
        int32_t edx_7
        
        if (&var_64 u< ecx_39)
            edx_7 = *edi
            ebp = var_50
        
        char* ecx_41
        
        if (&var_64 u>= ecx_39 || edx_7 u> &var_64)
            if (ecx_39 == edi[2])
                sub_403590(edi, 1)
                eax_35 = var_74
            
            ecx_41 = edi[1]
            
            if (ecx_41 != 0)
                *ecx_41 = eax_35.b
        else
            var_74 = &var_64 - edx_7
            
            if (ecx_39 == edi[2])
                sub_403590(edi, 1)
            
            ecx_41 = edi[1]
            
            if (ecx_41 != 0)
                eax_35.b = *(*edi + var_74)
                *ecx_41 = eax_35.b
        edi[1] += 1
        int32_t ecx_43 = edi[1]
        uint32_t eax_39 = ebx_4 u>> 0x10
        var_74 = eax_39
        char var_59 = eax_39.b
        int32_t edx_8
        
        if (&var_59 u< ecx_43)
            edx_8 = *edi
            ebp = var_50
        
        char* ecx_45
        
        if (&var_59 u>= ecx_43 || edx_8 u> &var_59)
            if (ecx_43 == edi[2])
                sub_403590(edi, 1)
                eax_39 = var_74
            
            ecx_45 = edi[1]
            
            if (ecx_45 != 0)
                *ecx_45 = eax_39.b
        else
            var_74 = &var_59 - edx_8
            
            if (ecx_43 == edi[2])
                sub_403590(edi, 1)
            
            ecx_45 = edi[1]
            
            if (ecx_45 != 0)
                eax_39.b = *(*edi + var_74)
                *ecx_45 = eax_39.b
        edi[1] += 1
        int32_t eax_42 = edi[1]
        uint8_t ebx_5 = (ebx_4 u>> 0x18).b
        uint8_t var_62 = ebx_5
        int32_t ecx_47
        
        if (&var_62 u< eax_42)
            ecx_47 = *edi
        
        if (&var_62 u>= eax_42 || ecx_47 u> &var_62)
            if (eax_42 == edi[2])
                sub_403590(edi, 1)
            
            uint8_t* eax_44 = edi[1]
            
            if (eax_44 != 0)
                *eax_44 = ebx_5
        else
            if (eax_42 == edi[2])
                sub_403590(edi, 1)
            
            char* ecx_49 = edi[1]
            
            if (ecx_49 != 0)
                char* eax_43
                eax_43.b = *(*edi + &var_62 - ecx_47)
                *ecx_49 = eax_43.b
        
        edi[1] += 1
        int32_t eax_45 = edi[1]
        var_74 = i[2]
        void* ebx_7 = var_74
        char var_55 = ebx_7.b
        int32_t edx_9
        
        if (&var_55 u< eax_45)
            edx_9 = *edi
        
        if (&var_55 u>= eax_45 || edx_9 u> &var_55)
            if (eax_45 == edi[2])
                sub_403590(edi, 1)
            
            char* eax_48 = edi[1]
            
            if (eax_48 != 0)
                *eax_48 = ebx_7.b
        else
            void* ecx_51 = &var_55 - edx_9
            var_74 = ecx_51
            
            if (eax_45 == edi[2])
                sub_403590(edi, 1)
                ecx_51 = var_74
            
            char* ecx_53 = edi[1]
            
            if (ecx_53 != 0)
                void* eax_47
                eax_47.b = *(*edi + ecx_51)
                *ecx_53 = eax_47.b
        
        edi[1] += 1
        int32_t ecx_55 = edi[1]
        void* eax_50 = ebx_7 u>> 8
        var_74 = eax_50
        char var_60 = eax_50.b
        int32_t edx_10
        
        if (&var_60 u< ecx_55)
            edx_10 = *edi
            ebp = var_50
        
        char* ecx_57
        
        if (&var_60 u>= ecx_55 || edx_10 u> &var_60)
            if (ecx_55 == edi[2])
                sub_403590(edi, 1)
                eax_50 = var_74
            
            ecx_57 = edi[1]
            
            if (ecx_57 != 0)
                *ecx_57 = eax_50.b
        else
            var_74 = &var_60 - edx_10
            
            if (ecx_55 == edi[2])
                sub_403590(edi, 1)
            
            ecx_57 = edi[1]
            
            if (ecx_57 != 0)
                eax_50.b = *(*edi + var_74)
                *ecx_57 = eax_50.b
        edi[1] += 1
        int32_t ecx_59 = edi[1]
        void* eax_54 = ebx_7 u>> 0x10
        var_74 = eax_54
        char var_5b = eax_54.b
        int32_t edx_11
        
        if (&var_5b u< ecx_59)
            edx_11 = *edi
            ebp = var_50
        
        char* ecx_61
        
        if (&var_5b u>= ecx_59 || edx_11 u> &var_5b)
            if (ecx_59 == edi[2])
                sub_403590(edi, 1)
                eax_54 = var_74
            
            ecx_61 = edi[1]
            
            if (ecx_61 != 0)
                *ecx_61 = eax_54.b
        else
            var_74 = &var_5b - edx_11
            
            if (ecx_59 == edi[2])
                sub_403590(edi, 1)
            
            ecx_61 = edi[1]
            
            if (ecx_61 != 0)
                eax_54.b = *(*edi + var_74)
                *ecx_61 = eax_54.b
        edi[1] += 1
        int32_t eax_57 = edi[1]
        uint8_t ebx_8 = (ebx_7 u>> 0x18).b
        uint8_t var_5e = ebx_8
        int32_t ecx_63
        
        if (&var_5e u< eax_57)
            ecx_63 = *edi
        
        if (&var_5e u>= eax_57 || ecx_63 u> &var_5e)
            if (eax_57 == edi[2])
                sub_403590(edi, 1)
            
            uint8_t* eax_59 = edi[1]
            
            if (eax_59 != 0)
                *eax_59 = ebx_8
        else
            if (eax_57 == edi[2])
                sub_403590(edi, 1)
            
            char* ecx_65 = edi[1]
            
            if (ecx_65 != 0)
                char* eax_58
                eax_58.b = *(*edi + &var_5e - ecx_63)
                *ecx_65 = eax_58.b
        
        edi[1] += 1
        i = &i[3]
    while (i != *(ebp + 0x6c))
    
    ebx = var_48

int32_t eax_60 = edi[1]
void* ecx_69 = (*(ebp + 0x78) - *(ebp + 0x74)) s>> 3
var_74 = ecx_69
char var_5a = ecx_69.b
int32_t edx_12

if (&var_5a u< eax_60)
    edx_12 = *edi

if (&var_5a u>= eax_60 || edx_12 u> &var_5a)
    if (eax_60 == edi[2])
        sub_403590(edi, 1)
        ecx_69 = var_74
    
    char* eax_62 = edi[1]
    
    if (eax_62 != 0)
        *eax_62 = ecx_69.b
else
    if (eax_60 == edi[2])
        sub_403590(edi, 1)
        ecx_69 = var_74
    
    char* edx_13 = edi[1]
    
    if (edx_13 != 0)
        char* eax_61
        eax_61.b = *(*edi + &var_5a - edx_12)
        *edx_13 = eax_61.b

edi[1] += 1
int32_t edx_14 = edi[1]
uint32_t eax_64 = ecx_69 u>> 8
char var_67 = eax_64.b
char* edx_15

if (&var_67 u>= edx_14 || *edi u> &var_67)
    if (edx_14 == edi[2])
        sub_403590(edi, 1)
        ecx_69 = var_74
    
    edx_15 = edi[1]
    
    if (edx_15 != 0)
        *edx_15 = eax_64.b
else
    void* esi_2 = &var_67 - *edi
    
    if (edx_14 == edi[2])
        sub_403590(edi, 1)
        ecx_69 = var_74
    
    edx_15 = edi[1]
    
    if (edx_15 != 0)
        eax_64.b = *(*edi + esi_2)
        *edx_15 = eax_64.b
edi[1] += 1
int32_t edx_16 = edi[1]
uint32_t eax_66 = ecx_69 u>> 0x10
char var_58 = eax_66.b
char* edx_17

if (&var_58 u>= edx_16 || *edi u> &var_58)
    if (edx_16 == edi[2])
        sub_403590(edi, 1)
        ecx_69 = var_74
    
    edx_17 = edi[1]
    
    if (edx_17 != 0)
        *edx_17 = eax_66.b
else
    void* esi_3 = &var_58 - *edi
    
    if (edx_16 == edi[2])
        sub_403590(edi, 1)
        ecx_69 = var_74
    
    edx_17 = edi[1]
    
    if (edx_17 != 0)
        eax_66.b = *(*edi + esi_3)
        *edx_17 = eax_66.b
edi[1] += 1
int32_t eax_67 = edi[1]
void* ecx_76 = ecx_69 u>> 0x18
var_74 = ecx_76
char var_66 = ecx_76.b
int32_t edx_18

if (&var_66 u< eax_67)
    edx_18 = *edi

if (&var_66 u>= eax_67 || edx_18 u> &var_66)
    if (eax_67 == edi[2])
        sub_403590(edi, 1)
        ecx_76 = var_74
    
    char* eax_69 = edi[1]
    
    if (eax_69 != 0)
        *eax_69 = ecx_76.b
else
    if (eax_67 == edi[2])
        sub_403590(edi, 1)
    
    char* ecx_78 = edi[1]
    
    if (ecx_78 != 0)
        char* eax_68
        eax_68.b = *(*edi + &var_66 - edx_18)
        *ecx_78 = eax_68.b

edi[1] += 1
int32_t* esi_5 = *(ebp + 0x74)

if (esi_5 != *(ebp + 0x78))
    while (true)
        int32_t xmm0_16 = *esi_5
        int32_t ecx_80 = edi[1]
        char var_65 = xmm0_16.b
        int32_t ebp_1
        
        if (&var_65 u< ecx_80)
            ebp_1 = *edi
        
        if (&var_65 u>= ecx_80 || ebp_1 u> &var_65)
            int32_t edx_22 = edi[2]
            
            if (ecx_80 != edx_22 || edx_22 - ecx_80 u>= 1)
            label_5425c4:
                char* eax_85 = edi[1]
                
                if (eax_85 != 0)
                    *eax_85 = xmm0_16.b
                
            label_5425cd:
                edi[1] += 1
                int32_t ecx_88 = edi[1]
                void* eax_87 = xmm0_16 u>> 8
                var_74 = eax_87
                char var_63 = eax_87.b
                int32_t ebp_7
                
                if (&var_63 u< ecx_88)
                    ebp_7 = *edi
                
                char* ecx_92
                
                if (&var_63 u>= ecx_88 || ebp_7 u> &var_63)
                    int32_t edx_28 = edi[2]
                    
                    if (ecx_88 != edx_28)
                        goto label_542693
                    
                    if (edx_28 - ecx_88 u>= 1)
                    label_54268f:
                        eax_87 = var_74
                    label_542693:
                        ecx_92 = edi[1]
                        
                        if (ecx_92 == 0)
                            goto label_54269c
                        
                        goto label_54269a
                    
                    int32_t ebp_10 = *edi
                    
                    if (ebp_10 - ecx_88 - 1 u>= 1)
                        int32_t edx_29 = edx_28 - ebp_10
                        uint32_t ebp_12 = edx_29 u>> 1
                        uint32_t edx_30
                        
                        if (0xffffffff - ebp_12 u>= edx_29)
                            edx_30 = edx_29 + ebp_12
                        else
                            edx_30 = 0
                        
                        if (edx_30 u< ecx_88 - ebp_10 + 1)
                            edx_30 = ecx_88 - ebp_10 + 1
                        
                        sub_403640(edi, edx_30)
                        goto label_54268f
                else
                    int32_t edx_25 = edi[2]
                    
                    if (ecx_88 != edx_25 || edx_25 - ecx_88 u>= 1)
                    label_54263f:
                        ecx_92 = edi[1]
                        
                        if (ecx_92 == 0)
                            goto label_54269c
                        
                        eax_87.b = *(*edi + &var_63 - ebp_7)
                    label_54269a:
                        *ecx_92 = eax_87.b
                    label_54269c:
                        edi[1] += 1
                        int32_t ecx_96 = edi[1]
                        void* eax_103 = xmm0_16 u>> 0x10
                        var_74 = eax_103
                        char var_61 = eax_103.b
                        int32_t ebp_13
                        
                        if (&var_61 u< ecx_96)
                            ebp_13 = *edi
                        
                        char* ecx_100
                        
                        if (&var_61 u>= ecx_96 || ebp_13 u> &var_61)
                            int32_t edx_34 = edi[2]
                            
                            if (ecx_96 != edx_34)
                                goto label_542762
                            
                            if (edx_34 - ecx_96 u>= 1)
                            label_54275e:
                                eax_103 = var_74
                            label_542762:
                                ecx_100 = edi[1]
                                
                                if (ecx_100 == 0)
                                    goto label_54276b
                                
                                goto label_542769
                            
                            int32_t ebp_16 = *edi
                            
                            if (ebp_16 - ecx_96 - 1 u>= 1)
                                int32_t edx_35 = edx_34 - ebp_16
                                uint32_t ebp_18 = edx_35 u>> 1
                                uint32_t edx_36
                                
                                if (0xffffffff - ebp_18 u>= edx_35)
                                    edx_36 = edx_35 + ebp_18
                                else
                                    edx_36 = 0
                                
                                if (edx_36 u< ecx_96 - ebp_16 + 1)
                                    edx_36 = ecx_96 - ebp_16 + 1
                                
                                sub_403640(edi, edx_36)
                                goto label_54275e
                        else
                            int32_t edx_31 = edi[2]
                            
                            if (ecx_96 != edx_31 || edx_31 - ecx_96 u>= 1)
                            label_54270e:
                                ecx_100 = edi[1]
                                
                                if (ecx_100 == 0)
                                    goto label_54276b
                                
                                eax_103.b = *(*edi + &var_61 - ebp_13)
                            label_542769:
                                *ecx_100 = eax_103.b
                            label_54276b:
                                edi[1] += 1
                                var_6d = (xmm0_16 u>> 0x18).b
                                sub_414b60(edi, &var_6d)
                                ebx = var_48
                                sub_468ec0(ebx, esi_5[1])
                                ebp = var_50
                                esi_5 = &esi_5[2]
                                
                                if (esi_5 == *(ebp + 0x78))
                                    break
                                
                                continue
                            else if (ebp_13 - ecx_96 - 1 u>= 1)
                                int32_t edx_32 = edx_31 - ebp_13
                                uint32_t ebp_15 = edx_32 u>> 1
                                uint32_t edx_33
                                
                                if (0xffffffff - ebp_15 u>= edx_32)
                                    edx_33 = edx_32 + ebp_15
                                else
                                    edx_33 = 0
                                
                                if (edx_33 u< ecx_96 - ebp_13 + 1)
                                    edx_33 = ecx_96 - ebp_13 + 1
                                
                                sub_403640(edi, edx_33)
                                goto label_54270e
                    else if (ebp_7 - ecx_88 - 1 u>= 1)
                        int32_t edx_26 = edx_25 - ebp_7
                        uint32_t ebp_9 = edx_26 u>> 1
                        uint32_t edx_27
                        
                        if (0xffffffff - ebp_9 u>= edx_26)
                            edx_27 = edx_26 + ebp_9
                        else
                            edx_27 = 0
                        
                        if (edx_27 u< ecx_88 - ebp_7 + 1)
                            edx_27 = ecx_88 - ebp_7 + 1
                        
                        sub_403640(edi, edx_27)
                        goto label_54263f
            else
                int32_t ebp_4 = *edi
                
                if (ebp_4 - ecx_80 - 1 u>= 1)
                    int32_t edx_23 = edx_22 - ebp_4
                    uint32_t ebp_6 = edx_23 u>> 1
                    uint32_t edx_24
                    
                    if (0xffffffff - ebp_6 u>= edx_23)
                        edx_24 = edx_23 + ebp_6
                    else
                        edx_24 = 0
                    
                    if (edx_24 u< ecx_80 - ebp_4 + 1)
                        edx_24 = ecx_80 - ebp_4 + 1
                    
                    sub_403640(edi, edx_24)
                    goto label_5425c4
        else
            int32_t edx_19 = edi[2]
            
            if (ecx_80 != edx_19 || edx_19 - ecx_80 u>= 1)
            label_542572:
                char* ecx_84 = edi[1]
                
                if (ecx_84 != 0)
                    void* eax_78
                    eax_78.b = *(*edi + &var_65 - ebp_1)
                    *ecx_84 = eax_78.b
                
                goto label_5425cd
            
            if (ebp_1 - ecx_80 - 1 u>= 1)
                int32_t edx_20 = edx_19 - ebp_1
                uint32_t ebp_3 = edx_20 u>> 1
                uint32_t edx_21
                
                if (0xffffffff - ebp_3 u>= edx_20)
                    edx_21 = edx_20 + ebp_3
                else
                    edx_21 = 0
                
                if (edx_21 u< ecx_80 - ebp_1 + 1)
                    edx_21 = ecx_80 - ebp_1 + 1
                
                sub_403640(edi, edx_21)
                goto label_542572
        
        sub_69a551("vector<T> too long")
        noreturn

sub_468ec0(ebx, *(ebp + 0x80))
sub_468ec0(ebx, *(ebp + 0x84))
sub_468ec0(ebx, *(ebp + 0x88))
sub_468ec0(ebx, *(ebp + 0x8c))
sub_468ec0(ebx, *(ebp + 0x90))
sub_468ec0(ebx, *(ebp + 0x94))
sub_468ec0(ebx, *(ebp + 0x98))
sub_468ec0(ebx, *(ebp + 0x9c))
sub_468ec0(ebx, *(ebp + 0xa0))
sub_468ec0(ebx, *(ebp + 0xa4))
sub_468ec0(ebx, *(ebp + 0xa8))
sub_468ec0(ebx, *(ebp + 0xac))
sub_468ec0(ebx, *(ebp + 0xb0))
sub_468ec0(ebx, *(ebp + 0xb4))
sub_468ec0(ebx, *(ebp + 0xb8))
var_6d = *(ebp + 0xbc) != 0
sub_414b60(edi, &var_6d)
var_6d = *(ebp + 0xbd) != 0
sub_414b60(edi, &var_6d)
var_6d = *(ebp + 0xbe) != 0
sub_414b60(edi, &var_6d)
var_6d = *(ebp + 0xbf) != 0
sub_414b60(edi, &var_6d)
sub_468ec0(ebx, (*(ebp + 0xc4) - *(ebp + 0xc0)) s>> 2)

for (int32_t* i_1 = *(ebp + 0xc0); i_1 != *(ebp + 0xc4); i_1 = &i_1[1])
    sub_468ec0(ebx, *i_1)

var_6d = *(ebp + 0xcc) != 0
sub_414b60(edi, &var_6d)
sub_468ec0(ebx, *(ebp + 0x120))
char result

if (sub_556a50(ebp + 0x124, ebx) == 0)
    result = 0
else if (sub_556a50(ebp + 0x140, ebx) == 0)
    result = 0
else
    void* eax_126 = *(ebp + 0x15c)
    int32_t var_30
    char var_2c
    int32_t var_18
    int32_t* ecx_132
    int32_t ebx_12
    
    if (eax_126 == 0)
        var_30 = 0xf
        int32_t var_34_1 = 0
        var_44.b = 0
        sub_402110(&var_44, 0x6da711, nullptr)
        ecx_132 = &var_44
        int32_t var_4_1 = 1
        ebx_12 = 2
    else
        var_18 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_401ff0(&var_2c, eax_126 + 0x14, 0, 0xffffffff)
        ecx_132 = &var_2c
        int32_t var_4 = 0
        ebx_12 = 1
    
    int32_t eax_128 = ecx_132[5]
    int32_t esi_6 = ecx_132[4]
    var_54 = ebx_12
    int32_t* edx_37
    
    if (eax_128 u< 0x10)
        edx_37 = ecx_132
    else
        edx_37 = *ecx_132
    
    if (eax_128 u>= 0x10)
        ecx_132 = *ecx_132
    
    int32_t var_8c_51 = var_4c
    sub_468ff0(edi, *(var_48 + 8), ecx_132, edx_37 + esi_6)
    var_6d = 0
    sub_414b60(edi, &var_6d)
    
    if ((ebx_12.b & 2) != 0)
        ebx_12 &= 0xfffffffd
        var_54 = ebx_12
        
        if (var_30 u>= 0x10)
            j__free(var_44.d)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_2 = 0
        var_44.b = 0
    
    int32_t var_4_2 = 0xffffffff
    
    if ((ebx_12.b & 1) != 0)
        ebx_12 &= 0xfffffffe
        var_54 = ebx_12
        
        if (var_18 u>= 0x10)
            j__free(var_2c.d)
    
    void* eax_130 = *(ebp + 0x164)
    int32_t* ecx_137
    int32_t ebx_13
    
    if (eax_130 == 0)
        ecx_137 = sub_401f60(&var_44, 0x6da707)
        int32_t var_4_4 = 3
        ebx_13 = ebx_12 | 8
    else
        int32_t var_18_1 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_401ff0(&var_2c, eax_130 + 0x14, 0, 0xffffffff)
        ecx_137 = &var_2c
        int32_t var_4_3 = 2
        ebx_13 = ebx_12 | 4
    
    int32_t eax_133 = ecx_137[4]
    int32_t eax_134 = ecx_137[5]
    var_54 = ebx_13
    int32_t* edx_38
    
    if (eax_134 u< 0x10)
        edx_38 = ecx_137
    else
        edx_38 = *ecx_137
    
    if (eax_134 u>= 0x10)
        ecx_137 = *ecx_137
    
    int32_t var_8c_55 = var_4c
    sub_468ff0(edi, *(var_48 + 8), ecx_137, eax_133 + edx_38)
    var_6d = 0
    sub_414b60(edi, &var_6d)
    
    if ((ebx_13.b & 8) != 0)
        ebx_13 &= 0xfffffff7
        sub_401fb0(&var_44)
    
    int32_t var_4_5 = 0xffffffff
    
    if ((ebx_13.b & 4) != 0)
        sub_401fb0(&var_2c)
    
    sub_468e90(var_48, *(ebp + 0x19c))
    sub_468e90(var_48, *(ebp + 0x19d))
    sub_468f20(*(ebp + 0x1a0))
    j_sub_468ec0(var_48, 
        std::vector<struct CHN*,class std::allocator<struct CHN*> >::size(ebp + 0x1b0))
    sub_4413e0(ebp + 0x1b0, &var_54)
    
    if (sub_441420(&var_54, sub_4413f0(ebp + 0x1b0, &var_4c)) != 0)
        char i_2
        
        do
            j_sub_468ec0(var_48, *sub_441400(&var_54))
            sub_441410(&var_54)
            i_2 = sub_441420(&var_54, sub_4413f0(ebp + 0x1b0, &var_4c))
        while (i_2 != 0)
    
    sub_468f20(*(ebp + 0x1bc))
    j_sub_468ec0(var_48, *(ebp + 0x1cc))
    
    if (*(ebp + 0x1d0) == 0)
        sub_468e90(var_48, false)
    label_542d1d:
        sub_468f20(*(ebp + 0x1ec))
        sub_468f20(*(ebp + 0x1f0))
        sub_468e90(var_48, *(ebp + 0x1f4))
        sub_468e90(var_48, *(ebp + 0x1f5))
        result = 1
    else
        sub_468e90(var_48, true)
        
        if (sub_5477d0(*(ebp + 0x1d0), var_48) != 0)
            goto label_542d1d
        
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
