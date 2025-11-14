// 函数: sub_5e7500
// 地址: 0x5e7500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cb5c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_31c
int32_t eax_2 = __security_cookie ^ &var_31c
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_6 = *(arg1 + 0x254)
int32_t* var_300 = eax_6 + 0x18
int32_t __saved_edi
char* edx = (*(*(eax_6 + 0x3c8) + 8))(__security_cookie ^ &__saved_edi)
int32_t var_1e8 = 0xf
int32_t var_1ec = 0
char var_1fc = 0
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_8
    
    do
        eax_8.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_8.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_402110(&var_1fc, edx, ecx_1)
int32_t var_c_1 = 0
char* edx_1 = (*(*(eax_6 + 0x18) + 0x18))()
int32_t var_29c = 0xf
int32_t var_2a0 = 0
char var_2b0 = 0
void* ecx_5

if (*edx_1 != 0)
    char* ecx_6 = edx_1
    char* eax_10
    
    do
        eax_10.b = *ecx_6
        ecx_6 = &ecx_6[1]
    while (eax_10.b != 0)
    ecx_5 = ecx_6 - &ecx_6[1]
else
    ecx_5 = nullptr

sub_402110(&var_2b0, edx_1, ecx_5)
var_c_1.b = 1
char var_280[0x10]
char* eax_11 = sub_4028a0(&var_280, &var_2b0)
var_c_1.b = 2
char var_244
sub_410b00(eax_11, &var_1fc, &var_244, eax_11)
int32_t var_26c

if (var_26c u>= 0x10)
    j__free(var_280[0].d)

int32_t var_26c_1 = 0xf
int32_t var_270 = 0
var_280[0] = 0

if (var_29c u>= 0x10)
    j__free(var_2b0.d)

struct sys40::CScreenshotFolderPath::VTable* const var_2e4 =
    &sys40::CScreenshotFolderPath::`vftable'
int32_t var_2cc = 0xf
int32_t var_2d0 = 0
char var_2e0 = 0
var_c_1.b = 6
int32_t var_2b4 = 0xf
int32_t var_2b8 = 0
char var_2c8 = 0
sub_402110(&var_2c8, "ScreenshotFolderPath.sav", 0x18)
var_c_1.b = 7
char var_214
sub_410930(sub_5e9180(&var_2e4, &var_244), &var_1fc, &var_214, "Screenshot\")
var_c_1.b = 8
int32_t* var_2fc
int32_t var_2e8

if (var_2d0 == 0)
    sub_401ff0(&var_2e0, &var_214, 0, 0xffffffff)
else
    char* lpFileName = sub_402e90(&var_2fc, &var_2e0)
    
    if (*(lpFileName + 0x14) u>= 0x10)
        lpFileName = *lpFileName
    
    WIN32_FIND_DATAA findFileData
    HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
        hFindFile.b = (findFileData.dwFileAttributes u>> 4).b & 1
    else
        hFindFile.b = 0
    
    void* ebx
    ebx.b = hFindFile.b == 0
    
    if (var_2e8 u>= 0x10)
        j__free(var_2fc)
    
    if (ebx.b != 0)
        sub_401ff0(&var_2e0, &var_214, 0, 0xffffffff)

var_c_1.b = 9
sub_607ce0(sub_402e90(&var_2fc, &var_2e0))
var_c_1.b = 8

if (var_2e8 u>= 0x10)
    j__free(var_2fc)

struct sys40::CScreenshotSaveType::VTable* const var_268 = &sys40::CScreenshotSaveType::`vftable'
int32_t var_250 = 0xf
int32_t var_254 = 0
char var_264 = 0
sub_402110(&var_264, "ScreenshotSaveType.sav", 0x16)
var_c_1.b = 0xa
struct win32only::CSaveFileNameDlg::VTable* const var_314 = nullptr
char eax_15 = sub_5e93a0(&var_268, &var_244, &var_314)
struct win32only::CSaveFileNameDlg::VTable* const esi_3 = var_314
var_c_1.b = 8
var_268 = &sys40::CScreenshotSaveType::`vftable'

if (eax_15 == 0)
    esi_3 = nullptr

if (var_250 u>= 0x10)
    j__free(var_264.d)

var_314 = &win32only::CSaveFileNameDlg::`vftable'
int32_t* eax_16 = sub_69adc6(0x560)
int32_t* param0

if (eax_16 == 0)
    param0 = nullptr
else
    param0 = sub_698650(eax_16)

int32_t* param0_1 = param0
sub_698710(param0)
int32_t var_284 = 0xf
int32_t var_288 = 0
char var_298 = 0
var_c_1.b = 0xc

if (esi_3 == 0)
    param0[6] = 1
    int32_t ecx_22
    int32_t edx_7
    ecx_22, edx_7 = sub_402110(&var_298, 0x6eb6d4, 3)
    void var_308
    sub_69bc05(&var_308, edx_7, ecx_22, &var_308)
    void var_184
    int32_t ecx_23
    int32_t edx_8
    ecx_23, edx_8 = sub_69b98b(&var_184, &var_308)
    sub_69bc05(&var_308, edx_8, ecx_23, &var_308)
    sub_69b98b(&var_268, &var_308)
    struct sys40::CScreenshotSaveType::VTable* const var_338_3 = var_268
    int32_t var_33c_1 = var_264.d
    int32_t var_260
    int32_t var_340_1 = var_260
    int32_t var_178
    int32_t var_344_1 = var_178
    int32_t var_174
    int32_t var_348_1 = var_174 + 1
    int32_t var_170
    int32_t var_34c_1 = var_170 + 0x76c
    char var_19c
    int32_t* eax_20 = sub_4691f0(&var_19c, "_%4d%02d%02d_%02d%02d%02d")
    var_c_1.b = 0xd
    char var_1e4
    char* eax_22 = sub_401f60(&var_1e4, (*(*var_300 + 4))())
    var_c_1.b = 0xe
    char var_1b4[0x10]
    char* eax_23 = sub_4028a0(&var_1b4, &var_2e0)
    var_c_1.b = 0xf
    char var_1cc
    char* eax_24 = sub_410a20(eax_23, eax_23, &var_1cc, eax_22)
    var_c_1.b = 0x10
    char* eax_25 = sub_410a20(eax_24, eax_24, &var_2b0, eax_20)
    var_c_1.b = 0x11
    char* eax_26 = sub_410a80(eax_25.b, eax_25, &var_280, U".")
    var_c_1.b = 0x12
    char* var_22c
    sub_410ad0(eax_26, eax_26, &var_22c, &var_298)
    
    if (var_26c_1 u>= 0x10)
        j__free(var_280[0].d)
    
    int32_t var_26c_2 = 0xf
    int32_t var_270_1 = 0
    var_280[0] = 0
    
    if (var_29c u>= 0x10)
        j__free(var_2b0.d)
    
    int32_t var_29c_1 = 0xf
    int32_t var_2a0_1 = 0
    var_2b0 = 0
    int32_t var_1b8
    
    if (var_1b8 u>= 0x10)
        j__free(var_1cc.d)
    
    int32_t var_1b8_1 = 0xf
    int32_t var_1bc_1 = 0
    var_1cc = 0
    int32_t var_1a0
    
    if (var_1a0 u>= 0x10)
        j__free(var_1b4[0].d)
    
    int32_t var_1a0_1 = 0xf
    int32_t var_1a4_1 = 0
    var_1b4[0] = 0
    int32_t var_1d0
    
    if (var_1d0 u>= 0x10)
        j__free(var_1e4.d)
    
    int32_t var_1d0_1 = 0xf
    int32_t var_1d4_1 = 0
    var_1e4 = 0
    var_c_1.b = 0x19
    int32_t var_188
    
    if (var_188 u>= 0x10)
        j__free(var_19c.d)
    
    int32_t var_188_1 = 0xf
    int32_t var_18c_1 = 0
    var_19c = 0
    int32_t var_218
    
    if (var_218 u< 0x10)
        _strcpy_s(&param0[0x16], 0x104, &var_22c)
    else
        char* eax_27 = var_22c
        
        if (eax_27 != 0)
            _strcpy_s(&param0[0x16], 0x104, eax_27)
    
    char* eax_29 = &var_2e0
    
    if (var_2cc u>= 0x10)
        eax_29 = var_2e0.d
    
    sub_401f60(&var_2fc, eax_29)
    *(param0[0x157] + param0 + 0x15c) = 0
    param0[1] = arg2
    char* eax_32 = &var_298
    
    if (var_284 u>= 0x10)
        eax_32 = var_298.d
    
    param0[0xf] = eax_32
    int32_t* eax_33 = &var_2fc
    
    if (var_2e8 u>= 0x10)
        eax_33 = var_2fc
    
    param0[0xb] = eax_33
    BOOL eax_34
    eax_34.b = GetSaveFileNameA(param0) != 0
    eax_34.b = eax_34.b == 0
    char var_315_1 = eax_34.b
    
    if (var_2e8 u>= 0x10)
        j__free(var_2fc)
        eax_34.b = var_315_1
    
    if (eax_34.b == 0 && param0[6] == 1)
        int32_t var_330_30 = sub_401f60(&var_2fc, &param0[0x16])
        var_c_1.b = 0x1a
        char eax_37 = sub_5ea4b0(arg1 + 0x9c, &var_2fc)
        var_c_1.b = 0x19
        
        if (var_2e8 u>= 0x10)
            j__free(var_2fc)
        
        if (eax_37 == 0)
            sub_64b6b0(0x6eb440)
        else
            void* var_330_32 = &param0[0x16]
            sub_64b6b0(0x6eb468)
            var_c_1.b = 0x1b
            sub_607ce0(sub_402e90(&var_2fc, &var_244))
            var_c_1.b = 0x19
            sub_401fb0(&var_2fc)
            struct sys40::CScreenshotSaveType::VTable** eax_39
            int32_t ecx_40
            eax_39, ecx_40 = sub_5e92f0(&var_268)
            int32_t var_330_33 = ecx_40
            var_c_1.b = 0x1c
            sub_5e9530(eax_39, &var_244)
            var_c_1.b = 0x19
            sub_5e9370(&var_268)
            sub_401f60(&var_2fc, &param0[0x16])
            var_c_1.b = 0x1d
            var_c_1.b = 0x1e
            char* eax_41 = sub_402e90(&var_184, sub_402960(&var_268, &var_2fc))
            var_c_1.b = 0x1f
            
            if (&var_2e0 != eax_41)
                sub_401ff0(&var_2e0, eax_41, 0, 0xffffffff)
            
            sub_401fb0(&var_184)
            sub_401fb0(&var_268)
            var_c_1.b = 0x19
            sub_401fb0(&var_2fc)
            sub_5e9000(&var_2e4, &var_244)
    
    if (var_218 u>= 0x10)
        j__free(var_22c)
    
    int32_t var_218_1 = 0xf
    int32_t var_21c_1 = 0
    var_22c.b = 0
    
    if (var_284 u>= 0x10)
        j__free(var_298.d)

int32_t var_284_1 = 0xf
int32_t var_288_1 = 0
var_298 = 0
int32_t result = j__free(param0)
int32_t var_200

if (var_200 u>= 0x10)
    result = j__free(var_214.d)

int32_t var_200_1 = 0xf
int32_t var_204 = 0
var_214 = 0
var_2e4 = &sys40::CScreenshotFolderPath::`vftable'

if (var_2b4 u>= 0x10)
    result = j__free(var_2c8.d)

int32_t var_2b4_1 = 0xf
int32_t var_2b8_1 = 0
var_2c8 = 0

if (var_2cc u>= 0x10)
    result = j__free(var_2e0.d)

int32_t var_2cc_1 = 0xf
int32_t var_2d0_1 = 0
var_2e0 = 0
int32_t var_230

if (var_230 u>= 0x10)
    result = j__free(var_244.d)

int32_t var_230_1 = 0xf
int32_t var_234 = 0
var_244 = 0

if (var_1e8 u>= 0x10)
    result = j__free(var_1fc.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_31c)
return result
