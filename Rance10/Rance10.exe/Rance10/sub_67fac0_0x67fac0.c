// 函数: sub_67fac0
// 地址: 0x67fac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746b47
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2f0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_194 = arg1
int32_t var_190 = 0
int32_t* var_198 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
int32_t var_190_1 = 1
char var_44
void** edx
int32_t* eax_4 = sub_4175e0(&ExceptionList, edx, &var_44, "\*")
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_4056a0(&var_2c, eax_4)
int32_t var_8_2 = 1
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
HANDLE hFindFile
sub_67f6b0(&var_2c, &hFindFile)
HANDLE hFindFile_3
sub_67f6f0(&hFindFile_3)
var_8_2.b = 3
HANDLE hFindFile_2

for (hFindFile_2 = hFindFile; hFindFile_2 != 0xffffffff; hFindFile_2 = hFindFile)
    WIN32_FIND_DATAA findFileData
    uint32_t dwFileAttributes = findFileData.dwFileAttributes
    
    if (dwFileAttributes != 0xffffffff && (dwFileAttributes.b & 0x10) != 0)
        if (arg1[1] == arg1[2])
            sub_4170d0(arg1, 1)
            hFindFile_2 = hFindFile
        
        char* eax_8 = arg1[1]
        char* var_194_1 = eax_8
        char* var_19c_1 = eax_8
        var_8_2.b = 4
        
        if (eax_8 != 0)
            var_158
            sub_403360(eax_8, &var_158)
            hFindFile_2 = hFindFile
        
        var_8_2.b = 3
        arg1[1] += 0x18
    
    if (hFindFile_2 == 0xffffffff)
        break
    
    if (FindNextFileA(hFindFile_2, &findFileData) == 0)
        FindClose(hFindFile)
        hFindFile_2 = 0xffffffff
        hFindFile = 0xffffffff
        break
    
    sub_67f650(&hFindFile)

HANDLE hFindFile_1 = hFindFile_3

if (hFindFile_1 != 0xffffffff)
    FindClose(hFindFile_1)
    hFindFile_2 = hFindFile

if (hFindFile_2 != 0xffffffff)
    FindClose(hFindFile_2)

var_8_2.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

char var_18c
int32_t eax_10
eax_10.b = var_18c
int32_t* ecx_6 = *arg1
void* edx_2 = arg1[1] - ecx_6
var_18c = eax_10.b
int32_t eax_12
int32_t edx_3
edx_3:eax_12 = muls.dp.d(0x2aaaaaab, edx_2)
sub_680090(eax_12, arg1[1], ecx_6, edx_2 s/ 0x18, &var_18c)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
