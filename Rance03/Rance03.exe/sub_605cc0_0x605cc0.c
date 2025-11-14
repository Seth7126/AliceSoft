// 函数: sub_605cc0
// 地址: 0x605cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccc57
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_1c0
int32_t eax_2 = __security_cookie ^ &var_1c0
int32_t __saved_edi
int32_t var_1d4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_1c0 = arg2
sub_4107c0(*arg2, arg2[1])
arg2[1] = *arg2
struct filesystem::CFindFile::VTable* const var_1b8 = &filesystem::CFindFile::`vftable'
struct filesystem::CFindFile::CImpl::VTable** eax_6 = sub_69adc6(0x148)
struct filesystem::CFindFile::CImpl::VTable** ebp = eax_6

if (ebp == 0)
    ebp = nullptr
else
    *ebp = &filesystem::CFindFile::CImpl::`vftable'
    ebp[1] = 0xffffffff

struct filesystem::CFindFile::CImpl::VTable** var_1b4 = ebp
int32_t var_4 = 0
uint32_t var_19c = 0xf
int32_t var_1a0 = 0
char var_1b0 = 0
var_4.b = 1
int32_t* var_180
sub_410930(eax_6, arg1, &var_180, "\*")
var_4.b = 2
int32_t* edx_1 = &var_180
int32_t var_184 = 0xf
int32_t var_16c

if (var_16c u>= 0x10)
    edx_1 = var_180

int32_t var_188 = 0
char var_198 = 0
void* ecx_1

if (*edx_1 != 0)
    int32_t* ecx_2 = edx_1
    void* esi_1 = ecx_2 + 1
    char i
    
    do
        i = *ecx_2
        ecx_2 += 1
    while (i != 0)
    ecx_1 = ecx_2 - esi_1
else
    ecx_1 = nullptr

sub_402110(&var_198, edx_1, ecx_1)
var_4.b = 3
var_4.b = 2
int32_t* ebx
ebx.b = sub_6053b0(ebp, &var_198, &var_1b0).b == 0

if (var_184 u>= 0x10)
    j__free(var_198.d)

if (ebx.b == 0)
    void** ebx_3
    
    while (true)
        void* edx_2 = &var_1b0
        int32_t ecx_5 = 1
        
        if (var_19c u>= 0x10)
            edx_2 = var_1b0.d
        
        if (var_1a0 u< 1)
            ecx_5 = var_1a0
        
        int32_t eax_9
        bool cond:6_1
        
        if (ecx_5 == 0)
        label_605ea3:
            
            if (var_1a0 u>= 1)
                eax_9.b = var_1a0 != 1
            else
                eax_9 = 0xffffffff
            
            cond:6_1 = eax_9 == 0
        else
            void* const esi_2 = &data_6ebbd4
            int32_t i_2 = ecx_5 - 4
            
            if (ecx_5 u>= 4)
                int32_t i_1
                
                do
                    if (*edx_2 != *esi_2)
                        goto label_605e66
                    
                    edx_2 += 4
                    esi_2 += 4
                    i_1 = i_2
                    i_2 -= 4
                while (i_1 u>= 4)
            
            if (i_2 == 0xfffffffc)
                eax_9 = 0
            else
            label_605e66:
                int32_t* eax_7
                eax_7.b = *edx_2
                char temp1_1 = *esi_2
                
                if (eax_7.b != temp1_1)
                    eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp1_1) | 1
                else if (i_2 == 0xfffffffd)
                    eax_9 = 0
                else
                    eax_7.b = *(edx_2 + 1)
                    char temp4_1 = *(esi_2 + 1)
                    
                    if (eax_7.b != temp4_1)
                        eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp4_1) | 1
                    else if (i_2 == 0xfffffffe)
                        eax_9 = 0
                    else
                        eax_7.b = *(edx_2 + 2)
                        char temp6_1 = *(esi_2 + 2)
                        
                        if (eax_7.b != temp6_1)
                            eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp6_1) | 1
                        else if (i_2 == 0xffffffff)
                            eax_9 = 0
                        else
                            eax_7.b = *(edx_2 + 3)
                            char temp7_1 = *(esi_2 + 3)
                            
                            if (eax_7.b == temp7_1)
                                eax_9 = 0
                            else
                                eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp7_1) | 1
            
            cond:6_1 = eax_9 == 0
            
            if (eax_9 == 0)
                goto label_605ea3
        
        eax_9.b = cond:6_1
        eax_9.b = eax_9.b == 0
        int32_t eax_11
        
        if (eax_9.b != 0)
            char* ecx_6 = &var_1b0
            int32_t eax_10 = 2
            
            if (var_19c u>= 0x10)
                ecx_6 = var_1b0.d
            
            if (var_1a0 u< 2)
                eax_10 = var_1a0
            
            eax_11 = sub_405190(eax_10, 0x6ebbd0, ecx_6, eax_10)
            bool cond:5_1 = eax_11 == 0
            
            if (eax_11 == 0)
                if (var_1a0 u>= 2)
                    eax_11.b = var_1a0 != 2
                else
                    eax_11 = 0xffffffff
                
                cond:5_1 = eax_11 == 0
            
            eax_11.b = cond:5_1
            eax_11.b = eax_11.b == 0
        
        if (eax_9.b == 0 || eax_11.b == 0)
            ebx_3 = var_1c0
        else
            int32_t var_168
            int32_t* eax_12 = sub_410930(eax_11, arg1, &var_168, U"\")
            var_4.b = 4
            char* lpFileName = sub_410ad0(eax_12, eax_12, &var_198, &var_1b0)
            
            if (*(lpFileName + 0x14) u>= 0x10)
                lpFileName = *lpFileName
            
            WIN32_FIND_DATAA findFileData
            HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
            uint32_t ebx_1
            
            if (hFindFile != 0xffffffff)
                FindClose(hFindFile)
                ebx_1.b = (findFileData.dwFileAttributes u>> 4).b & 1
            else
                ebx_1.b = 0
            
            if (var_184 u>= 0x10)
                j__free(var_198.d)
            
            var_4.b = 2
            var_184 = 0xf
            int32_t var_188_1 = 0
            var_198 = 0
            int32_t var_154
            
            if (var_154 u>= 0x10)
                j__free(var_168)
            
            ebx_3 = var_1c0
            
            if (ebx_1.b != 0)
                sub_421cd0(ebx_3, &var_1b0)
        
        HANDLE hFindFile_2 = ebp[1]
        
        if (hFindFile_2 == 0xffffffff)
            break
        
        if (FindNextFileA(hFindFile_2, &ebp[2]) == 0)
            break
        
        if (ebp[0xd].b != 0)
            void* ecx_11 = &ebp[0xd]
            void* esi_3 = ecx_11 + 1
            BOOL eax_14
            
            do
                eax_14.b = *ecx_11
                ecx_11 += 1
            while (eax_14.b != 0)
            sub_402110(&var_1b0, &ebp[0xd], ecx_11 - esi_3)
        else
            sub_402110(&var_1b0, &ebp[0xd], nullptr)
    
    void* ecx_14 = *ebx_3
    int32_t eax_15
    int32_t edx_8
    edx_8:eax_15 = muls.dp.d(0x2aaaaaab, ebx_3[1] - ecx_14)
    void** var_1bc
    var_1bc.b = 0
    int32_t edx_9 = edx_8 s>> 2
    int32_t eax_18 = (edx_9 u>> 0x1f) + edx_9
    sub_6064e0(eax_18, ebx_3[1], ecx_14, eax_18, var_1bc)

if (var_16c u>= 0x10)
    j__free(var_180)

int32_t var_16c_1 = 0xf
int32_t var_170 = 0
var_180.b = 0

if (var_19c u>= 0x10)
    j__free(var_1b0.d)

int32_t var_19c_1 = 0xf
int32_t var_1a0_1 = 0
var_1b0 = 0
int32_t var_4_1 = 0xffffffff
HANDLE hFindFile_1 = ebp[1]

if (hFindFile_1 != 0xffffffff && FindClose(hFindFile_1) != 0)
    ebp[1] = 0xffffffff

int32_t result = (*ebp)->vFunc_0(1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_1c0)
return result
