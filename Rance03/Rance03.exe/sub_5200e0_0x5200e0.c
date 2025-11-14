// 函数: sub_5200e0
// 地址: 0x5200e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2d0d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1c0
int32_t eax_2 = __security_cookie ^ &var_1c0
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpFileName_1
sub_520ed0(arg1, &lpFileName_1)
int32_t var_4 = 0
int32_t var_170
int32_t var_16c
char* hFindFile
uint32_t ebx

if (var_170 != 0)
    void** lpFileName = &lpFileName_1
    
    if (var_16c u>= 0x10)
        lpFileName = lpFileName_1
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
    
    if (hFindFile == 0xffffffff || (findFileData.dwFileAttributes.b & 0x10) != 0)
        ebx.b = 1
    else
        struct filesystem::CFile::VTable* const var_1ac = &filesystem::CFile::`vftable'
        int32_t var_1a8_1 = 0xffffffff
        int32_t var_1a4
        __builtin_memset(&var_1a4, 0, 0x14)
        var_4.b = 2
        int32_t var_19c
        bool cond:1_1 = sub_604a80(&lpFileName_1, &var_19c).b == 0
        var_4.b = 1
        int32_t esi_1 = var_19c
        hFindFile.b = cond:1_1
        uint32_t var_198
        
        if (hFindFile.b != 0)
            void** lpFileName_2 = &lpFileName_1
            
            if (var_16c u>= 0x10)
                lpFileName_2 = lpFileName_1
            
            void** lpFileName_3 = lpFileName_2
            sub_64b530(0x6e3178)
            ebx.b = 0
        else if (esi_1 != var_198)
            struct passregister::CZlibDecompressor::VTable* const var_190 =
                &passregister::CZlibDecompressor::`vftable'
            int32_t* var_18c_1 = nullptr
            var_4.b = 3
            
            if (sub_451e10(&var_190).b != 0)
                struct fileimage::CFileImageAnalyser::VTable* const var_1b8 =
                    &fileimage::CFileImageAnalyser::`vftable'
                int32_t var_154_1 = 0xf
                int32_t var_158_1 = 0
                char var_168 = 0
                var_4.b = 5
                
                if (sub_468d00(&var_1b8, &var_168) == 0)
                    ebx.b = 0
                else
                    uint32_t var_1bc
                    
                    if (sub_40c250(&var_168, &data_6e31a8) == 0)
                        ebx.b = 0
                    else if (sub_468b20(&var_1b8, &var_1bc) == 0 || var_1bc != 0)
                        ebx.b = 0
                    else
                        uint32_t var_184
                        
                        if (sub_468b70(&var_1b8, &var_1bc) == 0)
                            ebx.b = 0
                        else if (sub_468b70(&var_1b8, &var_184) == 0)
                            ebx.b = 0
                        else
                            uint32_t ecx_7 = var_1bc
                            
                            if (ecx_7 == 0)
                                ebx.b = 1
                            else
                                ebx = var_184
                                
                                if (ebx == 0)
                                    ebx.b = 1
                                else if (esi_1 u>= var_198 || esi_1 == 0 || ebx + esi_1 u> var_198)
                                    ebx.b = 0
                                else
                                    sub_448e90(&var_1ac, ecx_7)
                                    var_4.b = 6
                                    
                                    if (var_18c_1 == 0)
                                        sub_403510(&var_1ac)
                                        ebx.b = 0
                                    else if ((*(*var_18c_1 + 8))(var_1ac, var_1bc, esi_1, ebx) == 0)
                                        sub_403510(&var_1ac)
                                        ebx.b = 0
                                    else if (sub_468a60(&var_1b8, ebx) == 0)
                                        sub_403510(&var_1ac)
                                        ebx.b = 0
                                    else if (sub_520cc0(arg1, &var_1ac) == 0)
                                        sub_403510(&var_1ac)
                                        ebx.b = 0
                                    else
                                        sub_403510(&var_1ac)
                                        ebx.b = 1
                
                sub_401fb0(&var_168)
            else
                ebx.b = 0
            
            var_4.b = 1
            
            if (var_18c_1 != 0)
                (*(*var_18c_1 + 4))(eax_4)
        else
            ebx.b = 1
        
        if (esi_1 != 0)
            j__free(esi_1)
else
    ebx.b = 0

if (var_16c u>= 0x10)
    j__free(lpFileName_1)

hFindFile.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_1c0)
return hFindFile
