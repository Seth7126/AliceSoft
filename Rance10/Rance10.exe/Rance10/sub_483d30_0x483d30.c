// 函数: sub_483d30
// 地址: 0x483d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72eb9f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg3
uint32_t* var_44 = arg4
struct filesystem::CFile::VTable* var_3c = &filesystem::CFile::`vftable'
BOOL hFile = 0xffffffff
*arg4 = 0
*arg2 = 0
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_8_1 = 0

if (sub_67ed50(&var_3c, ebx) == 0)
    goto label_484088

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
char var_2c = 0
var_8_1.b = 1
int32_t var_8c_1 = 3
int32_t var_4c = 0
int32_t var_48 = 0
int32_t var_50 = 0
int32_t var_54 = 0
char eax_5 = sub_67f3c0(&var_3c, &var_2c)
char eax_6

if (eax_5 != 0)
    eax_6 = sub_407560(&var_2c, 0x75ffe4)

BOOL hObject

if (eax_5 == 0 || eax_6 == 0)
    if (hFile != 0xffffffff && var_30 u> 0)
        SetFilePointer(hFile, 0, nullptr, FILE_BEGIN)
        var_34 = 0
    
    int32_t var_8c_4 = 4
    char eax_24 = sub_67f3c0(&var_3c, &var_2c)
    char eax_25
    
    if (eax_24 != 0)
        eax_25 = sub_407560(&var_2c, "RIFF")
    
    if (eax_24 == 0 || eax_25 == 0)
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
    label_484088:
        hObject = hFile
        
        if (hObject != 0xffffffff)
            hObject = CloseHandle(hObject)
    else
        if (sub_67f1b0(&var_3c, &var_48) != 0 && var_48 != 0)
            int32_t var_8c_6 = 4
            
            if (sub_67f3c0(&var_3c, &var_2c) != 0 && sub_407560(&var_2c, "WAVE") != 0)
                int32_t var_8c_7 = 4
                
                if (sub_67f3c0(&var_3c, &var_2c) != 0)
                    char i
                    
                    do
                        if (sub_67f1b0(&var_3c, &var_4c) == 0)
                            break
                        
                        int32_t esi_2 = var_4c
                        
                        if (esi_2 == 0)
                            break
                        
                        if (sub_407560(&var_2c, "smpl") != 0)
                            sub_67f580(&var_3c, var_34 + 0x2c)
                            sub_67f1b0(&var_3c, arg2)
                            sub_67f1b0(&var_3c, var_44)
                            break
                        
                        if (sub_407560(&var_2c, "fmt ") == 0)
                            if (sub_407560(&var_2c, "data") != 0)
                                uint32_t ecx_30 = zx.d(var_50.w) u>> 3
                                *arg2 = 0
                                *var_44 = divu.dp.d(0:(divu.dp.d(0:esi_2, ecx_30)), zx.d(var_54.w))
                        else
                            sub_67f580(&var_3c, var_34 + 2)
                            sub_67f160(&var_3c, &var_54, 2)
                            sub_67f580(&var_3c, var_34 + 0xa)
                            sub_67f160(&var_3c, &var_50, 2)
                        
                        if (sub_67f580(&var_3c, var_34 + esi_2) == 0)
                            break
                        
                        int32_t var_8c_12 = 4
                        i = sub_67f3c0(&var_3c, &var_2c)
                    while (i != 0)
        
        sub_403320(&var_2c)
        hObject = sub_67ecb0(&var_3c)
else
    HANDLE hObject_1 = hFile
    
    if (hObject_1 != 0xffffffff)
        if (CloseHandle(hObject_1) != 0)
            hObject_1 = 0xffffffff
        
        HANDLE hObject_2 = hObject_1
    
    struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataOgg::VTable** eax_8 =
        sub_6e810c(0x58)
    struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataOgg::VTable** var_58_1 =
        eax_8
    var_8_1.b = 2
    struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataOgg::VTable** eax_9 =
        sub_482b30(eax_8)
    var_8_1.b = 1
    
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    if ((*eax_9)->vFunc_2(ebx, 0, 0xffffffff) != 0)
        void var_78
        sub_486630(&var_78)
        
        if ((*eax_9)->vFunc_8(&var_78) != 0)
            *arg2 = 0
            *var_44 = divu.dp.d(0:((*eax_9)->vFunc_10(eax_2)), sub_484ea0(&var_78))
    
    (*eax_9)->vFunc_1(eax_2)
    sub_403320(&var_2c)
    hObject = sub_67ecb0(&var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return hObject
