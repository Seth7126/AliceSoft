// 函数: sub_5d7c00
// 地址: 0x5d7c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca561
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f4
int32_t eax_2 = __security_cookie ^ &var_f4
int32_t __saved_edi
int32_t var_108 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg5
struct sys43vm::CWriteFile::VTable* const var_ec = &sys43vm::CWriteFile::`vftable'
struct sys43vm::CMemoryFile::VTable* const var_e8 = &sys43vm::CMemoryFile::`vftable'
struct memory::CFastMemory::VTable* const var_e4 = &memory::CFastMemory::`vftable'
BOOL lpMem = 0
int32_t var_dc = 0
int32_t var_d8 = 0
int32_t var_d4 = 0
int32_t var_4 = 0
*(arg1 + 0x10) = 0
int32_t* var_cc = nullptr
int32_t var_c8 = 0
int32_t var_c4 = 0
var_4.b = 1
sub_5da0f0(arg2, arg3, esi, &var_cc, arg6)
int32_t var_90 = 0xf
void* var_94 = nullptr
char var_a4 = 0
sub_402110(&var_a4, 0x6ea920, 3)
int32_t edx_1 = var_90
char* edi = &var_a4
char* ecx_1 = var_a4.d

if (edx_1 u>= 0x10)
    edi = ecx_1

void* eax_7

if (var_94 != 0xffffffff)
    eax_7 = sub_5de800(&var_ec, edi, var_94 + 1)
    edx_1 = var_90
    ecx_1 = var_a4.d
else
    eax_7.b = 1

eax_7.b = eax_7.b == 0
char var_ed = eax_7.b

if (edx_1 u>= 0x10)
    j__free(ecx_1)
    eax_7.b = var_ed

int32_t var_90_1 = 0xf
int32_t var_94_1 = 0
var_a4 = 0
void* ebx

if (eax_7.b != 0)
labelid_b7:
    ebx.b = 0
else if (sub_5de860(&var_ec, 9) == 0)
labelid_b7:
    ebx.b = 0
else
    void* eax_9 = esi[4]
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    char eax_11
    
    if (eax_9 != 0xffffffff)
        eax_11 = sub_5de800(&var_ec, esi, eax_9 + 1)
    
    if (eax_9 != 0xffffffff && eax_11 == 0)
    labelid_b7:
        ebx.b = 0
    else
        int32_t ebp_3 = (var_c8 - var_cc) s/ 0x18
        
        if (sub_5de860(&var_ec, ebp_3) == 0)
        label_5d84ae:
            ebx.b = 0
        else
            int32_t edi_1 = 0
            
            if (ebp_3 s> 0)
                int32_t* esi_1 = var_cc
                
                do
                    void* ecx_8 = esi_1[4]
                    int32_t* eax_14
                    
                    if (esi_1[5] u< 0x10)
                        eax_14 = esi_1
                    else
                        eax_14 = *esi_1
                    
                    if (ecx_8 != 0xffffffff && sub_5de800(&var_ec, eax_14, ecx_8 + 1) == 0)
                        goto label_5d84ae_2
                    
                    edi_1 += 1
                    esi_1 = &esi_1[6]
                while (edi_1 s< ebp_3)
            
            if (sub_5d93f0(&var_ec, arg4, *(arg4 + 0x208) - *(arg4 + 0x20c)) == 0)
            label_5d84ae_1:
                ebx.b = 0
            else if (sub_5de860(&var_ec, 0) == 0)
            label_5d84ae_2:
                ebx.b = 0
            else
                struct memory::CFastIntVector::VTable* const var_b4 =
                    &memory::CFastIntVector::`vftable'
                int32_t lpMem_1 = 0
                int32_t var_ac_1 = 0
                int32_t var_a8_1 = 0
                var_4.b = 2
                sub_5de150(arg4 + 0x220, &var_b4)
                
                if (sub_5da8a0(&var_ec, &var_b4) == 0)
                labelid_b:
                    ebx.b = 0
                else if (sub_5bcfc0(arg4 + 0x640, &var_ec) == 0)
                labelid_b:
                    ebx.b = 0
                else if (sub_5bcfc0(arg4 + 0xa48, &var_ec) == 0)
                labelid_b:
                    ebx.b = 0
                else if (sub_5bcfc0(arg4 + 0xe50, &var_ec) == 0)
                labelid_b:
                    ebx.b = 0
                else if (sub_5d9490(&var_ec, arg4) == 0)
                labelid_b:
                    ebx.b = 0
                else if (sub_5de860(&var_ec, *(arg4 + 0x180)) == 0)
                labelid_b:
                    ebx.b = 0
                else if (sub_5de860(&var_ec, 0) == 0)
                labelid_b:
                    ebx.b = 0
                else if (sub_5de860(&var_ec, 0) == 0)
                labelid_b:
                    ebx.b = 0
                else if (sub_5de860(&var_ec, *(arg4 + 0x184)) == 0)
                labelid_b:
                    ebx.b = 0
                else if (sub_5de860(&var_ec, (*(arg4 + 0x178) - *(arg4 + 0x174)) s>> 2) == 0)
                label_5d800c:
                    ebx.b = 0
                else
                    int32_t i = 0
                    int32_t i_1 = 0
                    
                    if (((*(arg4 + 0x178) - *(arg4 + 0x174)) & 0xfffffffc) s> 0)
                        do
                            struct sys43vm::CWriteFile::VTable* const* ecx_21 = &var_ec
                            void* esi_2 = *(*(arg4 + 0x174) + (i << 2))
                            char eax_36
                            
                            if (esi_2 != 0)
                                if (sub_5de860(ecx_21, *(esi_2 + 0x14)) == 0)
                                    goto label_5d800c_2
                                
                                if (sub_5de860(&var_ec, *(esi_2 + 0x18)) == 0)
                                    goto label_5d800c_2
                                
                                if (sub_5de860(&var_ec, *(esi_2 + 0x20)) == 0)
                                    goto label_5d800c_2
                                
                                int32_t eax_40 = *(esi_2 + 0x14)
                                
                                if (eax_40 u> 5)
                                    goto label_5d800c_2
                                
                                int32_t var_10c_27
                                
                                switch (eax_40)
                                    case 0
                                        if (sub_5de860(&var_ec, 0xffffffff) == 0)
                                            goto label_5d800c_2
                                        
                                        if (sub_5de860(&var_ec, *(esi_2 + 0x30)) == 0)
                                            goto label_5d800c_2
                                        
                                        if (sub_5de960(&var_ec, esi_2 + 0x28) == 0)
                                            goto label_5d800c_2
                                    case 1
                                        int32_t* eax_47 = sub_5d99f0(*(esi_2 + 0x24), arg4 + 0x48)
                                        bool cond:5_1
                                        
                                        if (eax_47 == 0)
                                            int32_t* var_44
                                            sub_401f60(&var_44, 0x6da73a)
                                            int32_t* ecx_28 = &var_44
                                            int32_t var_30
                                            
                                            if (var_30 u>= 0x10)
                                                ecx_28 = var_44
                                            
                                            void* var_34
                                            
                                            if (var_34 != 0xffffffff)
                                                char eax_50 =
                                                    sub_5de800(&var_ec, ecx_28, var_34 + 1)
                                                sub_401fb0(&var_44)
                                                cond:5_1 = eax_50 == 0
                                            else
                                                char var_ed_1 = 1
                                                sub_401fb0(&var_44)
                                                cond:5_1 = var_ed_1 == 0
                                            
                                            goto label_5d80c7
                                        
                                        void* ecx_32 = eax_47[4]
                                        
                                        if (eax_47[5] u>= 0x10)
                                            eax_47 = *eax_47
                                        
                                        if (ecx_32 != 0xffffffff)
                                            cond:5_1 = sub_5de800(&var_ec, eax_47, ecx_32 + 1) == 0
                                        label_5d80c7:
                                            
                                            if (cond:5_1)
                                                goto label_5d800c_2
                                        
                                        if (sub_5de860(&var_ec, *(esi_2 + 0x30)) == 0)
                                            goto label_5d800c_2
                                        
                                        if (sub_5de960(&var_ec, esi_2 + 0x28) == 0)
                                            goto label_5d800c_2
                                        
                                        var_10c_27 = *(esi_2 + 0x4c)
                                        goto label_5d80fd
                                    case 2
                                        var_10c_27 = 0
                                    label_5d80fd:
                                        
                                        if (sub_5de860(&var_ec, var_10c_27) == 0)
                                            goto label_5d800c_2
                                    case 3
                                        if (sub_5de860(&var_ec, *(esi_2 + 0x38)) == 0)
                                            goto label_5d800c_2
                                        
                                        if (sub_5de860(&var_ec, *(esi_2 + 0x3c)) == 0)
                                            goto label_5d800c_2
                                        
                                        int32_t ecx_40 = *(esi_2 + 0x40)
                                        int32_t* eax_59
                                        
                                        if (ecx_40 != 0xffffffff)
                                            eax_59 = sub_5d9a80(ecx_40, arg4 + 0x48)
                                        
                                        bool cond:11_1
                                        
                                        if (ecx_40 == 0xffffffff || eax_59 == 0)
                                            int32_t* var_2c
                                            sub_401f60(&var_2c, 0x6da752)
                                            int32_t* ecx_45 = &var_2c
                                            int32_t var_18
                                            
                                            if (var_18 u>= 0x10)
                                                ecx_45 = var_2c
                                            
                                            char var_ed_3
                                            void* var_1c
                                            
                                            if (var_1c != 0xffffffff)
                                                var_ed_3 = sub_5de800(&var_ec, ecx_45, var_1c + 1)
                                            else
                                                var_ed_3 = 1
                                            
                                            sub_401fb0(&var_2c)
                                            cond:11_1 = var_ed_3 == 0
                                            goto label_5d81c6
                                        
                                        void* ecx_41 = eax_59[4]
                                        
                                        if (eax_59[5] u>= 0x10)
                                            eax_59 = *eax_59
                                        
                                        if (ecx_41 != 0xffffffff)
                                            cond:11_1 = sub_5de800(&var_ec, eax_59, ecx_41 + 1) == 0
                                        label_5d81c6:
                                            
                                            if (cond:11_1)
                                                goto label_5d800c_2
                                        
                                        if (sub_5de860(&var_ec, *(esi_2 + 0x44)) == 0)
                                            goto label_5d800c_2
                                        
                                        int32_t eax_65
                                        eax_65.b = *(esi_2 + 0x48) != 0
                                        var_10c_27 = eax_65
                                        goto label_5d80fd
                                    case 4
                                        void* eax_66 = sub_5d3ce0(esi_2)
                                        
                                        if (eax_66 == 0)
                                            goto label_5d800c_2
                                        
                                        int32_t ecx_50 = *(eax_66 + 0x18)
                                        int32_t ebp_4 = *(eax_66 + 0x1c)
                                        int32_t* edi_2
                                        
                                        if (ecx_50 != 0xffffffff)
                                            edi_2 = sub_5d9ab0(ecx_50, arg4 + 0x48)
                                        else
                                            edi_2 = nullptr
                                        
                                        int32_t* ebp_5
                                        
                                        if (ebp_4 != 0xffffffff)
                                            ebp_5 = sub_5d9ab0(ebp_4, arg4 + 0x48)
                                        else
                                            ebp_5 = nullptr
                                        
                                        bool cond:10_1
                                        
                                        if (edi_2 == 0)
                                            int32_t* var_8c
                                            sub_401f60(&var_8c, 0x6da753)
                                            int32_t* ecx_53 = &var_8c
                                            int32_t var_78
                                            
                                            if (var_78 u>= 0x10)
                                                ecx_53 = var_8c
                                            
                                            void* var_7c
                                            
                                            if (var_7c != 0xffffffff)
                                                char eax_73 =
                                                    sub_5de800(&var_ec, ecx_53, var_7c + 1)
                                                sub_401fb0(&var_8c)
                                                cond:10_1 = eax_73 == 0
                                            else
                                                char var_ed_4 = 1
                                                sub_401fb0(&var_8c)
                                                cond:10_1 = var_ed_4 == 0
                                            
                                            goto label_5d82ac
                                        
                                        void* eax_74 = edi_2[4]
                                        
                                        if (edi_2[5] u>= 0x10)
                                            edi_2 = *edi_2
                                        
                                        if (eax_74 != 0xffffffff)
                                            cond:10_1 = sub_5de800(&var_ec, edi_2, eax_74 + 1) == 0
                                        label_5d82ac:
                                            
                                            if (cond:10_1)
                                                goto label_5d800c_2
                                        
                                        bool cond:14_1
                                        
                                        if (ebp_5 == 0)
                                            int32_t* var_74
                                            sub_401f60(&var_74, 0x6da73b)
                                            int32_t* ecx_59 = &var_74
                                            int32_t var_60
                                            
                                            if (var_60 u>= 0x10)
                                                ecx_59 = var_74
                                            
                                            void* var_64
                                            
                                            if (var_64 != 0xffffffff)
                                                char eax_79 =
                                                    sub_5de800(&var_ec, ecx_59, var_64 + 1)
                                                sub_401fb0(&var_74)
                                                cond:14_1 = eax_79 == 0
                                            else
                                                char var_ed_6 = 1
                                                sub_401fb0(&var_74)
                                                cond:14_1 = var_ed_6 == 0
                                            
                                            goto label_5d833e
                                        
                                        void* eax_80 = ebp_5[4]
                                        
                                        if (ebp_5[5] u>= 0x10)
                                            ebp_5 = *ebp_5
                                        
                                        if (eax_80 != 0xffffffff)
                                            cond:14_1 = sub_5de800(&var_ec, ebp_5, eax_80 + 1) == 0
                                        label_5d833e:
                                            
                                            if (cond:14_1)
                                                goto label_5d800c_2
                                        
                                        if (sub_5de860(&var_ec, 0) == 0)
                                            goto label_5d800c_2
                                        
                                        int32_t* eax_85 = sub_5d9a40(*(esi_2 + 0x24), arg4 + 0x48)
                                        bool cond:17_1
                                        
                                        if (eax_85 == 0)
                                            int32_t* var_5c
                                            sub_401f60(&var_5c, 0x6da751)
                                            int32_t* ecx_66 = &var_5c
                                            int32_t var_48
                                            
                                            if (var_48 u>= 0x10)
                                                ecx_66 = var_5c
                                            
                                            void* var_4c
                                            
                                            if (var_4c != 0xffffffff)
                                                char eax_88 =
                                                    sub_5de800(&var_ec, ecx_66, var_4c + 1)
                                                sub_401fb0(&var_5c)
                                                cond:17_1 = eax_88 == 0
                                            else
                                                char var_ed_8 = 1
                                                sub_401fb0(&var_5c)
                                                cond:17_1 = var_ed_8 == 0
                                            
                                            goto label_5d83ee
                                        
                                        void* ecx_70 = eax_85[4]
                                        
                                        if (eax_85[5] u>= 0x10)
                                            eax_85 = *eax_85
                                        
                                        if (ecx_70 != 0xffffffff)
                                            cond:17_1 = sub_5de800(&var_ec, eax_85, ecx_70 + 1) == 0
                                        label_5d83ee:
                                            
                                            if (cond:17_1)
                                                goto label_5d800c_2
                                        
                                        if (sub_5de860(&var_ec, *(esi_2 + 0x30)) == 0)
                                            goto label_5d800c_2
                                        
                                        if (sub_5de960(&var_ec, esi_2 + 0x28) == 0)
                                            goto label_5d800c_2
                                        
                                        i = i_1
                                
                                if (sub_5de860(&var_ec, *(esi_2 + 0xc)) == 0)
                                    goto label_5d800c_2
                                
                                void* eax_94 = *(esi_2 + 0xc)
                                
                                if (eax_94 != 0)
                                    eax_36 = sub_5de800(&var_ec, *(esi_2 + 8), eax_94)
                                    goto label_5d844a
                            else
                                eax_36 = sub_5de860(ecx_21, 0xffffffff)
                            label_5d844a:
                                
                                if (eax_36 == 0)
                                    goto label_5d800c_2
                            i += 1
                            i_1 = i
                        while (i s< (*(arg4 + 0x178) - *(arg4 + 0x174)) s>> 2)
                    
                    if (sub_5d97c0(&var_ec, arg4) == 0)
                    label_5d800c_1:
                        ebx.b = 0
                    else if (sub_5dab20(arg6, arg2, arg3, &var_ec, 1) == 0)
                    label_5d800c_2:
                        ebx.b = 0
                    else
                        ebx.b = 1
                
                if (lpMem_1 != 0)
                    HeapFree(data_75dc34, HEAP_NONE, lpMem_1)

int32_t* ebp_6 = var_cc

if (ebp_6 != 0)
    sub_4107c0(ebp_6, var_c8)
    j__free(ebp_6)

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_f4)
return result
