// 函数: sub_4525a0
// 地址: 0x4525a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7779
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_1fc
int32_t eax_2 = __security_cookie ^ &var_1fc
void* ebx
void* var_200 = ebx
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_1fc = nullptr
*(arg1 + 0x6c) = 0
PSTR lpFileName

if (arg2[5] u< 0x10)
    lpFileName = arg2
else
    lpFileName = *arg2

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)

if (hFindFile == 0xffffffff || (findFileData.dwFileAttributes.b & 0x10) != 0)
    hFindFile.b = 1
else
    int32_t var_1cc = 0
    HANDLE var_1c8_1 = nullptr
    int32_t var_1c4_1 = 0
    int32_t var_4 = 0
    struct filesystem::CFile::VTable* const var_1b8 = &filesystem::CFile::`vftable'
    int32_t var_1b4_1 = 0xffffffff
    int32_t var_1b0_1 = 0
    int32_t var_1ac_1 = 0
    var_4.b = 1
    var_1fc = 1
    char eax_5 = sub_604a80(arg2, &var_1cc)
    int32_t esi_1 = var_1cc
    char ecx
    
    if (eax_5 == 0 || esi_1 == var_1c8_1)
        ecx = 1
    else
        ecx = 0
    
    int32_t var_4_1 = 0
    
    if (ecx == 0)
        struct fileimage::CFileImageAnalyser::VTable* const var_1dc =
            &fileimage::CFileImageAnalyser::`vftable'
        var_4_1.b = 2
        sub_452430(arg1)
        sub_4524a0(arg1)
        sub_4524f0(arg1)
        sub_452540(arg1)
        int32_t var_188_1 = 0xf
        int32_t var_18c_1 = 0
        char var_19c = 0
        var_4_1.b = 3
        
        if (sub_468c20(&var_1dc, &var_19c, 4).b == 0)
            ebx.b = 0
        else
            uint32_t var_1e0
            
            if (sub_40c250(&var_19c, "JDBG").b == 0)
                ebx.b = 0
            else if (sub_468b20(&var_1dc, &var_1e0).b == 0 || var_1e0 s< 3)
                ebx.b = 0
            else
                int32_t var_158_1 = 0xf
                int32_t var_15c_1 = 0
                char var_16c = 0
                var_4_1.b = 4
                
                if (sub_468c20(&var_1dc, &var_16c, 4) == 0)
                label_452d5a:
                    ebx.b = 0
                    sub_401fb0(&var_16c)
                    esi_1 = var_1cc
                else
                    if (sub_40c250(&var_16c, "KEYC") == 0 || esi_1 + 4 u> var_1c8_1)
                        goto label_452d5a
                    
                    int32_t var_1d8_2 = esi_1 + 4
                    
                    if (sub_468b20(&var_1dc, &var_1fc) == 0)
                        goto label_452d5a
                    
                    uint32_t var_1f4
                    
                    if (sub_468b20(&var_1dc, &var_1f4) == 0)
                        goto label_452d5a
                    
                    void* esi_2 = var_1fc
                    
                    if (esi_2 s<= 0)
                        goto label_452d5a
                    
                    uint32_t edi_1 = var_1f4
                    
                    if (edi_1 s<= 0)
                        goto label_452d5a
                    
                    sub_448e90(&var_1b8, esi_2)
                    var_4_1.b = 5
                    
                    if (sub_468dd0(&var_1dc, var_1b8, esi_2) != 0)
                        void* var_1a8
                        sub_448e90(&var_1a8, edi_1)
                        struct commonsystemdata::CZlibDecompressor::VTable* var_1c0 =
                            &commonsystemdata::CZlibDecompressor::`vftable'
                        int32_t* var_1bc_1 = nullptr
                        var_4_1.b = 7
                        
                        if (sub_451e10(&var_1c0) == 0)
                        labelid_d:
                            ebx.b = 0
                        else
                            ebx = var_1a8
                            int32_t var_1a4
                            void* edi_3 = var_1a4 - ebx
                            
                            if (var_1bc_1 == 0)
                            labelid_d:
                                ebx.b = 0
                            else if ((*(*var_1bc_1 + 8))(ebx, edi_3, var_1b8, esi_2) == 0)
                            labelid_d:
                                ebx.b = 0
                            else
                                struct fileimage::CFileImageAnalyser::VTable* const var_1ec =
                                    &fileimage::CFileImageAnalyser::`vftable'
                                void* var_1e8_1 = ebx
                                int32_t var_1e4_1 = edi_3 + ebx
                                var_4_1.b = 8
                                
                                if (sub_468b20(&var_1ec, &var_1f4) == 0)
                                labelid_d:
                                    ebx.b = 0
                                else
                                    int32_t edi_4 = *(arg1 + 0x48)
                                    
                                    for (int32_t* i = *(arg1 + 0x44); i != edi_4; i = &i[6])
                                        (**i)(0)
                                    
                                    ebx = var_1f4
                                    *(arg1 + 0x48) = *(arg1 + 0x44)
                                    sub_453620(arg1 + 0x44, ebx)
                                    var_1fc = nullptr
                                    uint32_t var_1f8
                                    uint32_t var_1d0
                                    
                                    if (ebx s> 0)
                                        ebx = nullptr
                                        void* edi_7
                                        
                                        do
                                            if (sub_468b20(&var_1ec, &var_1d0) == 0)
                                                goto label_452b96_2
                                            
                                            uint32_t edi_5 = var_1d0
                                            
                                            if (edi_5 s> 0)
                                                sub_451eb0(*(arg1 + 0x44) + ebx, edi_5)
                                                int32_t esi_3 = 0
                                                
                                                if (edi_5 s> 0)
                                                    do
                                                        if (sub_468b70(&var_1ec, &var_1f8) == 0)
                                                            goto label_452b96_2
                                                        
                                                        uint32_t edx_1 = var_1f8
                                                        void* eax_26 = *(arg1 + 0x44) + ebx
                                                        *(*(eax_26 + 4) + (esi_3 << 2)) = edx_1
                                                        
                                                        if (*(eax_26 + 0x10) u> edx_1)
                                                            *(eax_26 + 0x10) = edx_1
                                                        
                                                        if (*(eax_26 + 0x14) u< edx_1)
                                                            *(eax_26 + 0x14) = edx_1
                                                        
                                                        esi_3 += 1
                                                    while (esi_3 s< edi_5)
                                            
                                            ebx += 0x18
                                            edi_7 = var_1fc + 1
                                            var_1fc = edi_7
                                        while (edi_7 s< var_1f4)
                                    
                                    if (sub_468b20(&var_1ec, &var_1f4) == 0)
                                    labelid_d:
                                        ebx.b = 0
                                    else
                                        uint32_t esi_4 = var_1f4
                                        sub_453740(arg1 + 0x50, esi_4)
                                        ebx = nullptr
                                        
                                        if (esi_4 s> 0)
                                            int32_t esi_5 = 0
                                            
                                            do
                                                if (sub_468d00(&var_1ec, *(arg1 + 0x50) + esi_5)
                                                        == 0)
                                                    goto label_452b96_2
                                                
                                                if (sub_468b70(&var_1ec, &var_1f8) == 0)
                                                    goto label_452b96_2
                                                
                                                uint32_t edi_8 = var_1f8
                                                
                                                if (edi_8 != 0)
                                                    uint32_t eax_32 = sub_69adc6(0x20)
                                                    var_1d0 = eax_32
                                                    var_4_1.b = 9
                                                    struct IMemory::common::CIMemory::VTable** 
                                                        ecx_32
                                                    
                                                    if (eax_32 == 0)
                                                        ecx_32 = nullptr
                                                    else
                                                        ecx_32 = sub_403380(eax_32)
                                                    
                                                    var_4_1.b = 8
                                                    *(esi_5 + *(arg1 + 0x50) + 0x18) = ecx_32
                                                    (*(**(esi_5 + *(arg1 + 0x50) + 0x18) + 0xc))(
                                                        edi_8 + 1)
                                                    
                                                    if (sub_468dd0(&var_1ec, 
                                                            (*(**(esi_5 + *(arg1 + 0x50) + 0x18)
                                                                + 0x18))(edi_8, eax_4)) == 0)
                                                        goto label_452b96_2
                                                    
                                                    *((*(**(esi_5 + *(arg1 + 0x50) + 0x18)
                                                        + 0x18))() + edi_8) = 0
                                                
                                                ebx += 1
                                                esi_5 += 0x1c
                                            while (ebx s< var_1f4)
                                        
                                        void var_184
                                        
                                        if (var_1e0 s< 2)
                                        label_452c45:
                                            
                                            if (var_1e0 s< 4)
                                                ebx = arg1
                                            label_452d3b:
                                                
                                                if (sub_452de0(ebx, &var_1ec) == 0)
                                                labelid_d:
                                                    ebx.b = 0
                                                else
                                                    *(ebx + 0x6c) = 1
                                                    ebx.b = 1
                                            else if (sub_468b20(&var_1ec, &var_1f8) == 0)
                                            labelid_d:
                                                ebx.b = 0
                                            else
                                                uint32_t ebp_4 = var_1f8
                                                int32_t edi_11 = 0
                                                ebx = arg1
                                                
                                                if (ebp_4 s<= 0)
                                                    goto label_452d3b
                                                
                                                while (true)
                                                    struct IDebugFileConstVariable::debugfile::CConstVar::VTable
                                                        ** eax_60 = sub_69adc6(0x7c)
                                                    int32_t* esi_10
                                                    
                                                    if (eax_60 == 0)
                                                        esi_10 = nullptr
                                                    else
                                                        esi_10 = sub_451f00(eax_60)
                                                    
                                                    var_1fc = esi_10
                                                    
                                                    if (sub_452040(esi_10, &var_1ec) == 0)
                                                        if (esi_10 != 0)
                                                            (*(*esi_10 + 0x28))(1)
                                                        
                                                        break
                                                    
                                                    sub_412de0(ebx + 0x30, &var_1fc)
                                                    void* esi_11 = var_1fc
                                                    sub_401f60(&var_184, (**esi_11)(eax_4))
                                                    var_4_1.b = 0xc
                                                    var_4_1.b = 8
                                                    *sub_4535b0(ebx + 0x3c, &var_184) = esi_11
                                                    sub_401fb0(&var_184)
                                                    edi_11 += 1
                                                    
                                                    if (edi_11 s>= ebp_4)
                                                        goto label_452d3b
                                                
                                            labelid_d:
                                                ebx.b = 0
                                        else if (sub_468b20(&var_1ec, &var_1f8) == 0)
                                        label_452b96:
                                            ebx.b = 0
                                        else
                                            uint32_t ebp_2 = var_1f8
                                            int32_t edi_9 = 0
                                            
                                            if (ebp_2 s<= 0)
                                            label_452b57:
                                                
                                                if (sub_468b20(&var_1ec, &var_1f8) != 0)
                                                    uint32_t ebp_3 = var_1f8
                                                    
                                                    if (ebp_3 s> 0)
                                                        int32_t edi_10 = 0
                                                        
                                                        do
                                                            struct IDebugFileStruct::debugfile::CStruct::VTable
                                                                ** eax_52 = sub_69adc6(0x44)
                                                            struct IDebugFileStruct::debugfile::CStruct::VTable
                                                                ** esi_8
                                                            
                                                            if (eax_52 == 0)
                                                                esi_8 = nullptr
                                                            else
                                                                esi_8 = sub_454af0(eax_52)
                                                            
                                                            var_1fc = esi_8
                                                            struct 
                                                                fileimage::CFileImageAnalyser::VTable* 
                                                                const* var_214_27 = &var_1ec
                                                            
                                                            if (sub_454c40(esi_8) == 0)
                                                                if (esi_8 != 0)
                                                                    (*esi_8)->vFunc_6(1)
                                                                
                                                                goto label_452b96_2
                                                            
                                                            sub_412de0(arg1 + 0x1c, &var_1fc)
                                                            void* esi_9 = var_1fc
                                                            sub_401f60(&var_184, (**esi_9)(eax_4))
                                                            var_4_1.b = 0xb
                                                            var_4_1.b = 8
                                                            *sub_4535b0(arg1 + 0x28, &var_184) =
                                                                esi_9
                                                            sub_401fb0(&var_184)
                                                            edi_10 += 1
                                                        while (edi_10 s< ebp_3)
                                                    
                                                    goto label_452c45
                                                
                                            label_452b96_1:
                                                ebx.b = 0
                                            else
                                                while (true)
                                                    struct IDebugFileFunction::debugfile::CFunction::VTable
                                                        ** eax_45 = sub_69adc6(0x74)
                                                    int32_t* esi_6
                                                    
                                                    if (eax_45 == 0)
                                                        esi_6 = nullptr
                                                    else
                                                        esi_6 = sub_453de0(eax_45)
                                                    
                                                    var_1fc = esi_6
                                                    
                                                    if (sub_453f20(esi_6, &var_1ec) == 0)
                                                        if (esi_6 != 0)
                                                            (*(*esi_6 + 0x44))(1)
                                                        
                                                        break
                                                    
                                                    sub_412de0(arg1 + 8, &var_1fc)
                                                    void* esi_7 = var_1fc
                                                    sub_401f60(&var_184, (**esi_7)(eax_4))
                                                    var_4_1.b = 0xa
                                                    var_4_1.b = 8
                                                    *sub_4535b0(arg1 + 0x14, &var_184) = esi_7
                                                    sub_401fb0(&var_184)
                                                    edi_9 += 1
                                                    
                                                    if (edi_9 s>= ebp_2)
                                                        goto label_452b57
                                                
                                            label_452b96_2:
                                                ebx.b = 0
                        
                        var_4_1.b = 6
                        sub_451df0(&var_1c0)
                        sub_403510(&var_1a8)
                        sub_403510(&var_1b8)
                        sub_401fb0(&var_16c)
                        esi_1 = var_1cc
                    else
                        ebx.b = 0
                        sub_403510(&var_1b8)
                        sub_401fb0(&var_16c)
                        esi_1 = var_1cc
        
        if (var_188_1 u>= 0x10)
            j__free(var_19c.d)
        
        int32_t var_188_2 = 0xf
        int32_t var_18c_2 = 0
        var_19c = 0
    else
        ebx.b = 0
    
    if (esi_1 != 0)
        j__free(esi_1)
    
    hFindFile.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_1fc)
return hFindFile
