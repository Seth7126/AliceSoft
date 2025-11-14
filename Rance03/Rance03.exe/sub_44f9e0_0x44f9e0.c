// 函数: sub_44f9e0
// 地址: 0x44f9e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7409
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1a8
int32_t eax_2 = __security_cookie ^ &var_1a8
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_1a4 = 0
HANDLE hFindFile = data_75d4d4
HANDLE hFindFile_1 = hFindFile

if (*(hFindFile + 0x14) == 0)
    hFindFile.b = 1
else
    void* lpFileName_1 = hFindFile + 4
    PSTR lpFileName
    
    if (*(hFindFile + 0x18) u< 0x10)
        lpFileName = lpFileName_1
    else
        lpFileName = *lpFileName_1
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile == 0xffffffff)
        hFindFile.b = 1
    else
        FindClose(hFindFile)
        
        if ((findFileData.dwFileAttributes.b & 0x10) != 0)
            hFindFile.b = 1
        else
            int32_t var_4 = 0
            struct filesystem::CFile::VTable* const var_194 = &filesystem::CFile::`vftable'
            int32_t var_190_1 = 0xffffffff
            int32_t var_18c
            __builtin_memset(&var_18c, 0, 0x14)
            var_4.b = 1
            var_1a4 = 1
            int32_t var_184
            char eax_5 = sub_604a80(lpFileName_1, &var_184)
            int32_t edi_1 = var_184
            uint32_t var_180
            
            if (eax_5 == 0 || edi_1 == var_180)
                eax_5 = 1
            else
                eax_5 = 0
            
            int32_t var_4_1 = 0
            uint32_t ebx_1
            
            if (eax_5 == 0)
                struct commonsystemdata::CZlibDecompressor::VTable* const var_178 =
                    &commonsystemdata::CZlibDecompressor::`vftable'
                int32_t* var_174_1 = nullptr
                var_4_1.b = 2
                
                if (sub_451e10(&var_178).b != 0)
                    struct fileimage::CFileImageAnalyser::VTable* const var_1a0 =
                        &fileimage::CFileImageAnalyser::`vftable'
                    int32_t var_154_1 = 0xf
                    int32_t var_158_1 = 0
                    char var_168 = 0
                    var_4_1.b = 4
                    
                    if (sub_468d00(&var_1a0, &var_168) == 0)
                        ebx_1.b = 0
                    else if (sub_40c250(&var_168, 0x6db860) == 0)
                        ebx_1.b = 0
                    else if (sub_468b20(&var_1a0, &var_1a4) == 0 || var_1a4 != 0)
                        ebx_1.b = 0
                    else
                        uint32_t var_170
                        
                        if (sub_468b70(&var_1a0, &var_1a4) == 0)
                            ebx_1.b = 0
                        else if (sub_468b70(&var_1a0, &var_170) == 0)
                            ebx_1.b = 0
                        else
                            uint32_t ecx_7 = var_1a4
                            
                            if (ecx_7 == 0)
                                ebx_1.b = 1
                            else
                                ebx_1 = var_170
                                
                                if (ebx_1 == 0)
                                    ebx_1.b = 1
                                else if (edi_1 u>= var_180 || edi_1 == 0
                                        || ebx_1 + edi_1 u> var_180)
                                    ebx_1.b = 0
                                else
                                    sub_448e90(&var_194, ecx_7)
                                    var_4_1.b = 5
                                    
                                    if (var_174_1 == 0)
                                        sub_403510(&var_194)
                                        ebx_1.b = 0
                                    else if ((*(*var_174_1 + 8))(var_194, var_1a4, edi_1, ebx_1)
                                            == 0)
                                        sub_403510(&var_194)
                                        ebx_1.b = 0
                                    else if (sub_468a60(&var_1a0, ebx_1) == 0)
                                        sub_403510(&var_194)
                                        ebx_1.b = 0
                                    else if (sub_4503e0(hFindFile_1, &var_194) == 0)
                                        sub_403510(&var_194)
                                        ebx_1.b = 0
                                    else
                                        sub_403510(&var_194)
                                        ebx_1.b = 1
                    
                    sub_401fb0(&var_168)
                else
                    ebx_1.b = 0
                
                var_4_1.b = 0
                
                if (var_174_1 != 0)
                    (*(*var_174_1 + 4))(eax_4)
            else
                if (*(lpFileName_1 + 0x14) u>= 0x10)
                    lpFileName_1 = *lpFileName_1
                
                void* lpFileName_2 = lpFileName_1
                sub_64b530(0x6db830)
                ebx_1.b = 0
            
            if (edi_1 != 0)
                j__free(edi_1)
            
            hFindFile.b = ebx_1.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_1a8)
return hFindFile
